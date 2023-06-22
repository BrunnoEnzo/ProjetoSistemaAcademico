#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    int row = 0;

//TableView Aluno
    std::list<Aluno*>* listaAluno = controleAluno.lista();

    modelAluno = new QStandardItemModel(this);
    modelAluno->setColumnCount(2); // Define o número de colunas

    // Define os títulos das colunas
    modelAluno->setHeaderData(0, Qt::Horizontal, "Nome");
    modelAluno->setHeaderData(1, Qt::Horizontal, "Matrícula");

    tableView = ui->tableViewAluno; // Substitua "tableView" pelo nome do seu objeto QTableView
    tableView->setModel(modelAluno);
    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    row = 0;
    for (Aluno* aluno : *listaAluno) {
        QString nome = aluno->getNome();
        QString matricula = aluno->getMatricula();

        QStandardItem* itemNome = new QStandardItem(nome);
        QStandardItem* itemMatricula = new QStandardItem(matricula);

        modelAluno->setItem(row, 0, itemNome);
        modelAluno->setItem(row, 1, itemMatricula);

        row++;
    }//Fim

//TableView Disciplina
    std::list<Disciplina*>* listaDisciplina = controleDisciplina.lista();

    modelDisciplina = new QStandardItemModel(this);
    modelDisciplina->setColumnCount(2); // Define o número de colunas

    // Define os títulos das colunas
    modelDisciplina->setHeaderData(0, Qt::Horizontal, "Codigo");
    modelDisciplina->setHeaderData(1, Qt::Horizontal, "Nome");

    tableView = ui->tableViewDisciplina; // Substitua "tableView" pelo nome do seu objeto QTableView
    tableView->setModel(modelDisciplina);
    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    row = 0;
    for (Disciplina* disciplina : *listaDisciplina) {
        QString codigo = disciplina->getCod_disciplina();
        QString nome = disciplina->getNome_disciplina();

        QStandardItem* itemCodigo = new QStandardItem(codigo);
        QStandardItem* itemNome = new QStandardItem(nome);

        modelDisciplina->setItem(row, 0, itemCodigo);
        modelDisciplina->setItem(row, 1, itemNome);

        row++;
    }//Fim

//TableView Turma
    std::list<Turma*>* listaTurma = controleTurma.lista();

    modelTurma = new QStandardItemModel(this);
    modelTurma->setColumnCount(5); // Define o número de colunas

    // Define os títulos das colunas
    modelTurma->setHeaderData(0, Qt::Horizontal, "Disciplina");
    modelTurma->setHeaderData(1, Qt::Horizontal, "Turma");
    modelTurma->setHeaderData(2, Qt::Horizontal, "Sub-Turma");
    modelTurma->setHeaderData(3, Qt::Horizontal, "Max_Alunos");
    modelTurma->setHeaderData(4, Qt::Horizontal, "Num_Alunos");

    tableView = ui->tableViewTurma; // Substitua "tableView" pelo nome do seu objeto QTableView
    tableView->setModel(modelTurma);
    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    row = 0;
    for (Turma* turma : *listaTurma) {
        QString cod_disciplina = turma->getCod_disciplina();
        QString cod_turma = turma->getCod_turma();
        QString sub_turma = QString::number(turma->getSub_turma());
        QString max_alunos = QString::number(turma->getMaxAlunos());
        QString num_alunos = QString::number(turma->getNumAlunos());

        QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
        QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
        QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
        QStandardItem* itemMax_alunos = new QStandardItem(max_alunos);
        QStandardItem* itemNum_alunos = new QStandardItem(num_alunos);


        modelTurma->setItem(row, 0, itemCod_disciplina);
        modelTurma->setItem(row, 1, itemCod_turma);
        modelTurma->setItem(row, 2, itemSub_turma);
        modelTurma->setItem(row, 3, itemMax_alunos);
        modelTurma->setItem(row, 4, itemNum_alunos);

        row++;
    }//Fim

//TableView Matricula
    std::list<Matricula*>* listaMatricula = controleMatricula.lista();

    modelMatricula = new QStandardItemModel(this);
    modelMatricula->setColumnCount(9); // Define o número de colunas

    // Define os títulos das colunas
    modelMatricula->setHeaderData(0, Qt::Horizontal, "Matricula");
    modelMatricula->setHeaderData(1, Qt::Horizontal, "Disciplina");
    modelMatricula->setHeaderData(2, Qt::Horizontal, "Turma");
    modelMatricula->setHeaderData(3, Qt::Horizontal, "Sub-Turma");
    modelMatricula->setHeaderData(4, Qt::Horizontal, "Ano");
    modelMatricula->setHeaderData(5, Qt::Horizontal, "Semestre");
    modelMatricula->setHeaderData(6, Qt::Horizontal, "Nota 1");
    modelMatricula->setHeaderData(7, Qt::Horizontal, "Nota 2");
    modelMatricula->setHeaderData(8, Qt::Horizontal, "Nota F");

    tableView = ui->tableViewMatricula; // Substitua "tableView" pelo nome do seu objeto QTableView
    tableView->setModel(modelMatricula);
    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    row = 0;
    for (Matricula* matricula : *listaMatricula) {
        QString matricula1 = matricula->getMatricula();
        QString cod_disciplina = matricula->getCod_disciplina();
        QString cod_turma = matricula->getCod_turma();
        QString sub_turma = QString::number(matricula->getSub_turma());
        QString ano = QString::number(matricula->getAno());
        QString semestre = QString::number(matricula->getSemestre());
        QString nota1 = QString::number(matricula->getNota1());
        QString nota2 = QString::number(matricula->getNota2());
        QString notaf = QString::number(matricula->getNotaf());

        QStandardItem* itemMatricula = new QStandardItem(matricula1);
        QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
        QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
        QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
        QStandardItem* itemAno = new QStandardItem(ano);
        QStandardItem* itemSemestre = new QStandardItem(semestre);
        QStandardItem* itemNota1 = new QStandardItem(nota1);
        QStandardItem* itemNota2 = new QStandardItem(nota2);
        QStandardItem* itemNotaF = new QStandardItem(notaf);

        modelMatricula->setItem(row, 0, itemMatricula);
        modelMatricula->setItem(row, 1, itemCod_disciplina);
        modelMatricula->setItem(row, 2, itemCod_turma);
        modelMatricula->setItem(row, 3, itemSub_turma);
        modelMatricula->setItem(row, 4, itemAno);
        modelMatricula->setItem(row, 5, itemSemestre);
        modelMatricula->setItem(row, 6, itemNota1);
        modelMatricula->setItem(row, 7, itemNota2);
        modelMatricula->setItem(row, 8, itemNotaF);


        row++;
    }//Fim
}

MainWindow::~MainWindow()
{
    delete ui;
}


//Aluno
void MainWindow::on_pushButtonIncluirAluno_clicked()//Incluir Aluno
{
    try{
        if(controleAluno.analisarAluno(ui->lineEditMatriculaAluno->text())){
            throw QString("Aluno já existente");
        }
        else{
            if(ui->lineEditMatriculaAluno->text()=="") throw QString("Por favor, digite a Matricula.");
            if(ui->lineEditNome->text()=="") throw QString("Por favor, digite o Nome.");
            controleAluno.incluir(ui->lineEditMatriculaAluno->text(), ui->lineEditNome->text());
            QMessageBox::information(this, "Ok", "Aluno incluído com sucesso!");
            ui->lineEditMatriculaAluno->clear();
            ui->lineEditNome->clear();
            ui->lineEditMatriculaAluno->setFocus();

            std::list<Aluno*>* listaAluno = controleAluno.lista();//TableView
            modelAluno = new QStandardItemModel(this);
            modelAluno->setColumnCount(2);
            modelAluno->setHeaderData(0, Qt::Horizontal, "Nome");
            modelAluno->setHeaderData(1, Qt::Horizontal, "Matrícula");
            tableView = ui->tableViewAluno;
            tableView->setModel(modelAluno);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Aluno* aluno : *listaAluno) {
                QString nome = aluno->getNome();
                QString matricula = aluno->getMatricula();
                QStandardItem* itemNome = new QStandardItem(nome);
                QStandardItem* itemMatricula = new QStandardItem(matricula);
                modelAluno->setItem(row, 0, itemNome);
                modelAluno->setItem(row, 1, itemMatricula);
                row++;
            }//Fim
        }
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
        if(controleAluno.analisarAluno(ui->lineEditMatriculaAluno->text())){
            if(ui->lineEditNome->text()=="") throw QString("Por favor, digite o Nome.");
            controleAluno.alterar(ui->lineEditMatriculaAluno->text(), ui->lineEditNome->text());
            QMessageBox::information(this, "Ok", "Aluno alterado com sucesso!");
            ui->lineEditMatriculaAluno->setFocus();
            ui->lineEditMatriculaAluno->selectAll();

            std::list<Aluno*>* listaAluno = controleAluno.lista();//TableView
            modelAluno = new QStandardItemModel(this);
            modelAluno->setColumnCount(2);
            modelAluno->setHeaderData(0, Qt::Horizontal, "Nome");
            modelAluno->setHeaderData(1, Qt::Horizontal, "Matrícula");
            tableView = ui->tableViewAluno;
            tableView->setModel(modelAluno);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Aluno* aluno : *listaAluno) {
                QString nome = aluno->getNome();
                QString matricula = aluno->getMatricula();
                QStandardItem* itemNome = new QStandardItem(nome);
                QStandardItem* itemMatricula = new QStandardItem(matricula);
                modelAluno->setItem(row, 0, itemNome);
                modelAluno->setItem(row, 1, itemMatricula);
                row++;
            }//Fim
        }
        else{
        throw QString("Aluno não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}


void MainWindow::on_pushButtonRemoverAluno_clicked()//Remover Aluno
{
    try{
        if(controleAluno.analisarAluno(ui->lineEditMatriculaAluno->text())){
            controleAluno.remover(ui->lineEditMatriculaAluno->text());
            QMessageBox::information(this, "Ok", "Aluno removido com sucesso!");
            ui->lineEditNome->clear();
            ui->lineEditMatriculaAluno->clear();
            ui->lineEditMatriculaAluno->setFocus();

            std::list<Aluno*>* listaAluno = controleAluno.lista();//TableView
            modelAluno = new QStandardItemModel(this);
            modelAluno->setColumnCount(2);
            modelAluno->setHeaderData(0, Qt::Horizontal, "Nome");
            modelAluno->setHeaderData(1, Qt::Horizontal, "Matrícula");
            tableView = ui->tableViewAluno;
            tableView->setModel(modelAluno);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Aluno* aluno : *listaAluno) {
                    QString nome = aluno->getNome();
                    QString matricula = aluno->getMatricula();
                    QStandardItem* itemNome = new QStandardItem(nome);
                    QStandardItem* itemMatricula = new QStandardItem(matricula);
                    modelAluno->setItem(row, 0, itemNome);
                    modelAluno->setItem(row, 1, itemMatricula);
                    row++;
            }//Fim
        }
        else{
        throw QString("Aluno não existente!");
        }
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
            if(ui->lineEditCodigoDisciplina->text()=="") throw QString("Por favor, digite o Codigo.");
            if(ui->lineEditNomeDisciplina->text()=="") throw QString("Por favor, digite o Nome.");
            controleDisciplina.incluir(ui->lineEditCodigoDisciplina->text(), ui->lineEditNomeDisciplina->text());
            QMessageBox::information(this, "Ok", "Disciplina incluído com sucesso!");
            ui->lineEditCodigoDisciplina->clear();
            ui->lineEditNomeDisciplina->clear();
            ui->lineEditCodigoDisciplina->setFocus();

            std::list<Disciplina*>* listaDisciplina = controleDisciplina.lista();//TableView
            modelDisciplina = new QStandardItemModel(this);
            modelDisciplina->setColumnCount(2);
            modelDisciplina->setHeaderData(0, Qt::Horizontal, "Codigo");
            modelDisciplina->setHeaderData(1, Qt::Horizontal, "Nome");
            tableView = ui->tableViewDisciplina;
            tableView->setModel(modelDisciplina);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Disciplina* disciplina : *listaDisciplina) {
                    QString codigo = disciplina->getCod_disciplina();
                    QString nome = disciplina->getNome_disciplina();
                    QStandardItem* itemCodigo = new QStandardItem(codigo);
                    QStandardItem* itemNome = new QStandardItem(nome);
                    modelDisciplina->setItem(row, 0, itemCodigo);
                    modelDisciplina->setItem(row, 1, itemNome);
                    row++;
            }//Fim
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
            if(ui->lineEditNomeDisciplina->text()=="") throw QString("Por favor, digite o Nome.");
            controleDisciplina.alterar(ui->lineEditCodigoDisciplina->text(), ui->lineEditNomeDisciplina->text());
            QMessageBox::information(this, "Ok", "Diciplina alterado com sucesso!");
            ui->lineEditCodigoDisciplina->setFocus();
            ui->lineEditCodigoDisciplina->selectAll();

            std::list<Disciplina*>* listaDisciplina = controleDisciplina.lista();//TableView
            modelDisciplina = new QStandardItemModel(this);
            modelDisciplina->setColumnCount(2);
            modelDisciplina->setHeaderData(0, Qt::Horizontal, "Codigo");
            modelDisciplina->setHeaderData(1, Qt::Horizontal, "Nome");
            tableView = ui->tableViewDisciplina;
            tableView->setModel(modelDisciplina);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Disciplina* disciplina : *listaDisciplina) {
                    QString codigo = disciplina->getCod_disciplina();
                    QString nome = disciplina->getNome_disciplina();
                    QStandardItem* itemCodigo = new QStandardItem(codigo);
                    QStandardItem* itemNome = new QStandardItem(nome);
                    modelDisciplina->setItem(row, 0, itemCodigo);
                    modelDisciplina->setItem(row, 1, itemNome);
                    row++;
            }//Fim
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

            std::list<Disciplina*>* listaDisciplina = controleDisciplina.lista();//TableView
            modelDisciplina = new QStandardItemModel(this);
            modelDisciplina->setColumnCount(2);
            modelDisciplina->setHeaderData(0, Qt::Horizontal, "Codigo");
            modelDisciplina->setHeaderData(1, Qt::Horizontal, "Nome");
            tableView = ui->tableViewDisciplina;
            tableView->setModel(modelDisciplina);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Disciplina* disciplina : *listaDisciplina) {
                    QString codigo = disciplina->getCod_disciplina();
                    QString nome = disciplina->getNome_disciplina();
                    QStandardItem* itemCodigo = new QStandardItem(codigo);
                    QStandardItem* itemNome = new QStandardItem(nome);
                    modelDisciplina->setItem(row, 0, itemCodigo);
                    modelDisciplina->setItem(row, 1, itemNome);
                    row++;
            }//Fim
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
        if(controleDisciplina.analisarDisciplina(ui->lineEditCodDisciplinaTurma->text())){
            if(controleTurma.analisarTurma(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),ui->lineEditSubTurma->text().toInt())){
                throw QString("Turma já existente");
            }
            else{
                if(ui->lineEditCodDisciplinaTurma->text()=="") throw QString("Por favor, digite o Codigo de Disciplina.");
                if(ui->lineEditCodigoTurma->text()=="") throw QString("Por favor, digite o codigo de Turma.");
                if(ui->lineEditMaximoTurma->text()=="") throw QString("Por favor, digite o Maximo de Alunos da Turma.");
                controleTurma.incluir(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),
                ui->lineEditSubTurma->text().toInt(),ui->lineEditMaximoTurma->text().toInt(),/*ui->lineEditNumeroTurma->text().toInt()*/ 0);
                QMessageBox::information(this, "Ok", "Turma incluída com sucesso!");
                ui->lineEditCodDisciplinaTurma->clear();
                ui->lineEditCodigoTurma->clear();
                ui->lineEditSubTurma->clear();
                ui->lineEditMaximoTurma->clear();
                ui->lineEditNumeroTurma->clear();
                ui->lineEditCodDisciplinaTurma->setFocus();

                std::list<Turma*>* listaTurma = controleTurma.lista();//TableView
                modelTurma = new QStandardItemModel(this);
                modelTurma->setColumnCount(5);
                modelTurma->setHeaderData(0, Qt::Horizontal, "Disciplina");
                modelTurma->setHeaderData(1, Qt::Horizontal, "Turma");
                modelTurma->setHeaderData(2, Qt::Horizontal, "Sub-Turma");
                modelTurma->setHeaderData(3, Qt::Horizontal, "Max_Alunos");
                modelTurma->setHeaderData(4, Qt::Horizontal, "Num_Alunos");
                tableView = ui->tableViewTurma;
                tableView->setModel(modelTurma);
                tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                int row = 0;
                for (Turma* turma : *listaTurma) {
                    QString cod_disciplina = turma->getCod_disciplina();
                    QString cod_turma = turma->getCod_turma();
                    QString sub_turma = QString::number(turma->getSub_turma());
                    QString max_alunos = QString::number(turma->getMaxAlunos());
                    QString num_alunos = QString::number(turma->getNumAlunos());
                    QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                    QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                    QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                    QStandardItem* itemMax_alunos = new QStandardItem(max_alunos);
                    QStandardItem* itemNum_alunos = new QStandardItem(num_alunos);
                    modelTurma->setItem(row, 0, itemCod_disciplina);
                    modelTurma->setItem(row, 1, itemCod_turma);
                    modelTurma->setItem(row, 2, itemSub_turma);
                    modelTurma->setItem(row, 3, itemMax_alunos);
                    modelTurma->setItem(row, 4, itemNum_alunos);
                    row++;
                }//Fim
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
            if(ui->lineEditMaximoTurma->text()=="") throw QString("Por favor, digite o Maximo de Alunos da Turma.");
            controleTurma.alterar(ui->lineEditCodDisciplinaTurma->text(),ui->lineEditCodigoTurma->text(),
            ui->lineEditSubTurma->text().toInt(),ui->lineEditMaximoTurma->text().toInt(),ui->lineEditNumeroTurma->text().toInt());
            QMessageBox::information(this, "Ok", "Diciplina alterado com sucesso!");
            ui->lineEditCodDisciplinaTurma->setFocus();
            ui->lineEditCodDisciplinaTurma->selectAll();

            std::list<Turma*>* listaTurma = controleTurma.lista();//TableView
            modelTurma = new QStandardItemModel(this);
            modelTurma->setColumnCount(5);
            modelTurma->setHeaderData(0, Qt::Horizontal, "Disciplina");
            modelTurma->setHeaderData(1, Qt::Horizontal, "Turma");
            modelTurma->setHeaderData(2, Qt::Horizontal, "Sub-Turma");
            modelTurma->setHeaderData(3, Qt::Horizontal, "Max_Alunos");
            modelTurma->setHeaderData(4, Qt::Horizontal, "Num_Alunos");
            tableView = ui->tableViewTurma;
            tableView->setModel(modelTurma);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Turma* turma : *listaTurma) {
                QString cod_disciplina = turma->getCod_disciplina();
                QString cod_turma = turma->getCod_turma();
                QString sub_turma = QString::number(turma->getSub_turma());
                QString max_alunos = QString::number(turma->getMaxAlunos());
                QString num_alunos = QString::number(turma->getNumAlunos());
                QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                QStandardItem* itemMax_alunos = new QStandardItem(max_alunos);
                QStandardItem* itemNum_alunos = new QStandardItem(num_alunos);
                modelTurma->setItem(row, 0, itemCod_disciplina);
                modelTurma->setItem(row, 1, itemCod_turma);
                modelTurma->setItem(row, 2, itemSub_turma);
                modelTurma->setItem(row, 3, itemMax_alunos);
                modelTurma->setItem(row, 4, itemNum_alunos);
                row++;
            }//Fim
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

            std::list<Turma*>* listaTurma = controleTurma.lista();//TableView
            modelTurma = new QStandardItemModel(this);
            modelTurma->setColumnCount(5);
            modelTurma->setHeaderData(0, Qt::Horizontal, "Disciplina");
            modelTurma->setHeaderData(1, Qt::Horizontal, "Turma");
            modelTurma->setHeaderData(2, Qt::Horizontal, "Sub-Turma");
            modelTurma->setHeaderData(3, Qt::Horizontal, "Max_Alunos");
            modelTurma->setHeaderData(4, Qt::Horizontal, "Num_Alunos");
            tableView = ui->tableViewTurma;
            tableView->setModel(modelTurma);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Turma* turma : *listaTurma) {
                QString cod_disciplina = turma->getCod_disciplina();
                QString cod_turma = turma->getCod_turma();
                QString sub_turma = QString::number(turma->getSub_turma());
                QString max_alunos = QString::number(turma->getMaxAlunos());
                QString num_alunos = QString::number(turma->getNumAlunos());
                QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                QStandardItem* itemMax_alunos = new QStandardItem(max_alunos);
                QStandardItem* itemNum_alunos = new QStandardItem(num_alunos);
                modelTurma->setItem(row, 0, itemCod_disciplina);
                modelTurma->setItem(row, 1, itemCod_turma);
                modelTurma->setItem(row, 2, itemSub_turma);
                modelTurma->setItem(row, 3, itemMax_alunos);
                modelTurma->setItem(row, 4, itemNum_alunos);
                row++;
            }//Fim
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
                    throw QString("Matricula já existente");
                }
                else{
                    if(ui->lineEditMatricula->text()=="") throw QString("Por favor, digite a Matricula.");
                    if(ui->lineEditCodDisciplinaMatricula->text()=="") throw QString("Por favor, digite o Codigo de Matricula.");
                    if(ui->lineEditCodTurmaMatricula->text()=="") throw QString("Por favor, digite o Codigo de turma.");
                    if(ui->lineEditAnoMatricula->text()=="") throw QString("Por favor, digite o Ano.");
                    if(ui->lineEditSemestreMatricula->text()=="") throw QString("Por favor, digite o Semestre.");
                    if(ui->lineEditNota1Matricula->text()=="") throw QString("Por favor, digite a Nota 1.");
                    if(ui->lineEditNota2Matricula->text()=="") throw QString("Por favor, digite a Nota 2.");
                    if(ui->lineEditNota1Matricula->text().toFloat()<0 || ui->lineEditNota1Matricula->text().toFloat()>10) throw QString("Por favor, digite em Nota 1 um valor de 0 ate 10.");
                    if(ui->lineEditNota2Matricula->text().toFloat()<0 || ui->lineEditNota2Matricula->text().toFloat()>10) throw QString("Por favor, digite em Nota 2 um valor de 0 ate 10.");
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

                    std::list<Matricula*>* listaMatricula = controleMatricula.lista();//TableView
                    modelMatricula = new QStandardItemModel(this);
                    modelMatricula->setColumnCount(9);
                    modelMatricula->setHeaderData(0, Qt::Horizontal, "Matricula");
                    modelMatricula->setHeaderData(1, Qt::Horizontal, "Disciplina");
                    modelMatricula->setHeaderData(2, Qt::Horizontal, "Turma");
                    modelMatricula->setHeaderData(3, Qt::Horizontal, "Sub-Turma");
                    modelMatricula->setHeaderData(4, Qt::Horizontal, "Ano");
                    modelMatricula->setHeaderData(5, Qt::Horizontal, "Semestre");
                    modelMatricula->setHeaderData(6, Qt::Horizontal, "Nota 1");
                    modelMatricula->setHeaderData(7, Qt::Horizontal, "Nota 2");
                    modelMatricula->setHeaderData(8, Qt::Horizontal, "Nota F");
                    tableView = ui->tableViewMatricula;
                    tableView->setModel(modelMatricula);
                    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                    tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                    int row = 0;
                    for (Matricula* matricula : *listaMatricula) {
                        QString matricula1 = matricula->getMatricula();
                        QString cod_disciplina = matricula->getCod_disciplina();
                        QString cod_turma = matricula->getCod_turma();
                        QString sub_turma = QString::number(matricula->getSub_turma());
                        QString ano = QString::number(matricula->getAno());
                        QString semestre = QString::number(matricula->getSemestre());
                        QString nota1 = QString::number(matricula->getNota1());
                        QString nota2 = QString::number(matricula->getNota2());
                        QString notaf = QString::number(matricula->getNotaf());
                        QStandardItem* itemMatricula = new QStandardItem(matricula1);
                        QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                        QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                        QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                        QStandardItem* itemAno = new QStandardItem(ano);
                        QStandardItem* itemSemestre = new QStandardItem(semestre);
                        QStandardItem* itemNota1 = new QStandardItem(nota1);
                        QStandardItem* itemNota2 = new QStandardItem(nota2);
                        QStandardItem* itemNotaF = new QStandardItem(notaf);
                        modelMatricula->setItem(row, 0, itemMatricula);
                        modelMatricula->setItem(row, 1, itemCod_disciplina);
                        modelMatricula->setItem(row, 2, itemCod_turma);
                        modelMatricula->setItem(row, 3, itemSub_turma);
                        modelMatricula->setItem(row, 4, itemAno);
                        modelMatricula->setItem(row, 5, itemSemestre);
                        modelMatricula->setItem(row, 6, itemNota1);
                        modelMatricula->setItem(row, 7, itemNota2);
                        modelMatricula->setItem(row, 8, itemNotaF);
                        row++;
                    }//Fim

                    //Atualizar numero de estudantes da turma
                    QString info = controleTurma.buscar(ui->lineEditCodDisciplinaMatricula->text(), ui->lineEditCodTurmaMatricula->text(), ui->lineEditSubTurmaMatricula->text().toInt());
                    QStringList Info = info.split(";");
                    QString max=Info[2],num=Info[3];
                    controleTurma.alterar(ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt(),
                    max.toInt(),(num.toInt()+1));
                    std::list<Turma*>* listaTurma = controleTurma.lista();//TableView
                    modelTurma = new QStandardItemModel(this);
                    modelTurma->setColumnCount(5);
                    modelTurma->setHeaderData(0, Qt::Horizontal, "Disciplina");
                    modelTurma->setHeaderData(1, Qt::Horizontal, "Turma");
                    modelTurma->setHeaderData(2, Qt::Horizontal, "Sub-Turma");
                    modelTurma->setHeaderData(3, Qt::Horizontal, "Max_Alunos");
                    modelTurma->setHeaderData(4, Qt::Horizontal, "Num_Alunos");
                    tableView = ui->tableViewTurma;
                    tableView->setModel(modelTurma);
                    tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
                    tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
                    row = 0;
                    for (Turma* turma : *listaTurma) {
                        QString cod_disciplina = turma->getCod_disciplina();
                        QString cod_turma = turma->getCod_turma();
                        QString sub_turma = QString::number(turma->getSub_turma());
                        QString max_alunos = QString::number(turma->getMaxAlunos());
                        QString num_alunos = QString::number(turma->getNumAlunos());
                        QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                        QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                        QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                        QStandardItem* itemMax_alunos = new QStandardItem(max_alunos);
                        QStandardItem* itemNum_alunos = new QStandardItem(num_alunos);
                        modelTurma->setItem(row, 0, itemCod_disciplina);
                        modelTurma->setItem(row, 1, itemCod_turma);
                        modelTurma->setItem(row, 2, itemSub_turma);
                        modelTurma->setItem(row, 3, itemMax_alunos);
                        modelTurma->setItem(row, 4, itemNum_alunos);
                        row++;
                    }//Fim
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
            if(ui->lineEditAnoMatricula->text()=="") throw QString("Por favor, digite o Ano.");
            if(ui->lineEditSemestreMatricula->text()=="") throw QString("Por favor, digite o Semestre.");
            if(ui->lineEditNota1Matricula->text()=="") throw QString("Por favor, digite a Nota 1.");
            if(ui->lineEditNota2Matricula->text()=="") throw QString("Por favor, digite a Nota 2.");
            float notaf=(ui->lineEditNota1Matricula->text().toFloat()+ui->lineEditNota2Matricula->text().toFloat())/2;
            controleMatricula.alterar(ui->lineEditMatricula->text(),ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt(),
            ui->lineEditAnoMatricula->text().toInt(),ui->lineEditSemestreMatricula->text().toInt(),ui->lineEditNota1Matricula->text().toFloat(),ui->lineEditNota2Matricula->text().toFloat(),notaf);
            QMessageBox::information(this, "Ok", "Matricula alterado com sucesso!");
            ui->lineEditMatricula->setFocus();
            ui->lineEditMatricula->selectAll();

            std::list<Matricula*>* listaMatricula = controleMatricula.lista();//TableView
            modelMatricula = new QStandardItemModel(this);
            modelMatricula->setColumnCount(9);
            modelMatricula->setHeaderData(0, Qt::Horizontal, "Matricula");
            modelMatricula->setHeaderData(1, Qt::Horizontal, "Disciplina");
            modelMatricula->setHeaderData(2, Qt::Horizontal, "Turma");
            modelMatricula->setHeaderData(3, Qt::Horizontal, "Sub-Turma");
            modelMatricula->setHeaderData(4, Qt::Horizontal, "Ano");
            modelMatricula->setHeaderData(5, Qt::Horizontal, "Semestre");
            modelMatricula->setHeaderData(6, Qt::Horizontal, "Nota 1");
            modelMatricula->setHeaderData(7, Qt::Horizontal, "Nota 2");
            modelMatricula->setHeaderData(8, Qt::Horizontal, "Nota F");
            tableView = ui->tableViewMatricula;
            tableView->setModel(modelMatricula);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Matricula* matricula : *listaMatricula) {
                QString matricula1 = matricula->getMatricula();
                QString cod_disciplina = matricula->getCod_disciplina();
                QString cod_turma = matricula->getCod_turma();
                QString sub_turma = QString::number(matricula->getSub_turma());
                QString ano = QString::number(matricula->getAno());
                QString semestre = QString::number(matricula->getSemestre());
                QString nota1 = QString::number(matricula->getNota1());
                QString nota2 = QString::number(matricula->getNota2());
                QString notaf = QString::number(matricula->getNotaf());
                QStandardItem* itemMatricula = new QStandardItem(matricula1);
                QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                QStandardItem* itemAno = new QStandardItem(ano);
                QStandardItem* itemSemestre = new QStandardItem(semestre);
                QStandardItem* itemNota1 = new QStandardItem(nota1);
                QStandardItem* itemNota2 = new QStandardItem(nota2);
                QStandardItem* itemNotaF = new QStandardItem(notaf);
                modelMatricula->setItem(row, 0, itemMatricula);
                modelMatricula->setItem(row, 1, itemCod_disciplina);
                modelMatricula->setItem(row, 2, itemCod_turma);
                modelMatricula->setItem(row, 3, itemSub_turma);
                modelMatricula->setItem(row, 4, itemAno);
                modelMatricula->setItem(row, 5, itemSemestre);
                modelMatricula->setItem(row, 6, itemNota1);
                modelMatricula->setItem(row, 7, itemNota2);
                modelMatricula->setItem(row, 8, itemNotaF);
                row++;
            }//Fim
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

            std::list<Matricula*>* listaMatricula = controleMatricula.lista();//TableView
            modelMatricula = new QStandardItemModel(this);
            modelMatricula->setColumnCount(9);
            modelMatricula->setHeaderData(0, Qt::Horizontal, "Matricula");
            modelMatricula->setHeaderData(1, Qt::Horizontal, "Disciplina");
            modelMatricula->setHeaderData(2, Qt::Horizontal, "Turma");
            modelMatricula->setHeaderData(3, Qt::Horizontal, "Sub-Turma");
            modelMatricula->setHeaderData(4, Qt::Horizontal, "Ano");
            modelMatricula->setHeaderData(5, Qt::Horizontal, "Semestre");
            modelMatricula->setHeaderData(6, Qt::Horizontal, "Nota 1");
            modelMatricula->setHeaderData(7, Qt::Horizontal, "Nota 2");
            modelMatricula->setHeaderData(8, Qt::Horizontal, "Nota F");
            tableView = ui->tableViewMatricula;
            tableView->setModel(modelMatricula);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            int row = 0;
            for (Matricula* matricula : *listaMatricula) {
                QString matricula1 = matricula->getMatricula();
                QString cod_disciplina = matricula->getCod_disciplina();
                QString cod_turma = matricula->getCod_turma();
                QString sub_turma = QString::number(matricula->getSub_turma());
                QString ano = QString::number(matricula->getAno());
                QString semestre = QString::number(matricula->getSemestre());
                QString nota1 = QString::number(matricula->getNota1());
                QString nota2 = QString::number(matricula->getNota2());
                QString notaf = QString::number(matricula->getNotaf());
                QStandardItem* itemMatricula = new QStandardItem(matricula1);
                QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                QStandardItem* itemAno = new QStandardItem(ano);
                QStandardItem* itemSemestre = new QStandardItem(semestre);
                QStandardItem* itemNota1 = new QStandardItem(nota1);
                QStandardItem* itemNota2 = new QStandardItem(nota2);
                QStandardItem* itemNotaF = new QStandardItem(notaf);
                modelMatricula->setItem(row, 0, itemMatricula);
                modelMatricula->setItem(row, 1, itemCod_disciplina);
                modelMatricula->setItem(row, 2, itemCod_turma);
                modelMatricula->setItem(row, 3, itemSub_turma);
                modelMatricula->setItem(row, 4, itemAno);
                modelMatricula->setItem(row, 5, itemSemestre);
                modelMatricula->setItem(row, 6, itemNota1);
                modelMatricula->setItem(row, 7, itemNota2);
                modelMatricula->setItem(row, 8, itemNotaF);
                row++;
            }//Fim

            //Atualizar numero de estudantes da turma
            QString info = controleTurma.buscar(ui->lineEditCodDisciplinaMatricula->text(), ui->lineEditCodTurmaMatricula->text(), ui->lineEditSubTurmaMatricula->text().toInt());
            QStringList Info = info.split(";");
            QString max=Info[2],num=Info[3];
            controleTurma.alterar(ui->lineEditCodDisciplinaMatricula->text(),ui->lineEditCodTurmaMatricula->text(),ui->lineEditSubTurmaMatricula->text().toInt(),
                                  max.toInt(),(num.toInt()-1));
            std::list<Turma*>* listaTurma = controleTurma.lista();//TableView
            modelTurma = new QStandardItemModel(this);
            modelTurma->setColumnCount(5);
            modelTurma->setHeaderData(0, Qt::Horizontal, "Disciplina");
            modelTurma->setHeaderData(1, Qt::Horizontal, "Turma");
            modelTurma->setHeaderData(2, Qt::Horizontal, "Sub-Turma");
            modelTurma->setHeaderData(3, Qt::Horizontal, "Max_Alunos");
            modelTurma->setHeaderData(4, Qt::Horizontal, "Num_Alunos");
            tableView = ui->tableViewTurma;
            tableView->setModel(modelTurma);
            tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            tableView->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
            row = 0;
            for (Turma* turma : *listaTurma) {
                QString cod_disciplina = turma->getCod_disciplina();
                QString cod_turma = turma->getCod_turma();
                QString sub_turma = QString::number(turma->getSub_turma());
                QString max_alunos = QString::number(turma->getMaxAlunos());
                QString num_alunos = QString::number(turma->getNumAlunos());
                QStandardItem* itemCod_disciplina = new QStandardItem(cod_disciplina);
                QStandardItem* itemCod_turma = new QStandardItem(cod_turma);
                QStandardItem* itemSub_turma = new QStandardItem(sub_turma);
                QStandardItem* itemMax_alunos = new QStandardItem(max_alunos);
                QStandardItem* itemNum_alunos = new QStandardItem(num_alunos);
                modelTurma->setItem(row, 0, itemCod_disciplina);
                modelTurma->setItem(row, 1, itemCod_turma);
                modelTurma->setItem(row, 2, itemSub_turma);
                modelTurma->setItem(row, 3, itemMax_alunos);
                modelTurma->setItem(row, 4, itemNum_alunos);
                row++;
            }//Fim
        }
        else{
            throw QString("Turma não existente!");
        }
    }
    catch(QString &msg){
        QMessageBox::information(this, "Erro", msg);
    }
}

