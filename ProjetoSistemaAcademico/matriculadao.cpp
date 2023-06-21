#include "matriculadao.h"

MatriculaDAO::MatriculaDAO()
{
}
void MatriculaDAO::incluir(Matricula* obj){
    DatabaseManager databaseManager;

    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO matricula (mat_aluno,cod_turma,sub_turma,cod_disciplina,ano,semestre,nota1,nota2,media) "
                        "VALUES (:mat_aluno, :cod_turma, :sub_turma, :cod_disciplina, :ano, :semestre, :nota1, :nota2, :media)");
    insertQuery.bindValue(":mat_aluno",obj->getMatricula());
    insertQuery.bindValue(":cod_turma", obj->getCod_turma());
    insertQuery.bindValue(":sub_turma", obj->getSub_turma());
    insertQuery.bindValue(":cod_disciplina", obj->getCod_disciplina());
    insertQuery.bindValue(":ano", obj->getAno());
    insertQuery.bindValue(":semestre", obj->getSemestre());
    insertQuery.bindValue(":nota1", obj->getNota1());
    insertQuery.bindValue(":nota2", obj->getNota2());
    insertQuery.bindValue(":media", obj->getNotaf());

    if (!insertQuery.exec()) {
        QString errorMsg = insertQuery.lastError().text();
        databaseManager.close();
        throw QString("Erro ao executar a inserção: " + errorMsg);
    }


    //db.close();
    databaseManager.close();
}
Matricula* MatriculaDAO::buscar(Matricula* obj){
    DatabaseManager databaseManager;

    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QString mat_aluno="",cod_turma="",cod_disciplina="";
    int sub_turma=0,ano=0,semestre=0;
    float nota1=0.0,nota2=0.0,media=0.0;
    QSqlQuery query;
    if(obj!=nullptr){
        query.prepare("SELECT * FROM matricula WHERE mat_aluno = :mat_aluno AND cod_turma = :cod_turma AND sub_turma = :sub_turma AND cod_disciplina = :cod_disciplina;");
        query.bindValue(":mat_aluno",obj->getMatricula());
        query.bindValue(":cod_turma",obj->getCod_turma());
        query.bindValue(":sub_turma",obj->getSub_turma());
        query.bindValue(":cod_disciplina",obj->getCod_disciplina());
        if(!query.exec()){
            databaseManager.close();
            throw QString("Erro ao executar a consulta");
        }
        while(query.next()){
            mat_aluno = query.value(0).toString();
            cod_turma = query.value(1).toString();
            sub_turma = query.value(2).toInt();
            cod_disciplina = query.value(3).toString();
            ano = query.value(4).toInt();
            semestre = query.value(5).toInt();
            nota1 = query.value(6).toFloat();
            nota2 = query.value(7).toFloat();
            media = query.value(8).toFloat();
        }

        obj->setAno(ano);
        obj->setSemestre(semestre);
        obj->setNota1(nota1);
        obj->setNota2(nota2);
        obj->setNotaf(media);

        databaseManager.close();
    }
    if (obj->getMatricula()!="" && obj->getCod_turma()!="" && obj->getAno()!=0)
        return obj;
    else{
        delete obj;
        return nullptr;
    }
}
void MatriculaDAO::alterar (Matricula* obj){
    Matricula* matricula = new Matricula();
    matricula->setMatricula(obj->getMatricula());
    matricula->setCod_disciplina(obj->getCod_disciplina());
    matricula->setCod_turma(obj->getCod_turma());
    matricula->setSub_turma(obj->getSub_turma());
    if (this->buscar(matricula)==nullptr){
        throw QString("Aluno não encontrado!");
    }
    else{
        DatabaseManager databaseManager;

        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }
        QSqlQuery query;
        query.prepare("UPDATE matricula SET ano = :ano, semestre = :semestre, nota1 = :nota1, nota2 = :nota2, media = :media WHERE mat_aluno = :mat_aluno AND cod_turma = :cod_turma AND sub_turma = :sub_turma AND cod_disciplina = :cod_disciplina;");
        query.bindValue(":ano", obj->getAno());
        query.bindValue(":semestre", obj->getSemestre());
        query.bindValue(":nota1", obj->getNota1());
        query.bindValue(":nota2", obj->getNota2());
        query.bindValue(":media", obj->getNotaf());
        query.bindValue(":mat_aluno", obj->getMatricula());
        query.bindValue(":cod_turma", obj->getCod_turma());
        query.bindValue(":sub_turma", obj->getSub_turma());
        query.bindValue(":cod_disciplina", obj->getCod_disciplina());
        if (!query.exec()){
            databaseManager.close();
            throw QString("Erro ao executar a update");
        }
        databaseManager.close();
        delete obj;
    }
}
Matricula* MatriculaDAO::remover(Matricula* obj){
    Matricula* matricula = new Matricula();
    matricula->setMatricula(obj->getMatricula());
    matricula->setCod_disciplina(obj->getCod_disciplina());
    matricula->setCod_turma(obj->getCod_turma());
    matricula->setSub_turma(obj->getSub_turma());
    if (this->buscar(matricula)==nullptr){
        throw QString("Aluno não encontrado!");
    }
    else{
        DatabaseManager databaseManager;

        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }
        QSqlQuery query;
        query.prepare("DELETE FROM matricula WHERE mat_aluno = :mat_aluno AND cod_turma = :cod_turma AND sub_turma = :sub_turma AND cod_disciplina = :cod_disciplina ;");
        query.bindValue(":mat_aluno", obj->getMatricula());
        query.bindValue(":cod_turma", obj->getCod_turma());
        query.bindValue(":sub_turma", obj->getSub_turma());
        query.bindValue(":cod_disciplina", obj->getCod_disciplina());
        if (!query.exec()){
            databaseManager.close();
            throw QString("Erro ao executar a delete");
        }
        databaseManager.close();
        delete obj;
    }
}

std::list<Matricula*>* MatriculaDAO::listarMatricula() {
    std::list<Matricula*>* listaMatricula = new std::list<Matricula*>();

    DatabaseManager databaseManager;
    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }

    QSqlQuery query("SELECT * FROM matricula;");
    if (!query.exec()){
        databaseManager.close();
        throw QString("Erro ao executar a consulta");
    }

    while (query.next()) {
        QString matricula1 = query.value("mat_aluno").toString();
        QString codigoDisciplina = query.value("cod_disciplina").toString();
        QString codigoTurma = query.value("cod_turma").toString();
        int sub_turma = query.value("sub_turma").toInt();
        int ano = query.value("ano").toInt();
        int semestre = query.value("semestre").toInt();
        float nota1 = query.value("nota1").toFloat();
        float nota2 = query.value("nota2").toFloat();
        float media = query.value("media").toFloat();

        Matricula* matricula = new Matricula(matricula1, codigoTurma, sub_turma, codigoDisciplina, ano, semestre, nota1, nota2,media);
        listaMatricula->push_back(matricula);
    }

    databaseManager.close();

    return listaMatricula;
}
