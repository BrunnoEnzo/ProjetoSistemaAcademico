#ifndef ALUNOCONTROLLER_H
#define ALUNOCONTROLLER_H

#include <QString>
#include "aluno.h"
#include "alunodao.h"
class AlunoController
{
public:
    AlunoController();
    void incluir(QString const &mat, QString const &nom);
    QString buscar(QString const &mat);
    void alterar(QString const &mat, QString const &nom);
    void remover(QString const &mat);
private:
    Aluno* aluno;
    AlunoDAO dao;
};

#endif // ALUNOCONTROLLER_H
