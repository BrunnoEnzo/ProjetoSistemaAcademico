#include "disciplinacontroller.h"
#include <QString>

DisciplinaController::DisciplinaController()
{

}

void DisciplinaController::incluir(QString const &mat, QString const &nom){
    disciplina = new Disciplina();
    disciplina->setCod_disciplina(mat);
    disciplina->setNome_disciplina(nom);
    dao.incluir(disciplina);
    disciplina = nullptr;
}

QString DisciplinaController::buscar(QString const &mat){
    disciplina = nullptr;
    disciplina = dao.buscar(new Disciplina(mat, ""));
    if (disciplina!=nullptr)
        return disciplina->toQString();
    else
        throw QString("Aluno não encontrado!");
}

void DisciplinaController::alterar(QString const &mat, QString const &nom){
    dao.alterar(new Disciplina(mat, nom));
}

void DisciplinaController::remover(QString const &mat){
    dao.remover(new Disciplina(mat));
}
