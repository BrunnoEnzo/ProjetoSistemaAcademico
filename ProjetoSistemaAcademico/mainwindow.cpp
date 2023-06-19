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
void MainWindow::on_pushButtonIncluirAluno_clicked()//Incluir Aluno
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


void MainWindow::on_pushButtonConsultarAluno_clicked()//Consultar Aluno
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


void MainWindow::on_pushButtonAtualizarAluno_clicked()//Atualizar Aluno
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


void MainWindow::on_pushButtonRemoverAluno_clicked()//Remover Aluno
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
void MainWindow::on_pushButtonIncluirDisciplina_clicked()//Incluir Disciplina
{
    try{
        if(controleDisciplina.analisarDisciplina(ui->lineEditCodigoDisciplina->text())){
            throw QString("Disciplina já existente");
        }
        else{
            controleDisciplina.incluir(ui->lineEditCodigoDisciplina->text(), ui->lineEditNomeDisciplina->text());
            QMessageBox::information(this, "Ok", "Disciplina incluído com sucesso!");
            ui->lineEditCodigoDisciplina->clear();
            ui->lineEditNomeDisciplina->clear();
            ui->lineEditCodigoDisciplina->setFocus();
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
    }
}


void MainWindow::on_pushButtonConsultarDisciplina_clicked()//Consultar Disciplina
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


void MainWindow::on_pushButtonAtualizarDisciplina_clicked()//Atualizar Disciplina
{
    try{
        if(controleDisciplina.analisarDisciplina(ui->lineEditCodigoDisciplina->text())){
            controleDisciplina.alterar(ui->lineEditCodigoDisciplina->text(), ui->lineEditNomeDisciplina->text());
            QMessageBox::information(this, "Ok", "Diciplina alterado com sucesso!");
            ui->lineEditCodigoDisciplina->setFocus();
            ui->lineEditCodigoDisciplina->selectAll();
        }
        else{
            throw QString("Disciplina não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


void MainWindow::on_pushButtonRemoverDisciplina_clicked()//Remover Disciplina
{
    try{
        if(controleDisciplina.analisarDisciplina(ui->lineEditCodigoDisciplina->text())){
            controleDisciplina.remover(ui->lineEditCodigoDisciplina->text());
            QMessageBox::information(this, "Ok", "Disciplina removido com sucesso!");
            ui->lineEditNomeDisciplina->clear();
            ui->lineEditCodigoDisciplina->clear();
            ui->lineEditCodigoDisciplina->setFocus();
        }
        else{
            throw QString("Disciplina não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


//Turma
void MainWindow::on_pushButtonIncluirTurma_clicked()//Incluir Turma
{
    try{
        if(controleDisciplina.analisarDisciplina(ui->lineEditCodigoDisciplina->text())){
            if(controleTurma.analisarTurma(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),ui->lineEditSubTurma->text().toInt())){
                controleTurma.incluir(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),
                ui->lineEditSubTurma->text().toInt(),ui->lineEditMaximoTurma->text().toInt(),ui->lineEditNumeroTurma->text().toInt());
                QMessageBox::information(this, "Ok", "Turma incluída com sucesso!");
                ui->lineEditCodDisciplinaTurma->clear();
                ui->lineEditCodigoTurma->clear();
                ui->lineEditSubTurma->clear();
                ui->lineEditMaximoTurma->clear();
                ui->lineEditNumeroTurma->clear();
                ui->lineEditCodDisciplinaTurma->setFocus();
            }
            else{
                throw QString("Turma já existente");
            }
        }
        else{
            throw QString("Disciplina não cadastrada!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
    }
}


void MainWindow::on_pushButtonConsultarTurma_clicked()//Consultar Turma
{
    try{
        QString info = controleTurma.buscar(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),
        ui->lineEditSubTurma->text().toInt());
        QStringList Info = info.split(";");
        ui->lineEditMaximoTurma->setText(Info[2]);
        ui->lineEditNumeroTurma->setText(Info[3]);
        ui->lineEditCodDisciplinaTurma->setFocus();
    }
    catch(QString &msg){
    QMessageBox::information(this, "ERRO", msg);
    ui->lineEditCodigoDisciplina->selectAll();
    }
}


void MainWindow::on_pushButtonAtualizarTurma_clicked()//Atualizar Turma
{
    try{
        if(controleTurma.analisarTurma(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),ui->lineEditSubTurma->text().toInt())){
            controleTurma.alterar(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),
            ui->lineEditSubTurma->text().toInt(),ui->lineEditMaximoTurma->text().toInt(),ui->lineEditNumeroTurma->text().toInt());
            QMessageBox::information(this, "Ok", "Diciplina alterado com sucesso!");
            ui->lineEditCodDisciplinaTurma->setFocus();
            ui->lineEditCodDisciplinaTurma->selectAll();
        }
        else{
            throw QString("Turma não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


void MainWindow::on_pushButtonRemoverTurma_clicked()//Remover Turma
{
    try{
        if(controleTurma.analisarTurma(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),ui->lineEditSubTurma->text().toInt())){
            controleTurma.remover(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),
            ui->lineEditSubTurma->text().toInt());
            QMessageBox::information(this, "Ok", "Disciplina removido com sucesso!");
            ui->lineEditCodDisciplinaTurma->clear();
            ui->lineEditCodigoTurma->clear();
            ui->lineEditSubTurma->clear();
            ui->lineEditMaximoTurma->clear();
            ui->lineEditNumeroTurma->clear();
            ui->lineEditCodDisciplinaTurma->setFocus();
        }
        else{
            throw QString("Turma não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}

//Matricula
void MainWindow::on_pushButtonIncluirMatricula_clicked()//Incluir Matricula
{
    try{
        if(controleTurma.analisarTurma(ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt())){
            if(controleAluno.analisarAluno(ui->lineEditMatricula->text())){
                if(controleMatricula.analisarMatricula(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt())){
                    float notaf=(ui->lineEditNota1Matricula->text().toFloat()+ui->lineEditNota2Matricula->text().toFloat())/2;
                    controleMatricula.incluir(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt(),
                    ui->lineEditAnoMatricula->text().toInt(),ui->lineEditSemestreMatricula->text().toInt(),ui->lineEditNota1Matricula->text().toFloat(),ui->lineEditNota2Matricula->text().toFloat(),notaf);
                    QMessageBox::information(this, "Ok", "Matricula incluída com sucesso!");
                    ui->lineEditMatricula->clear();
                    ui->lineEditCodDisciplinaMatricula->clear();
                    ui->lineEditCodTurmaMatricula->clear();
                    ui->lineEditSubTurmaMatricula->clear();
                    ui->lineEditAnoMatricula->clear();
                    ui->lineEditSemestreMatricula->clear();
                    ui->lineEditNota1Matricula->clear();
                    ui->lineEditNota2Matricula->clear();
                    ui->lineEditMatricula->setFocus();
                }
                else{
                    throw QString("Matricula já existente");
                }
            }
            else{
                throw QString("Aluno não cadastrada!");
            }
        }
        else{
            throw QString("Turma não cadastrada!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
    }
}


void MainWindow::on_pushButtonConsultarMatricula_clicked()//Consultar Matricula
{
    try{
        QString info = controleMatricula.buscar(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),
        ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt());
        QStringList Info = info.split(";");
        ui->lineEditAnoMatricula->setText(Info[0]);
        ui->lineEditSemestreMatricula->setText(Info[1]);
        ui->lineEditNota1Matricula->setText(Info[2]);
        ui->lineEditNota2Matricula->setText(Info[3]);
        ui->lineEditNotaFinal->setText(Info[4]);
        ui->lineEditMatricula->setFocus();
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
        ui->lineEditCodigoDisciplina->selectAll();
    }
}


void MainWindow::on_pushButtonAtualizarMatricula_clicked()//Atualizar Matricula
{
    try{
        if(controleMatricula.analisarMatricula(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt())){
            float notaf=(ui->lineEditNota1Matricula->text().toFloat()+ui->lineEditNota2Matricula->text().toFloat())/2;
            controleMatricula.alterar(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt(),
            ui->lineEditAnoMatricula->text().toInt(),ui->lineEditSemestreMatricula->text().toInt(),ui->lineEditNota1Matricula->text().toFloat(),ui->lineEditNota2Matricula->text().toFloat(),notaf);
            QMessageBox::information(this, "Ok", "Matricula alterado com sucesso!");
            ui->lineEditMatricula->setFocus();
            ui->lineEditMatricula->selectAll();
        }
        else{
            throw QString("Matricula não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


void MainWindow::on_pushButtonRemoverMatricula_clicked()//Remover Matricula
{
    try{
        if(controleMatricula.analisarMatricula(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt())){
            controleMatricula.remover(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt());
            QMessageBox::information(this, "Ok", "Disciplina removido com sucesso!");
            ui->lineEditMatricula->clear();
            ui->lineEditCodDisciplinaMatricula->clear();
            ui->lineEditCodTurmaMatricula->clear();
            ui->lineEditSubTurmaMatricula->clear();
            ui->lineEditAnoMatricula->clear();
            ui->lineEditSemestreMatricula->clear();
            ui->lineEditNota1Matricula->clear();
            ui->lineEditNota2Matricula->clear();
            ui->lineEditNotaFinal->clear();

            ui->lineEditMatricula->setFocus();
        }
        else{
            throw QString("Turma não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}

