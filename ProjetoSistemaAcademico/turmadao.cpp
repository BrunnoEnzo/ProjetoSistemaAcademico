#include "turmadao.h"

TurmaDAO::TurmaDAO()
{
//    if (QSqlDatabase::contains("QSQLITE")) {
//        db = QSqlDatabase::database("QSQLITE");
//        db.close();
//    }

//    db = QSqlDatabase::addDatabase("QSQLITE");
//    nomeBD = "C:\\Users\\GUARDIAN\\Downloads\\ProjetoSistemaAcademico\\academico.db";
//    db.setDatabaseName(nomeBD);
}
void TurmaDAO::incluir(Turma* obj) {
    DatabaseManager databaseManager;

    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO turma (cod_disciplina,cod_turma, sub_turma, max_alunos, num_alunos) "
                        "VALUES (:cod_disciplina, :cod_turma, :sub_turma, :max_alunos, :num_alunos)");
    insertQuery.bindValue(":cod_disciplina", obj->getCod_disciplina());
    insertQuery.bindValue(":cod_turma", obj->getCod_turma());
    insertQuery.bindValue(":sub_turma", obj->getSub_turma());
    insertQuery.bindValue(":max_alunos", obj->getMaxAlunos());
    insertQuery.bindValue(":num_alunos", obj->getNumAlunos());

    if (!insertQuery.exec()) {
        databaseManager.close();
        throw QString("Erro ao executar a inserção");
    }
    databaseManager.close();
}

Turma* TurmaDAO::buscar(Turma* obj) {
    DatabaseManager databaseManager;

    if (!databaseManager.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QString cod_disciplina(""), cod_turma(""), sub_turma("");
    int max_alunos = 0, num_alunos = 0;

    QSqlQuery query;
    if (obj != nullptr) {
        query.prepare("SELECT * FROM turma WHERE cod_turma = :cod_turma AND cod_disciplina = :cod_disciplina AND sub_turma = :sub_turma;");
        query.bindValue(":cod_turma", obj->getCod_turma());
        query.bindValue(":cod_disciplina", obj->getCod_disciplina());
        query.bindValue(":sub_turma", obj->getSub_turma());
        if (!query.exec()) {
            throw QString("Erro ao executar a consulta");
        }

        while (query.next()) {
            cod_disciplina = query.value(0).toString();
            cod_turma = query.value(1).toString();
            sub_turma = query.value(2).toString();
            max_alunos = query.value(3).toInt();
            num_alunos = query.value(4).toInt();
        }

        obj->setCod_disciplina(cod_disciplina);
        obj->setSub_turma(sub_turma.toInt());
        obj->setMaxAlunos(max_alunos);
        obj->setNumAlunos(num_alunos);

        databaseManager.close();
    }

    if (obj->getCod_disciplina() != "")
        return obj;
    else {
        delete obj;
        return nullptr;
    }
}


void TurmaDAO::alterar(Turma* obj){
    Turma* turma = new Turma();
    turma->setCod_disciplina(obj->getCod_disciplina());
    turma->setCod_turma(obj->getCod_turma());
    turma->setSub_turma(obj->getSub_turma());
    if (this->buscar(turma) == nullptr) {
        throw QString("Turma não encontrada");
    } else {
        DatabaseManager databaseManager;

        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }

        QSqlQuery query;
        query.prepare("UPDATE turma SET  max_alunos = :max_alunos, num_alunos = :num_alunos WHERE cod_turma = :cod_turma AND sub_turma = :sub_turma AND cod_disciplina = :cod_disciplina ;");

        query.bindValue(":max_alunos", turma->getMaxAlunos());
        query.bindValue(":num_alunos", turma->getNumAlunos());
        query.bindValue(":cod_turma", turma->getCod_turma());
        query.bindValue(":sub_turma", turma->getSub_turma());
        query.bindValue(":cod_disciplina", turma->getCod_disciplina());
        if (!query.exec()) {
            databaseManager.close();
            throw QString("Erro ao executar o update");
        }
        databaseManager.close();
        delete obj;
    }
}
Turma* TurmaDAO::remover(Turma* obj){
    Turma* turma = new Turma();
    turma->setCod_disciplina(obj->getCod_disciplina());
    turma->setCod_turma(obj->getCod_turma());
    turma->setSub_turma(obj->getSub_turma());
    if (this->buscar(turma) == nullptr) {
        throw QString("Turma não encontrada!");
    } else {
        DatabaseManager databaseManager;
        if (!databaseManager.open()) {
            throw QString("Erro ao abrir o banco de dados");
        }
        QSqlQuery query;
        query.prepare("DELETE FROM turma WHERE cod_disciplina = :cod_disciplina AND cod_turma = :cod_turma AND sub_turma = :sub_turma ;");
        query.bindValue(":cod_disciplina", turma->getCod_disciplina());
        query.bindValue(":cod_turma", turma->getCod_turma());
        query.bindValue(":sub_turma", turma->getSub_turma());
        if (!query.exec()) {
            databaseManager.close();
            throw QString("Erro ao executar o delete");
        }
        databaseManager.close();
        delete obj;
    }
}
