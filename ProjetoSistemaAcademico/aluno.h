#ifndef ALUNO_H
#define ALUNO_H

#include <QString>

class Aluno
{
private:
    QString nome;
    QString matricula;

public:
    Aluno();
    Aluno(QString mat, QString nome);
    QString toString() const;
    const QString &getNome() const;
    void setNome(const QString &newNome);
    const QString &getMatricula() const;
    void setMatricula(const QString &newMatricula);
};

#endif // ALUNO_H
