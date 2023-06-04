#ifndef DISCIPLINADAO_H
#define DISCIPLINADAO_H

#include<dao.h>
#include<disciplina.h>
#include <QString>
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

class DisciplinaDAO : public DAO<Disciplina>
{
private:
    QString nomeDB;
    QSqlDatabase db;
public:
    DisciplinaDAO();
    void incluir(Disciplina* obj);
    Disciplina* buscar(Disciplina* obj);
    void alterar(Disciplina* obj);
    Aluno* remover(Disciplina* obj);
};

#endif // DISCIPLINADAO_H
