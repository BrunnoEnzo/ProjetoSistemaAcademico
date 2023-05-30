#ifndef MATRICULA_H
#define MATRICULA_H

#include <QString>
#include "disciplina.h"
#include "aluno.h"

class Matricula : public Disciplina , public Aluno
{
private:
    int ano;
    int semestre;
    float nota1;
    float nota2;
    float notaf;
public:
    Matricula();
    Matricula(int ano,int semestre,int nota1,int nota2);
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
