#include "disciplinadao.h"

DisciplinaDAO::DisciplinaDAO()
{
//    if (QSqlDatabase::contains("QSQLITE")) {
//        db = QSqlDatabase::database("QSQLITE");
//        db.close();
//    }
//    db = QSqlDatabase::addDatabase("QSQLITE");
//    nomeBD = "C:\\Users\\GUARDIAN\\Downloads\\ProjetoSistemaAcademico\\academico.db";
//    db.setDatabaseName(nomeBD);
}

void DisciplinaDAO::incluir(Disciplina* obj){
//    if (!db.open()){
//        throw QString("Erro ao abrir o banco de dados");
//    }
    DatabaseManager databaseManager;

    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QSqlQuery query;
    query.prepare("INSERT INTO disciplina (cod_disciplina, nom_disciplina) VALUES (:cod, :nom);");
    query.bindValue(":cod", obj->getCod_disciplina());
    query.bindValue(":nom", obj->getNome_disciplina());
    if (!query.exec()){
        //db.close();
        databaseManager.close();
        throw QString("Erro ao executar a inserção");
    }
    //db.close();
    databaseManager.close();
}

Disciplina* DisciplinaDAO::buscar(Disciplina* obj){
//    if (!db.open()){
//        throw QString("Erro ao abrir o banco de dados");
//    }
    DatabaseManager databaseManager;

    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QString codigo(""), nome("");
    QSqlQuery query;
    if (obj!=nullptr){
        query.prepare("SELECT * FROM disciplina WHERE cod_disciplina = :cod;");
        query.bindValue(":cod", obj->getCod_disciplina());
        if (!query.exec()){
            //db.close();
            databaseManager.close();
            throw QString("Erro ao executar a consulta");
        }
        while (query.next()){
            codigo = query.value(0).toString();
            nome = query.value(1).toString();
        }
        obj->setCod_disciplina(codigo);
        obj->setNome_disciplina(nome);
        //db.close();
        databaseManager.close();
    }
    if (obj->getCod_disciplina()!="")
        return obj;
    else{
        delete obj;
        return nullptr;
    }
}

void DisciplinaDAO::alterar(Disciplina* obj){
    Disciplina* disciplina = new Disciplina();
    disciplina->setCod_disciplina(obj->getCod_disciplina());
    if (this->buscar(disciplina)==nullptr){
        throw QString("Aluno não encontrado!");
    }
    else{
//        if (!db.open()){
//            throw QString("Erro ao abrir o banco de dados");
//        }
        DatabaseManager databaseManager;

        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }
        QSqlQuery query;
        query.prepare("UPDATE disciplina SET nom_disciplina = :nom WHERE cod_disciplina = :cod ;");
        query.bindValue(":nom", obj->getNome_disciplina());
        query.bindValue(":cod", obj->getCod_disciplina());
        if (!query.exec()){
            //db.close();
            databaseManager.close();
            throw QString("Erro ao executar a update");
        }
        //db.close();
        databaseManager.close();
        delete obj;
    }
}

Disciplina* DisciplinaDAO::remover(Disciplina* obj){
    Disciplina* disciplina = new Disciplina();
    disciplina->setCod_disciplina(obj->getCod_disciplina());
    if (this->buscar(disciplina)==nullptr){
        throw QString("Aluno não encontrado!");
    }
    else{
//        if (!db.open()){
//            throw QString("Erro ao abrir o banco de dados");
//        }
        DatabaseManager databaseManager;

        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }
        QSqlQuery query;
        query.prepare("DELETE FROM disciplina WHERE cod_disciplina = :cod ;");
        query.bindValue(":cod", obj->getCod_disciplina());
        if (!query.exec()){
            //db.close();
            databaseManager.close();
            throw QString("Erro ao executar a delete");
        }
        //db.close();
        databaseManager.close();
        delete obj;
    }
}
