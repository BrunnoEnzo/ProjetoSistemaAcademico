#ifndef TURMACONTROLLER_H
#define TURMACONTROLLER_H

#include <QString>
#include "turma.h"
#include "turmadao.h"
class TurmaController
{
public:
    TurmaController();
    bool analisarTurma(QString cod_disci,QString &cod_turma,int sub_turma);
    void incluir(QString cod_disci,QString &cod_turma,int sub_turma,int maxAlunos,int numAlunos);
    QString buscar(QString cod_disci,QString &cod_turma,int sub_turma);
    void alterar(QString cod_disci,QString &cod_turma,int sub_turma,int maxAlunos,int numAlunos);
    void deletar(QString cod_disci,QString &cod_turma,int sub_turma);
private:
    Turma* turma;
    TurmaDAO dao;
};

#endif // TURMACONTROLLER_H
