#include "matricula.h"
#include<QString>
int Matricula::getAno() const
{
    return ano;
}

void Matricula::setAno(int newAno)
{
    ano = newAno;
}

int Matricula::getSemestre() const
{
    return semestre;
}

void Matricula::setSemestre(int newSemestre)
{
    semestre = newSemestre;
}

float Matricula::getNota1() const
{
    return nota1;
}

void Matricula::setNota1(float newNota1)
{
    nota1 = newNota1;
}

float Matricula::getNota2() const
{
    return nota2;
}

void Matricula::setNota2(float newNota2)
{
    nota2 = newNota2;
}

float Matricula::getNotaf() const
{
    return notaf;
}

void Matricula::setNotaf(float newNotaf)
{
    notaf = newNotaf;
}

QString Matricula::toString()const{
    return QString::number(ano)+";"+QString::number(semestre)+";"+QString::number(nota1)+
    ";"+QString::number(nota2)+";"+QString::number(notaf);
}

Matricula::Matricula()
{
}

Matricula::Matricula(int ano,int semestre,int nota1,int nota2)
{
    this->ano=ano;
    this->semestre=semestre;
    this->nota1=nota1;
    this->nota2=nota2;
}


