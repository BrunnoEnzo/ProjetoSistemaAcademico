#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "alunocontroller.h"
#include "disciplinacontroller.h"
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

private:
    Ui::MainWindow *ui;
    AlunoController controleAluno;
    DisciplinaController controleDisciplina;
};
#endif // MAINWINDOW_H
