#include "turma.h"

const QString &Turma::getCod_turma() const
{
    return cod_turma;
}

void Turma::setCod_turma(const QString &newCod_turma)
{
    cod_turma = newCod_turma;
}

int Turma::getSub_turma() const
{
    return sub_turma;
}

void Turma::setSub_turma(int newSub_turma)
{
    sub_turma = newSub_turma;
}

int Turma::getMaxAlunos() const
{
    return maxAlunos;
}

void Turma::setMaxAlunos(int newMaxAlunos)
{
    maxAlunos = newMaxAlunos;
}

int Turma::getNumAlunos() const
{
    return numAlunos;
}

void Turma::setNumAlunos(int newNumAlunos)
{
    numAlunos = newNumAlunos;
}

QString Turma::toString(){
    return cod_turma+";"+QString::number(sub_turma)+";"+QString::number(maxAlunos)+
    ";"+QString::number(numAlunos);
}


Turma::Turma()
{
}

Turma::Turma(QString cod_disci,QString cod_turma,int sub_turma,int maxAlunos,int numAlunos)
{
    this->setCod_disciplina(cod_disci);
    this->cod_turma=cod_turma;
    this->sub_turma=sub_turma;
    this->maxAlunos=maxAlunos;
    this->numAlunos=numAlunos;
}




