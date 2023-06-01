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

Aluno::Aluno()
{

}

Aluno::Aluno(QString mat, QString nom){
    matricula=mat;
    nom=nome;
}

QString Aluno::toString() const
{
    return matricula+";"+nome;
}

