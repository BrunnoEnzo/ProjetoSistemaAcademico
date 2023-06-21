#ifndef TURMACONTROLLER_H
#define TURMACONTROLLER_H

#include <QString>
#include "turma.h"
#include "turmadao.h"
class TurmaController
{
public:
    TurmaController();
    bool analisarTurma(QString const &cod_disci,QString const &cod_turma,int const &sub_turma);
    void incluir(QString const &cod_disci,QString const &cod_turma,int const &sub_turma,int const &maxAlunos,int const &numAlunos);
    QString buscar(QString const &cod_disci,QString const &cod_turma,int const &sub_turma);
    void alterar(QString const &cod_disci,QString const &cod_turma,int const &sub_turma,int  const &maxAlunos,int const &numAlunos);
    void remover(QString const &cod_disci,QString const &cod_turma,int const &sub_turma);
    std::list<Turma*>* lista();
private:
    Turma* turma;
    TurmaDAO dao;
};

#endif // TURMACONTROLLER_H
