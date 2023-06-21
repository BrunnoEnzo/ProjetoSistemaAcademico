#include "alunocontroller.h"
#include <QString>

AlunoController::AlunoController()
{

}

bool  AlunoController::analisarAluno(QString const &mat){
    aluno = nullptr;
    aluno = dao.buscar(new Aluno(mat,""));
    if(aluno != nullptr){
        return true;
    }
    return false;
}

void AlunoController::incluir(QString const &cod, QString const &nom){
    aluno = new Aluno();
    aluno->setMatricula(cod);
    aluno->setNome(nom);
    dao.incluir(aluno);
    aluno = nullptr;
}

QString AlunoController::buscar(QString const &cod){
    aluno = nullptr;
    aluno = dao.buscar(new Aluno(cod, ""));
    if (aluno!=nullptr)
        return aluno->toString();
    else
        throw QString("Aluno não encontrado!");
}

void AlunoController::alterar(QString const &cod, QString const &nom){
    dao.alterar(new Aluno(cod, nom));
}

void AlunoController::remover(QString const &cod){
    dao.remover(new Aluno(cod));
}
std::list<Aluno*>* AlunoController::lista(){
    std::list<Aluno*>* listaAlunos = AlunoDAO().listarAluno();
    return listaAlunos;
}
