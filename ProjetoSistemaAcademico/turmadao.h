#ifndef TURMADAO_H
#define TURMADAO_H

#include <dao.h>
#include <turma.h>
#include <QString>
#include <string>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
class TurmaDAO : public DAO<Turma>
{
private:
    QString nomeBD;
    QSqlDatabase db;
public:
    TurmaDAO();
    void incluir(Turma* obj);
    Turma* buscar(Turma* obj);
    void alterar(Turma* obj);
    Turma* remover(Turma* obj);
};

#endif // TURMADAO_H
