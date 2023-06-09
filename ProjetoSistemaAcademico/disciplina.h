#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <QString>

class Disciplina
{
private:
    QString cod_disciplina;
    QString nome_disciplina;
public:
    Disciplina();
    Disciplina(QString cod_disciplina);
    Disciplina(QString cod_disciplina,QString nome_disciplina);
    const QString &getCod_disciplina() const;
    void setCod_disciplina(const QString &newCod_disciplina);
    const QString &getNome_disciplina() const;
    void setNome_disciplina(const QString &newNome_disciplina);
    QString toQString()const;
};

#endif // DISCIPLINA_H
