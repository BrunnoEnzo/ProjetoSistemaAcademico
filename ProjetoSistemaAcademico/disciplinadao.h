#ifndef DISCIPLINADAO_H
#define DISCIPLINADAO_H

#include "dao.h"
#include "disciplina.h"
#include "databasemanager.h"
#include <QString>
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include <QStringList>
#include <list>

class DisciplinaDAO : public DAO<Disciplina>
{
private:
    QString nomeBD;
    QSqlDatabase db;
public:
    DisciplinaDAO();
    void incluir(Disciplina* obj);
    Disciplina* buscar(Disciplina* obj);
    void alterar(Disciplina* obj);
    Disciplina* remover(Disciplina* obj);
    std::list<Disciplina*>* listarDisciplina();
};

#endif // DISCIPLINADAO_H
