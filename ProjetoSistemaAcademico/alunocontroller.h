#ifndef ALUNOCONTROLLER_H
#define ALUNOCONTROLLER_H

#include <QString>
#include "aluno.h"
#include "alunodao.h"
#include <list>
class AlunoController
{
public:
    AlunoController();
    bool  analisarAluno(QString const &mat);
    void incluir(QString const &mat, QString const &nom);
    QString buscar(QString const &mat);
    void alterar(QString const &mat, QString const &nom);
    void remover(QString const &mat);
    std::list<Aluno*>* lista();
private:
    Aluno* aluno;
    AlunoDAO dao;
};

#endif // ALUNOCONTROLLER_H
