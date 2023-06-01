#include "aluno.h"

const QString &Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Aluno::getMatricula() const
{
    return matricula;
}

void Aluno::setMatricula(const QString &newMatricula)
{
    matricula = newMatricula;
}

QString Aluno::toString() const
{
    return matricula+";"+nome;
}

Aluno::Aluno()
{
}

Aluno::Aluno(QString mat, QString nome){
    matricula=mat;
    this->nome=nome;
}

