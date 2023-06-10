#ifndef DISCIPLINACONTROLLER_H
#define DISCIPLINACONTROLLER_H

#include <QString>
#include "disciplina.h"
#include "disciplinadao.h"

class DisciplinaController
{
public:
    DisciplinaController();
    bool  analisarDisciplina(QString const &cod);
    void incluir(QString const &cod, QString const &nom);
    QString buscar(QString const &cod);
    void alterar(QString const &cod, QString const &nom);
    void remover(QString const &cod);
private:
    Disciplina* disciplina;
    DisciplinaDAO dao;
};

#endif // DISCIPLINACONTROLLER_H
