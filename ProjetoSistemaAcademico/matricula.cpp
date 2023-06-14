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
Matricula::Matricula(QString matricula,QString cod_turma,int sub_turma,QString cod_disciplina){
    this->setMatricula(matricula);
    this->setCod_turma(cod_turma);
    this->setSub_turma(sub_turma);
    this->setCod_disciplina(cod_disciplina);
}
Matricula::Matricula(QString matricula,QString cod_turma,int sub_turma,QString cod_disciplina,
int ano,int semestre,float nota1,float nota2,float notaf)
{
    this->setMatricula(matricula);
    this->setCod_turma(cod_turma);
    this->setSub_turma(sub_turma);
    this->setCod_disciplina(cod_disciplina);
    this->ano=ano;
    this->semestre=semestre;
    this->nota1=nota1;
    this->nota2=nota2;
    this->notaf=notaf;
}


