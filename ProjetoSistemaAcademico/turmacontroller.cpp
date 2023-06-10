#include "turmacontroller.h"
#include <QString>
#include "disciplinacontroller.h"
TurmaController::TurmaController()
{

}

bool TurmaController::analisarTurma(QString cod_disci,QString &cod_turma,int sub_turma){
    turma = nullptr;
    turma = dao.buscar(new Turma(cod_disci,cod_turma,sub_turma,0,0));
    if(turma != nullptr)
        return true;
    return false;
}

void TurmaController::incluir(QString cod_disci,QString &cod_turma,int sub_turma,int maxAlunos,int numAlunos){
    turma = new Turma();
    DisciplinaController disciplinaController;
    if(analisarTurma(cod_disci,cod_turma,sub_turma)) throw QString("Esta turma já está cadastrada!");
    if(!disciplinaController.analisarDisciplina(cod_disci)) throw QString("Este código de disciplina não existe!");
    turma->setCod_disciplina(cod_disci);
    turma->setCod_turma(cod_turma);
    turma->setSub_turma(sub_turma);
    turma->setMaxAlunos(maxAlunos);
    turma->setNumAlunos(numAlunos);
    dao.incluir(turma);

}

QString TurmaController::buscar(QString cod_disci,QString &cod_turma,int sub_turma){
    turma = nullptr;
    turma = dao.buscar(new Turma(cod_disci,cod_turma,sub_turma,0,0));
    if(turma != nullptr)
        return turma->toString();
    else
        throw QString("Turma não encontrada!");
}

void TurmaController::alterar(QString cod_disci,QString &cod_turma,int sub_turma,int maxAlunos,int numAlunos){
    if(analisarTurma(cod_disci,cod_turma,sub_turma))
        dao.alterar(new Turma(cod_disci,cod_turma,sub_turma,maxAlunos,numAlunos));
    else
        throw QString("Turma não existente!");
}

void TurmaController::deletar(QString cod_disci,QString &cod_turma,int sub_turma){
    if(analisarTurma(cod_disci,cod_turma,sub_turma))
        dao.remover(new Turma(cod_disci,cod_turma,sub_turma,0,0));
    else
        throw QString("Turma não existente!");
}
