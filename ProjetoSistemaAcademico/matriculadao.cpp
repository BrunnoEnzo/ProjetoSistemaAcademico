#include "matriculadao.h"

MatriculaDAO::MatriculaDAO()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    nomeBD = "C:\\Users\\GUARDIAN\\Downloads\\SistAcad\\SistAcad\\academico.db";
    db.setDatabaseName(nomeBD);
}
void MatriculaDAO::incluir(Matricula* obj){
    if (!db.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO matricula (mat_aluno,cod_turma,sub_turma,cod_disciplina,ano_matricula,semestre,nota1,nota2,media) "
                        "VALUES (:mat_aluno, :cod_turma, :sub_turma, :cod_disciplina, :ano_matricula, :semestre, :nota1, :nota2, :media)");
    insertQuery.bindValue(":mat_aluno",obj->getMatricula());
    insertQuery.bindValue(":cod_turma", obj->getCod_turma());
    insertQuery.bindValue(":sub_turma", obj->getSub_turma());
    insertQuery.bindValue(":cod_disciplina", obj->getCod_disciplina());
    insertQuery.bindValue(":ano_matricula", obj->getAno());
    insertQuery.bindValue(":semestre", obj->getSemestre());
    insertQuery.bindValue(":nota1", obj->getNota1());
    insertQuery.bindValue(":nota2", obj->getNota2());
    insertQuery.bindValue(":media", obj->getNotaf());

    if (!insertQuery.exec()) {
        db.close();
        throw QString("Erro ao executar a inserção");
    }

    db.close();
}
Matricula* MatriculaDAO::buscar(Matricula* obj){
    if(!db.open()){
        throw QString("erro ao abrir o banco de dados");
    }
    int ano_matricula=0,semestre=0;
    float nota1=0,nota2=0;
    QSqlQuery query;
    if(obj!=nullptr){
        query.prepare("SELECT & FROM matricula WHERE ano = :ano_matricula AND semesntre = :semestre AND nota1 = :nota1 AND nota2 = :nota2;");
        query.bindValue(":ano_matricula",obj->getAno());
        query.bindValue(":semestre",obj->getSemestre());
        query.bindValue(":nota1",obj->getNota1());
        query.bindValue(":nota2",obj->getNota2());
        if(!query.exec()){
            db.close();
            throw QString("Erro ao executar a consulta");
        }
        while(query.next()){
            ano_matricula = query.value(0).toInt();
            semestre = query.value(1).toInt();
            nota1 = query.value(2).toInt();
            nota2 = query.value(3).toInt();
        }

        obj->setAno(ano_matricula);
        obj->setSemestre(semestre);
        obj->setNota1(nota1);
        obj->setNota2(nota2);

        db.close();
    }
}
void MatriculaDAO::alterar (Matricula* obj){
    Matricula* matricula = new Matricula();
    matricula->setMatricula(obj->getMatricula());
    matricula->setCod_turma(obj->getCod_turma());
    matricula->setSub_turma(obj->getSub_turma());
    matricula->setCod_disciplina(obj->getNome_disciplina());
    matricula->setAno(obj->getAno());
    matricula->setSemestre(obj->getSemestre());
    matricula->setNota1(obj->getNota1());
    matricula->setNota2(obj->getNota2());
    if(this->buscar(matricula)==nullptr){
        throw QString("Matricula não encontrada");
    }
    else{
        if(!db.open()){
            throw QString("Erro ao abrir banco de dados");
        }
        QSqlQuery query;
        query.prepare("UPDATE disciplina SET mat_aluno = :mat_aluno WHERE cod_turma = :cod_turma ");
        query.bindValue(":cod", obj->getNome_disciplina());
        query.bindValue(":mat", obj->getCod_disciplina());
        if (!query.exec()){
            db.close();
            throw QString("Erro ao executar a update");
        }
        db.close();
        delete obj;
    }
}
Matricula* MatriculaDAO::remover(Matricula* obj){

}
