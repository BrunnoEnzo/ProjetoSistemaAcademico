#ifndef MATRICULA_H
#define MATRICULA_H

#include <QString>
#include "aluno.h"
#include "turma.h"

class Matricula : public Aluno, public Turma
{
private:
    int ano;
    int semestre;
    float nota1;
    float nota2;
    float notaf;
public:
    Matricula();
    Matricula(QString matricula,QString cod_turma,int sub_turma,QString cod_disciplina,
              int ano,int semestre,int nota1,int nota2);
    int getAno() const;
    void setAno(int newAno);
    int getSemestre() const;
    void setSemestre(int newSemestre);
    float getNota1() const;
    void setNota1(float newNota1);
    float getNota2() const;
    void setNota2(float newNota2);
    float getNotaf() const;
    void setNotaf(float newNotaf);
    QString toString()const;
};

#endif // MATRICULA_H
