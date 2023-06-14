#ifndef ALUNO_H
#define ALUNO_H

#include <QString>
class Aluno
{
public:
    Aluno();
    Aluno(QString mat);
    Aluno(QString mat, QString nom);

    QString getMatricula() const;
    void setMatricula(const QString &newMatricula);

    QString getNome() const;
    void setNome(const QString &newNome);

    QString toString() const;

private:
    QString matricula;
    QString nome;

};

#endif // ALUNO_H
