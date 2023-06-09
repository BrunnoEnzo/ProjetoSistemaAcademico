#ifndef MATRICULADAO_H
#define MATRICULADAO_H

#include "dao.h"
#include "matricula.h"
#include "databasemanager.h"
#include <QString>
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QStringList>
#include <list>
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
    std::list<Matricula*>* listarMatricula();
};

#endif // MATRICULADAO_H
