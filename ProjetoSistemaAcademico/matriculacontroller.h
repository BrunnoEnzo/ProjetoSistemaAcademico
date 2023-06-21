#ifndef MATRICULACONTROLLER_H
#define MATRICULACONTROLLER_H

#include <QString>
#include "matricula.h"
#include "matriculadao.h"

class MatriculaController
{
public:
    MatriculaController();
    bool  analisarMatricula(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma);
    void incluir(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma,
    int const &ano,int const &semestre,float const &nota1,float const &nota2,float const &notaf);
    QString buscar(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma);
    void alterar(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma,
    int const &ano,int const &semestre,float const &nota1,float const &nota2,float const &notaf);
    void remover(QString const &mat, QString const &cod_disci,QString const &cod_turma,int const &sub_turma);
    std::list<Matricula*>* lista();
private:
    Matricula* matricula;
    MatriculaDAO dao;
};

#endif // MATRICULACONTROLLER_H
