#include "matriculacontroller.h"

MatriculaController::MatriculaController()
{

}

bool  MatriculaController::analisarMatricula(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma){
    matricula = nullptr;
    matricula = dao.buscar(new Matricula(mat,cod_turma,sub_turma,cod_disci));
    if(matricula != nullptr)
        return true;
    return false;
}

void MatriculaController::incluir(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma,
int const &ano,int const &semestre,float const &nota1,float const &nota2,float const &notaf){
    matricula = new Matricula(mat,cod_turma,sub_turma,cod_disci,ano,semestre,nota1,nota2,notaf);   
    matricula->setMatricula(mat);
    matricula->setCod_disciplina(cod_disci);
    matricula->setCod_turma(cod_turma);
    matricula->setSub_turma(sub_turma);
    matricula->setAno(ano);
    matricula->setSemestre(semestre);
    matricula->setNota1(nota1);
    matricula->setNota2(nota2);
    matricula->setNotaf((nota1+nota2)/2);
    dao.incluir(matricula);
}

QString MatriculaController::buscar(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma){
    matricula = nullptr;
    matricula = dao.buscar(new Matricula(mat,cod_turma,sub_turma,cod_disci));
    if (matricula!=nullptr)
        return matricula->toString();
    else
        throw QString("Matricula não encontrada!");
}

void MatriculaController::alterar(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma,
int const &ano,int const &semestre,float const &nota1,float const &nota2,float const &notaf){
    dao.alterar(new Matricula(mat,cod_turma,sub_turma,cod_disci,ano,semestre,nota1,nota2,notaf));
}

void MatriculaController::remover(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma){
    dao.remover(new Matricula(mat,cod_turma,sub_turma,cod_disci));
}

std::list<Matricula*>* MatriculaController::lista(){
    std::list<Matricula*>* listaMatricula = MatriculaDAO().listarMatricula();
    return listaMatricula;
}
