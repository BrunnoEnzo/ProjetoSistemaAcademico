#ifndef ALUNODAO_H
#define ALUNODAO_H

#include "dao.h"
#include "aluno.h"
#include <QString>
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>

class AlunoDAO : public DAO<Aluno>
{
private:
    QString nomeBD;
    QSqlDatabase db;
public:
    AlunoDAO();
    void incluir(Aluno* obj);
    Aluno* buscar(Aluno* obj);
    void alterar (Aluno* obj);
    Aluno* remover(Aluno* obj);
};

#endif // ALUNODAO_H
