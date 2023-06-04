#include "turmadao.h"

TurmaDAO::TurmaDAO()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    nomeBD = "C:\\Users\\GUARDIAN\\Downloads\\SistAcad\\SistAcad\\academico.db";
    db.setDatabaseName(nomeBD);
}
void TurmaDAO::incluir(Turma* obj) {
    if (!db.open()) {
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
        db.close();
        throw QString("Erro ao executar a inserção");
    }

    db.close();
}

Turma* TurmaDAO::buscar(Turma* obj) {
    if (!db.open()) {
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
            db.close();
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

        db.close();
    }

    if (obj->getCod_turma() != "")
        return obj;
    else {
        delete obj;
        return nullptr;
    }
}


void TurmaDAO::alterar(Turma* obj){
}
Turma* TurmaDAO::remover(Turma* obj){
}
