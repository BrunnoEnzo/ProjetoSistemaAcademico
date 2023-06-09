#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


//Aluno
void MainWindow::on_pushButtonIncluirAluno_clicked()
{
    try{
        controleAluno.incluir(ui->lineEditMatriculaAluno->text(), ui->lineEditNome->text());
        QMessageBox::information(this, "Ok", "Aluno incluído com sucesso!");
        ui->lineEditMatriculaAluno->clear();
        ui->lineEditNome->clear();
        ui->lineEditMatriculaAluno->setFocus();
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
    }
}


void MainWindow::on_pushButtonConsultarAluno_clicked()
{
    try{
        QString dado = controleAluno.buscar(ui->lineEditMatriculaAluno->text());
        QStringList dados = dado.split(";");
        ui->lineEditNome->clear();
        ui->lineEditNome->setText(dados[1]);
        ui->lineEditMatriculaAluno->setFocus();
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
        ui->lineEditMatriculaAluno->selectAll();
    }
}


void MainWindow::on_pushButtonAtualizarAluno_clicked()
{
    try{
        controleAluno.alterar(ui->lineEditMatriculaAluno->text(), ui->lineEditNome->text());
        QMessageBox::information(this, "Ok", "Aluno alterado com sucesso!");
        ui->lineEditMatriculaAluno->setFocus();
        ui->lineEditMatriculaAluno->selectAll();
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


void MainWindow::on_pushButtonRemoverAluno_clicked()
{
    try{
        controleAluno.remover(ui->lineEditMatriculaAluno->text());
        QMessageBox::information(this, "Ok", "Aluno removido com sucesso!");
        ui->lineEditNome->clear();
        ui->lineEditMatriculaAluno->clear();
        ui->lineEditMatriculaAluno->setFocus();
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


//Disciplina
void MainWindow::on_pushButtonIncluirDisciplina_clicked()
{
    try{
        controleDisciplina.incluir(ui->lineEditCodigoDisciplina->text(), ui->lineEditNomeDisciplina->text());
        QMessageBox::information(this, "Ok", "Aluno incluído com sucesso!");
        ui->lineEditCodigoDisciplina->clear();
        ui->lineEditNomeDisciplina->clear();
        ui->lineEditCodigoDisciplina->setFocus();
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
    }
}


void MainWindow::on_pushButtonConsultarDisciplina_clicked()
{
    try{
        QString dado = controleDisciplina.buscar(ui->lineEditCodigoDisciplina->text());
        QStringList dados = dado.split(";");
        ui->lineEditNomeDisciplina->clear();
        ui->lineEditNomeDisciplina->setText(dados[1]);
        ui->lineEditCodigoDisciplina->setFocus();
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
        ui->lineEditCodigoDisciplina->selectAll();
    }
}


void MainWindow::on_pushButtonAtualizarDisciplina_clicked()
{
    try{
        controleDisciplina.alterar(ui->lineEditCodigoDisciplina->text(), ui->lineEditNomeDisciplina->text());
        QMessageBox::information(this, "Ok", "Aluno alterado com sucesso!");
        ui->lineEditCodigoDisciplina->setFocus();
        ui->lineEditCodigoDisciplina->selectAll();
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


void MainWindow::on_pushButtonRemoverDisciplina_clicked()
{
    try{
        controleDisciplina.remover(ui->lineEditCodigoDisciplina->text());
        QMessageBox::information(this, "Ok", "Aluno removido com sucesso!");
        ui->lineEditNomeDisciplina->clear();
        ui->lineEditCodigoDisciplina->clear();
        ui->lineEditCodigoDisciplina->setFocus();
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}

