#include "disciplinadao.h"

DisciplinaDAO::DisciplinaDAO()
{
}

void DisciplinaDAO::incluir(Disciplina* obj){
    DatabaseManager databaseManager;
    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QSqlQuery query;
    query.prepare("INSERT INTO disciplina (cod_disciplina, nom_disciplina) VALUES (:cod_disciplina, :nom_disciplina);");
    query.bindValue(":cod_disciplina", obj->getCod_disciplina());
    query.bindValue(":nom_disciplina", obj->getNome_disciplina());
    if (!query.exec()){
        databaseManager.close();
        throw QString("Erro ao executar a inserção");
    }
    databaseManager.close();
}

Disciplina* DisciplinaDAO::buscar(Disciplina* obj){
    DatabaseManager databaseManager;

    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QString codigo(""), nome("");
    QSqlQuery query;
    if (obj!=nullptr){
        query.prepare("SELECT * FROM disciplina WHERE cod_disciplina = :cod_disciplina;");
        query.bindValue(":cod_disciplina", obj->getCod_disciplina());
        if (!query.exec()){
            databaseManager.close();
            throw QString("Erro ao executar a consulta");
        }
        while (query.next()){
            codigo = query.value(0).toString();
            nome = query.value(1).toString();
        }
        obj->setCod_disciplina(codigo);
        obj->setNome_disciplina(nome);
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
        DatabaseManager databaseManager;

        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }
        QSqlQuery query;
        query.prepare("UPDATE disciplina SET nom_disciplina = :nom_disciplina WHERE cod_disciplina = :cod_disciplina ;");
        query.bindValue(":nom_disciplina", obj->getNome_disciplina());
        query.bindValue(":cod_disciplina", obj->getCod_disciplina());
        if (!query.exec()){
            databaseManager.close();
            throw QString("Erro ao executar a update");
        }
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
        DatabaseManager databaseManager;

        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }
        QSqlQuery query;
        query.prepare("DELETE FROM disciplina WHERE cod_disciplina = :cod_disciplina ;");
        query.bindValue(":cod_disciplina", obj->getCod_disciplina());
        if (!query.exec()){
            databaseManager.close();
            throw QString("Erro ao executar a delete");
        }
        databaseManager.close();
        delete obj;
    }
}

std::list<Disciplina*>* DisciplinaDAO::listarDisciplina() {
    std::list<Disciplina*>* listaDisciplina = new std::list<Disciplina*>();

    DatabaseManager databaseManager;
    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }

    QSqlQuery query("SELECT * FROM disciplina;");
    if (!query.exec()){
        databaseManager.close();
        throw QString("Erro ao executar a consulta");
    }

    while (query.next()) {
        QString codigo = query.value("cod_disciplina").toString();
        QString nome = query.value("nom_disciplina").toString();

        Disciplina* disciplina = new Disciplina(codigo, nome);
        listaDisciplina->push_back(disciplina);
    }

    databaseManager.close();

    return listaDisciplina;
}
