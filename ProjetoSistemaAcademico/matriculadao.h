#ifndef MATRICULADAO_H
#define MATRICULADAO_H

#include <dao.h>
#include <matricula.h>
#include <QString>
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
class MatriculaDAO : public DAO<Matricula>
{
private:
    QString nomeDB;
    QSqlDatabase db;
public:
    MatriculaDAO();
    void incluir(Matricula* obj);
    Matricula* buscar(Matricula* obj);
    void alterar (Matricula* obj);
    Aluno* remover(Matricula* obj);
};

#endif // MATRICULADAO_H
