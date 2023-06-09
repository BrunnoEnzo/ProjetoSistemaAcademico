#include "aluno.h"

Aluno::Aluno()
{

}

Aluno::Aluno(QString mat, QString nom){
    matricula = mat;
    nome = nom;
}

Aluno::Aluno(QString mat){
    matricula = mat;
}

QString Aluno::getMatricula() const
{
    return matricula;
}

void Aluno::setMatricula(const QString &newMatricula)
{
    matricula = newMatricula;
}

QString Aluno::getNome() const
{
    return nome;
}

void Aluno::setNome(const QString &newNome)
{
    nome = newNome;
}

QString Aluno::toQString()const{
    return matricula + ";" + nome;
}
