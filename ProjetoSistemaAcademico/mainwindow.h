#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "alunocontroller.h"
#include "disciplinacontroller.h"
#include "turmacontroller.h"
#include "matriculacontroller.h"
#include <QMessageBox>
#include <QString>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonIncluirAluno_clicked();

    void on_pushButtonConsultarAluno_clicked();

    void on_pushButtonAtualizarAluno_clicked();

    void on_pushButtonRemoverAluno_clicked();

    void on_pushButtonIncluirDisciplina_clicked();

    void on_pushButtonConsultarDisciplina_clicked();

    void on_pushButtonAtualizarDisciplina_clicked();

    void on_pushButtonRemoverDisciplina_clicked();

    void on_pushButtonIncluirTurma_clicked();

    void on_pushButtonConsultarTurma_clicked();

    void on_pushButtonAtualizarTurma_clicked();

    void on_pushButtonRemoverTurma_clicked();

    void on_pushButtonIncluirMatricula_clicked();

    void on_pushButtonConsultarMatricula_clicked();

    void on_pushButtonAtualizarMatricula_clicked();

    void on_pushButtonRemoverMatricula_clicked();

private:
    Ui::MainWindow *ui;
    AlunoController controleAluno;
    DisciplinaController controleDisciplina;
    TurmaController controleTurma;
    MatriculaController controleMatricula;

};
#endif // MAINWINDOW_H
