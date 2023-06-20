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
void MainWindow::on_pushButtonIncluirTurma_clicked()
{
    try {

        QString codDisciplina = ui->lineEditCodDisciplinaTurma->text();
        QString codTurma = ui->lineEditCodigoTurma->text();
        int subTurma = ui->lineEditSubTurma->text().toInt();
        int maximoTurma = ui->lineEditMaximoTurma->text().toInt();
        int numeroTurma = ui->lineEditNumeroTurma->text().toInt();
        if(!controleDisciplina.analisarDisciplina(codDisciplina))
            throw QString("Código de Disciplina não existente!");
        if(controleTurma.analisarTurma(codDisciplina,codTurma,subTurma))
            throw QString("Turma já exisitente");

        controleTurma.incluir(codDisciplina, codTurma, subTurma, maximoTurma, numeroTurma);

        QMessageBox::information(this, "Ok", "Turma incluída com sucesso!");
        ui->lineEditCodDisciplinaTurma->clear();
        ui->lineEditCodigoTurma->clear();
        ui->lineEditSubTurma->clear();
        ui->lineEditMaximoTurma->clear();
        ui->lineEditNumeroTurma->clear();
        ui->lineEditCodDisciplinaTurma->setFocus();
    }
    catch (QString &msg) {
        QMessageBox::information(this, "ERRO", msg);
    }
}


void MainWindow::on_pushButtonConsultarTurma_clicked()
{
    try{
        QString codDisciplina = ui->lineEditCodDisciplinaTurma->text();
        QString codTurma = ui->lineEditCodigoTurma->text();
        int subTurma = ui->lineEditSubTurma->text().toInt();

        if(!controleTurma.analisarTurma(codDisciplina,codTurma,subTurma)){
            ui->lineEditCodDisciplinaTurma->clear();
            ui->lineEditCodigoTurma->clear();
            ui->lineEditSubTurma->clear();
            throw QString("Turma não existente!");
        }
        else{
        QString info = controleTurma.buscar(codDisciplina,codTurma,subTurma);
        QStringList Info = info.split(";");
        ui->lineEditSubTurma->setText(Info[1]);
        ui->lineEditMaximoTurma->setText(Info[2]);
        ui->lineEditNumeroTurma->setText(Info[3]);
        ui->lineEditCodDisciplinaTurma->setFocus();
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
        ui->lineEditCodigoDisciplina->selectAll();
    }
}


void MainWindow::on_pushButtonAtualizarTurma_clicked()
{
    try{
        QString codDisciplina = ui->lineEditCodDisciplinaTurma->text();
        QString codTurma = ui->lineEditCodigoTurma->text();
        int subTurma = ui->lineEditSubTurma->text().toInt();
        int maximoTurma = ui->lineEditMaximoTurma->text().toInt();
        int numeroTurma = ui->lineEditNumeroTurma->text().toInt();

        if(!controleTurma.analisarTurma(codDisciplina,codTurma,subTurma))
            throw QString("Turma não existente!");

        controleTurma.alterar(codDisciplina,codTurma,subTurma,maximoTurma,numeroTurma);

        QMessageBox::information(this, "Ok", "Turma alterada com sucesso!");
        ui->lineEditCodDisciplinaTurma->setFocus();
        ui->lineEditCodDisciplinaTurma->selectAll();
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
    }
}


void MainWindow::on_pushButtonRemoverTurma_clicked()
{
    try{
        QString codDisciplina = ui->lineEditCodDisciplinaTurma->text();
        QString codTurma = ui->lineEditCodigoTurma->text();
        int subTurma = ui->lineEditSubTurma->text().toInt();

        if(!controleTurma.analisarTurma(codDisciplina,codTurma,subTurma))
            throw QString("Turma não existente!");
        else{
            controleTurma.remover(codDisciplina,codTurma,subTurma);
            QMessageBox::information(this, "Ok", "Turma excluída com sucesso!");
            ui->lineEditCodDisciplinaTurma->clear();
            ui->lineEditCodigoTurma->clear();
            ui->lineEditSubTurma->clear();
            ui->lineEditCodDisciplinaTurma->setFocus();
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "ERRO", msg);
    }

}

//Matricula
void MainWindow::on_pushButtonIncluirMatricula_clicked()
{
    try {
        QString codDisciplina = ui->lineEditCodDisciplinaTurma->text();
        QString codTurma = ui->lineEditCodTurmaMatricula->text();
        int subTurma = ui->lineEditSubTurmaMatricula->text().toInt();
        QString matricula = ui->lineEditMatricula->text();
        int anoMatricula = ui->lineEditAnoMatricula->text().toInt();
        int semestreMatricula = ui->lineEditSemestreMatricula->text().toInt();
        float nota1 = ui->lineEditNota1Matricula->text().toFloat();
        float nota2 = ui->lineEditNota2Matricula->text().toFloat();

        if(!controleMatricula.analisarMatricula(matricula, codDisciplina, codTurma, subTurma))
        if (controleTurma.analisarTurma(codDisciplina, codTurma, subTurma)) {
            if (controleAluno.analisarAluno(matricula)) {
                if (controleMatricula.analisarMatricula(matricula, codDisciplina, codTurma, subTurma)) {
                    float mediaFinal = (nota1 + nota2) / 2;

                    controleMatricula.incluir(matricula, codDisciplina, codTurma, subTurma,
                                              anoMatricula, semestreMatricula, nota1, nota2, mediaFinal);

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
                } else {
                    throw QString("Matricula já existente");
                }
            } else {
                throw QString("Aluno não cadastrado!");
            }
        } else {
            throw QString("Turma não cadastrada!");
        }
    } catch (QString& msg) {
        QMessageBox::information(this, "ERRO", msg);
    }
}

void MainWindow::on_pushButtonConsultarMatricula_clicked()//Incluir Matricula
{
    QString info = controleMatricula.buscar(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),
    ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt());
    try{
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

}


void MainWindow::on_pushButtonRemoverMatricula_clicked()//Atualizar Matricula
{

}

