#include "disciplina.h"

const QString &Disciplina::getCod_disciplina() const
{
    return cod_disciplina;
}

void Disciplina::setCod_disciplina(const QString &newCod_disciplina)
{
    cod_disciplina = newCod_disciplina;
}

const QString &Disciplina::getNome_disciplina() const
{
    return nome_disciplina;
}

void Disciplina::setNome_disciplina(const QString &newNome_disciplina)
{
    nome_disciplina = newNome_disciplina;
}

QString Disciplina::toString()const
{
    return cod_disciplina+";"+nome_disciplina;
}

Disciplina::Disciplina()
{

}
