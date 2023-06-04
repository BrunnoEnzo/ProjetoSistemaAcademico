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
    QString nomeBD;
    QSqlDatabase db;
public:
    MatriculaDAO();
    void incluir(Matricula* obj);
    Matricula* buscar(Matricula* obj);
    void alterar (Matricula* obj);
    Matricula* remover(Matricula* obj);
};

#endif // MATRICULADAO_H
