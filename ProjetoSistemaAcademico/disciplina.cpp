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

QString Disciplina::toQString()const
{
    return cod_disciplina+";"+nome_disciplina;
}

Disciplina::Disciplina()
{
}
Disciplina::Disciplina(QString cod_disciplina){
    this->cod_disciplina=cod_disciplina;
}
Disciplina::Disciplina(QString cod_disciplina,QString nome_disciplina){
    this->cod_disciplina=cod_disciplina;
    this->nome_disciplina=nome_disciplina;
}
