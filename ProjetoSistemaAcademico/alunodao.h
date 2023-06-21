#ifndef ALUNODAO_H
#define ALUNODAO_H

#include "dao.h"
#include "aluno.h"
#include "databasemanager.h"
#include <QString>
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QStringList>
#include <list>
class AlunoDAO : public DAO<Aluno>
{
public:
    AlunoDAO();
    void incluir(Aluno* obj);
    Aluno* buscar(Aluno* obj);
    void alterar(Aluno* obj);
    Aluno* remover(Aluno* obj);
    std::list<Aluno*>* listarAluno();
private:
    QString nomeBD;
    QSqlDatabase db;

};

#endif // ALUNODAO_H
