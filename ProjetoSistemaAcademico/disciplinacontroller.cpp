#include "disciplinacontroller.h"
#include <QString>

DisciplinaController::DisciplinaController()
{

}

bool  DisciplinaController::analisarDisciplina(QString const &cod){
    disciplina = nullptr;
    disciplina = dao.buscar(new Disciplina(cod,""));
    if(disciplina != nullptr){
        return true;
    }
    return false;
}

void DisciplinaController::incluir(QString const &cod, QString const &nom){
    disciplina = new Disciplina();
    disciplina->setCod_disciplina(cod);
    disciplina->setNome_disciplina(nom);
    dao.incluir(disciplina);
    disciplina = nullptr;
}

QString DisciplinaController::buscar(QString const &cod){
    disciplina = nullptr;
    disciplina = dao.buscar(new Disciplina(cod, ""));
    if (disciplina!=nullptr)
        return disciplina->toString();
    else
        throw QString("Disciplina não encontrada!");
}

void DisciplinaController::alterar(QString const &cod, QString const &nom){
    dao.alterar(new Disciplina(cod, nom));
}

void DisciplinaController::remover(QString const &cod){
    dao.remover(new Disciplina(cod));
}
