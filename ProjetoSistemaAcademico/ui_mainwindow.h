/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *Aluno;
    QTableView *tableViewAluno;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonIncluirAluno;
    QPushButton *pushButtonConsultarAluno;
    QPushButton *pushButtonAtualizarAluno;
    QPushButton *pushButtonRemoverAluno;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEditMatriculaAluno;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEditNome;
    QWidget *Matricula;
    QTableView *tableViewMatricula;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonIncluirMatricula;
    QPushButton *pushButtonConsultarMatricula;
    QPushButton *pushButtonAtualizarMatricula;
    QPushButton *pushButtonRemoverMatricula;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_11;
    QLineEdit *lineEditCodTurmaMatricula;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *lineEditMatricula;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_18;
    QLineEdit *lineEditSubTurmaMatricula;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *lineEditCodDisciplinaMatricula;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_13;
    QLineEdit *lineEditAnoMatricula;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_14;
    QLineEdit *lineEditSemestreMatricula;
    QWidget *layoutWidget10;
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QLineEdit *lineEditNotaFinal;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_16;
    QLineEdit *lineEditNota2Matricula;
    QWidget *layoutWidget12;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_15;
    QLineEdit *lineEditNota1Matricula;
    QWidget *Turma;
    QTableView *tableViewTurma;
    QWidget *layoutWidget13;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonIncluirTurma;
    QPushButton *pushButtonConsultarTurma;
    QPushButton *pushButtonAtualizarTurma;
    QPushButton *pushButtonRemoverTurma;
    QWidget *layoutWidget14;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_9;
    QLineEdit *lineEditCodDisciplinaTurma;
    QWidget *layoutWidget15;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_4;
    QLineEdit *lineEditCodigoTurma;
    QWidget *layoutWidget16;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_5;
    QLineEdit *lineEditMaximoTurma;
    QWidget *layoutWidget17;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_3;
    QLineEdit *lineEditSubTurma;
    QWidget *layoutWidget18;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_6;
    QLineEdit *lineEditNumeroTurma;
    QWidget *Disciplina;
    QTableView *tableViewDisciplina;
    QWidget *layoutWidget19;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButtonIncluirDisciplina;
    QPushButton *pushButtonConsultarDisciplina;
    QPushButton *pushButtonAtualizarDisciplina;
    QPushButton *pushButtonRemoverDisciplina;
    QWidget *layoutWidget20;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_8;
    QLineEdit *lineEditCodigoDisciplina;
    QWidget *layoutWidget21;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_7;
    QLineEdit *lineEditNomeDisciplina;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(559, 389);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 551, 351));
        Aluno = new QWidget();
        Aluno->setObjectName(QString::fromUtf8("Aluno"));
        tableViewAluno = new QTableView(Aluno);
        tableViewAluno->setObjectName(QString::fromUtf8("tableViewAluno"));
        tableViewAluno->setGeometry(QRect(10, 111, 521, 201));
        layoutWidget = new QWidget(Aluno);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 521, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirAluno = new QPushButton(layoutWidget);
        pushButtonIncluirAluno->setObjectName(QString::fromUtf8("pushButtonIncluirAluno"));

        horizontalLayout->addWidget(pushButtonIncluirAluno);

        pushButtonConsultarAluno = new QPushButton(layoutWidget);
        pushButtonConsultarAluno->setObjectName(QString::fromUtf8("pushButtonConsultarAluno"));

        horizontalLayout->addWidget(pushButtonConsultarAluno);

        pushButtonAtualizarAluno = new QPushButton(layoutWidget);
        pushButtonAtualizarAluno->setObjectName(QString::fromUtf8("pushButtonAtualizarAluno"));

        horizontalLayout->addWidget(pushButtonAtualizarAluno);

        pushButtonRemoverAluno = new QPushButton(layoutWidget);
        pushButtonRemoverAluno->setObjectName(QString::fromUtf8("pushButtonRemoverAluno"));

        horizontalLayout->addWidget(pushButtonRemoverAluno);

        layoutWidget1 = new QWidget(Aluno);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 521, 28));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_5->addWidget(label);

        lineEditMatriculaAluno = new QLineEdit(layoutWidget1);
        lineEditMatriculaAluno->setObjectName(QString::fromUtf8("lineEditMatriculaAluno"));

        horizontalLayout_5->addWidget(lineEditMatriculaAluno);

        layoutWidget2 = new QWidget(Aluno);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 40, 521, 28));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEditNome = new QLineEdit(layoutWidget2);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));

        horizontalLayout_6->addWidget(lineEditNome);

        tabWidget->addTab(Aluno, QString());
        Matricula = new QWidget();
        Matricula->setObjectName(QString::fromUtf8("Matricula"));
        tableViewMatricula = new QTableView(Matricula);
        tableViewMatricula->setObjectName(QString::fromUtf8("tableViewMatricula"));
        tableViewMatricula->setGeometry(QRect(10, 170, 521, 141));
        layoutWidget3 = new QWidget(Matricula);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 140, 521, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirMatricula = new QPushButton(layoutWidget3);
        pushButtonIncluirMatricula->setObjectName(QString::fromUtf8("pushButtonIncluirMatricula"));

        horizontalLayout_2->addWidget(pushButtonIncluirMatricula);

        pushButtonConsultarMatricula = new QPushButton(layoutWidget3);
        pushButtonConsultarMatricula->setObjectName(QString::fromUtf8("pushButtonConsultarMatricula"));

        horizontalLayout_2->addWidget(pushButtonConsultarMatricula);

        pushButtonAtualizarMatricula = new QPushButton(layoutWidget3);
        pushButtonAtualizarMatricula->setObjectName(QString::fromUtf8("pushButtonAtualizarMatricula"));

        horizontalLayout_2->addWidget(pushButtonAtualizarMatricula);

        pushButtonRemoverMatricula = new QPushButton(layoutWidget3);
        pushButtonRemoverMatricula->setObjectName(QString::fromUtf8("pushButtonRemoverMatricula"));

        horizontalLayout_2->addWidget(pushButtonRemoverMatricula);

        layoutWidget4 = new QWidget(Matricula);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(257, 10, 271, 28));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_7->addWidget(label_11);

        lineEditCodTurmaMatricula = new QLineEdit(layoutWidget4);
        lineEditCodTurmaMatricula->setObjectName(QString::fromUtf8("lineEditCodTurmaMatricula"));

        horizontalLayout_7->addWidget(lineEditCodTurmaMatricula);

        layoutWidget5 = new QWidget(Matricula);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(10, 10, 221, 28));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        lineEditMatricula = new QLineEdit(layoutWidget5);
        lineEditMatricula->setObjectName(QString::fromUtf8("lineEditMatricula"));

        horizontalLayout_8->addWidget(lineEditMatricula);

        layoutWidget6 = new QWidget(Matricula);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(10, 40, 221, 28));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget6);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_9->addWidget(label_18);

        lineEditSubTurmaMatricula = new QLineEdit(layoutWidget6);
        lineEditSubTurmaMatricula->setObjectName(QString::fromUtf8("lineEditSubTurmaMatricula"));

        horizontalLayout_9->addWidget(lineEditSubTurmaMatricula);

        layoutWidget7 = new QWidget(Matricula);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(250, 40, 276, 28));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        lineEditCodDisciplinaMatricula = new QLineEdit(layoutWidget7);
        lineEditCodDisciplinaMatricula->setObjectName(QString::fromUtf8("lineEditCodDisciplinaMatricula"));

        horizontalLayout_10->addWidget(lineEditCodDisciplinaMatricula);

        layoutWidget8 = new QWidget(Matricula);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(10, 70, 158, 28));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget8);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_11->addWidget(label_13);

        lineEditAnoMatricula = new QLineEdit(layoutWidget8);
        lineEditAnoMatricula->setObjectName(QString::fromUtf8("lineEditAnoMatricula"));

        horizontalLayout_11->addWidget(lineEditAnoMatricula);

        layoutWidget9 = new QWidget(Matricula);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(201, 70, 181, 28));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget9);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_12->addWidget(label_14);

        lineEditSemestreMatricula = new QLineEdit(layoutWidget9);
        lineEditSemestreMatricula->setObjectName(QString::fromUtf8("lineEditSemestreMatricula"));

        horizontalLayout_12->addWidget(lineEditSemestreMatricula);

        layoutWidget10 = new QWidget(Matricula);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(420, 70, 110, 58));
        verticalLayout = new QVBoxLayout(layoutWidget10);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget10);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout->addWidget(label_17);

        lineEditNotaFinal = new QLineEdit(layoutWidget10);
        lineEditNotaFinal->setObjectName(QString::fromUtf8("lineEditNotaFinal"));

        verticalLayout->addWidget(lineEditNotaFinal);

        layoutWidget11 = new QWidget(Matricula);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(200, 100, 181, 28));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget11);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_13->addWidget(label_16);

        lineEditNota2Matricula = new QLineEdit(layoutWidget11);
        lineEditNota2Matricula->setObjectName(QString::fromUtf8("lineEditNota2Matricula"));

        horizontalLayout_13->addWidget(lineEditNota2Matricula);

        layoutWidget12 = new QWidget(Matricula);
        layoutWidget12->setObjectName(QString::fromUtf8("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(10, 100, 161, 28));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget12);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_14->addWidget(label_15);

        lineEditNota1Matricula = new QLineEdit(layoutWidget12);
        lineEditNota1Matricula->setObjectName(QString::fromUtf8("lineEditNota1Matricula"));

        horizontalLayout_14->addWidget(lineEditNota1Matricula);

        tabWidget->addTab(Matricula, QString());
        Turma = new QWidget();
        Turma->setObjectName(QString::fromUtf8("Turma"));
        tableViewTurma = new QTableView(Turma);
        tableViewTurma->setObjectName(QString::fromUtf8("tableViewTurma"));
        tableViewTurma->setGeometry(QRect(10, 140, 521, 171));
        layoutWidget13 = new QWidget(Turma);
        layoutWidget13->setObjectName(QString::fromUtf8("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(10, 110, 521, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget13);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirTurma = new QPushButton(layoutWidget13);
        pushButtonIncluirTurma->setObjectName(QString::fromUtf8("pushButtonIncluirTurma"));

        horizontalLayout_3->addWidget(pushButtonIncluirTurma);

        pushButtonConsultarTurma = new QPushButton(layoutWidget13);
        pushButtonConsultarTurma->setObjectName(QString::fromUtf8("pushButtonConsultarTurma"));

        horizontalLayout_3->addWidget(pushButtonConsultarTurma);

        pushButtonAtualizarTurma = new QPushButton(layoutWidget13);
        pushButtonAtualizarTurma->setObjectName(QString::fromUtf8("pushButtonAtualizarTurma"));

        horizontalLayout_3->addWidget(pushButtonAtualizarTurma);

        pushButtonRemoverTurma = new QPushButton(layoutWidget13);
        pushButtonRemoverTurma->setObjectName(QString::fromUtf8("pushButtonRemoverTurma"));

        horizontalLayout_3->addWidget(pushButtonRemoverTurma);

        layoutWidget14 = new QWidget(Turma);
        layoutWidget14->setObjectName(QString::fromUtf8("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(10, 10, 521, 28));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget14);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget14);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_15->addWidget(label_9);

        lineEditCodDisciplinaTurma = new QLineEdit(layoutWidget14);
        lineEditCodDisciplinaTurma->setObjectName(QString::fromUtf8("lineEditCodDisciplinaTurma"));

        horizontalLayout_15->addWidget(lineEditCodDisciplinaTurma);

        layoutWidget15 = new QWidget(Turma);
        layoutWidget15->setObjectName(QString::fromUtf8("layoutWidget15"));
        layoutWidget15->setGeometry(QRect(10, 40, 221, 28));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget15);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget15);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_16->addWidget(label_4);

        lineEditCodigoTurma = new QLineEdit(layoutWidget15);
        lineEditCodigoTurma->setObjectName(QString::fromUtf8("lineEditCodigoTurma"));

        horizontalLayout_16->addWidget(lineEditCodigoTurma);

        layoutWidget16 = new QWidget(Turma);
        layoutWidget16->setObjectName(QString::fromUtf8("layoutWidget16"));
        layoutWidget16->setGeometry(QRect(270, 40, 261, 28));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget16);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget16);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_17->addWidget(label_5);

        lineEditMaximoTurma = new QLineEdit(layoutWidget16);
        lineEditMaximoTurma->setObjectName(QString::fromUtf8("lineEditMaximoTurma"));

        horizontalLayout_17->addWidget(lineEditMaximoTurma);

        layoutWidget17 = new QWidget(Turma);
        layoutWidget17->setObjectName(QString::fromUtf8("layoutWidget17"));
        layoutWidget17->setGeometry(QRect(10, 70, 221, 28));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget17);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget17);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_18->addWidget(label_3);

        lineEditSubTurma = new QLineEdit(layoutWidget17);
        lineEditSubTurma->setObjectName(QString::fromUtf8("lineEditSubTurma"));

        horizontalLayout_18->addWidget(lineEditSubTurma);

        layoutWidget18 = new QWidget(Turma);
        layoutWidget18->setObjectName(QString::fromUtf8("layoutWidget18"));
        layoutWidget18->setGeometry(QRect(270, 70, 262, 28));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget18);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget18);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_19->addWidget(label_6);

        lineEditNumeroTurma = new QLineEdit(layoutWidget18);
        lineEditNumeroTurma->setObjectName(QString::fromUtf8("lineEditNumeroTurma"));

        horizontalLayout_19->addWidget(lineEditNumeroTurma);

        tabWidget->addTab(Turma, QString());
        Disciplina = new QWidget();
        Disciplina->setObjectName(QString::fromUtf8("Disciplina"));
        tableViewDisciplina = new QTableView(Disciplina);
        tableViewDisciplina->setObjectName(QString::fromUtf8("tableViewDisciplina"));
        tableViewDisciplina->setGeometry(QRect(10, 110, 521, 201));
        layoutWidget19 = new QWidget(Disciplina);
        layoutWidget19->setObjectName(QString::fromUtf8("layoutWidget19"));
        layoutWidget19->setGeometry(QRect(10, 80, 521, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget19);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirDisciplina = new QPushButton(layoutWidget19);
        pushButtonIncluirDisciplina->setObjectName(QString::fromUtf8("pushButtonIncluirDisciplina"));

        horizontalLayout_4->addWidget(pushButtonIncluirDisciplina);

        pushButtonConsultarDisciplina = new QPushButton(layoutWidget19);
        pushButtonConsultarDisciplina->setObjectName(QString::fromUtf8("pushButtonConsultarDisciplina"));

        horizontalLayout_4->addWidget(pushButtonConsultarDisciplina);

        pushButtonAtualizarDisciplina = new QPushButton(layoutWidget19);
        pushButtonAtualizarDisciplina->setObjectName(QString::fromUtf8("pushButtonAtualizarDisciplina"));

        horizontalLayout_4->addWidget(pushButtonAtualizarDisciplina);

        pushButtonRemoverDisciplina = new QPushButton(layoutWidget19);
        pushButtonRemoverDisciplina->setObjectName(QString::fromUtf8("pushButtonRemoverDisciplina"));

        horizontalLayout_4->addWidget(pushButtonRemoverDisciplina);

        layoutWidget20 = new QWidget(Disciplina);
        layoutWidget20->setObjectName(QString::fromUtf8("layoutWidget20"));
        layoutWidget20->setGeometry(QRect(10, 0, 521, 28));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget20);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget20);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_20->addWidget(label_8);

        lineEditCodigoDisciplina = new QLineEdit(layoutWidget20);
        lineEditCodigoDisciplina->setObjectName(QString::fromUtf8("lineEditCodigoDisciplina"));

        horizontalLayout_20->addWidget(lineEditCodigoDisciplina);

        layoutWidget21 = new QWidget(Disciplina);
        layoutWidget21->setObjectName(QString::fromUtf8("layoutWidget21"));
        layoutWidget21->setGeometry(QRect(10, 40, 521, 28));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget21);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget21);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_21->addWidget(label_7);

        lineEditNomeDisciplina = new QLineEdit(layoutWidget21);
        lineEditNomeDisciplina->setObjectName(QString::fromUtf8("lineEditNomeDisciplina"));

        horizontalLayout_21->addWidget(lineEditNomeDisciplina);

        tabWidget->addTab(Disciplina, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 559, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonIncluirAluno->setText(QCoreApplication::translate("MainWindow", "Incluir", nullptr));
        pushButtonConsultarAluno->setText(QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        pushButtonAtualizarAluno->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemoverAluno->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Matricula:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nome:</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Aluno), QCoreApplication::translate("MainWindow", "Aluno", nullptr));
        pushButtonIncluirMatricula->setText(QCoreApplication::translate("MainWindow", "Incluir", nullptr));
        pushButtonConsultarMatricula->setText(QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        pushButtonAtualizarMatricula->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemoverMatricula->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Codigo Turma:</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Matricula:</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Sub-Turma:</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Codigo Disciplina:</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Ano:</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Semestre:</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nota Final:</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nota 2:</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nota 1:</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Matricula), QCoreApplication::translate("MainWindow", "Matricula", nullptr));
        pushButtonIncluirTurma->setText(QCoreApplication::translate("MainWindow", "Incluir", nullptr));
        pushButtonConsultarTurma->setText(QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        pushButtonAtualizarTurma->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemoverTurma->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Codigo Disciplina:</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Codigo:</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Maximo Alunos:</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Sub-Turma:</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Numero Alunos:</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Turma), QCoreApplication::translate("MainWindow", "Turma", nullptr));
        pushButtonIncluirDisciplina->setText(QCoreApplication::translate("MainWindow", "Incluir", nullptr));
        pushButtonConsultarDisciplina->setText(QCoreApplication::translate("MainWindow", "Consultar", nullptr));
        pushButtonAtualizarDisciplina->setText(QCoreApplication::translate("MainWindow", "Atualizar", nullptr));
        pushButtonRemoverDisciplina->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">C\303\263digo:</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Nome:</span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Disciplina), QCoreApplication::translate("MainWindow", "Disciplina", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
