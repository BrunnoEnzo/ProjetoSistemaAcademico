/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
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
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(791, 389);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 781, 351));
        Aluno = new QWidget();
        Aluno->setObjectName("Aluno");
        tableViewAluno = new QTableView(Aluno);
        tableViewAluno->setObjectName("tableViewAluno");
        tableViewAluno->setGeometry(QRect(10, 111, 761, 211));
        layoutWidget = new QWidget(Aluno);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 80, 761, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirAluno = new QPushButton(layoutWidget);
        pushButtonIncluirAluno->setObjectName("pushButtonIncluirAluno");

        horizontalLayout->addWidget(pushButtonIncluirAluno);

        pushButtonConsultarAluno = new QPushButton(layoutWidget);
        pushButtonConsultarAluno->setObjectName("pushButtonConsultarAluno");

        horizontalLayout->addWidget(pushButtonConsultarAluno);

        pushButtonAtualizarAluno = new QPushButton(layoutWidget);
        pushButtonAtualizarAluno->setObjectName("pushButtonAtualizarAluno");

        horizontalLayout->addWidget(pushButtonAtualizarAluno);

        pushButtonRemoverAluno = new QPushButton(layoutWidget);
        pushButtonRemoverAluno->setObjectName("pushButtonRemoverAluno");

        horizontalLayout->addWidget(pushButtonRemoverAluno);

        layoutWidget1 = new QWidget(Aluno);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(10, 0, 761, 28));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        horizontalLayout_5->addWidget(label);

        lineEditMatriculaAluno = new QLineEdit(layoutWidget1);
        lineEditMatriculaAluno->setObjectName("lineEditMatriculaAluno");

        horizontalLayout_5->addWidget(lineEditMatriculaAluno);

        layoutWidget2 = new QWidget(Aluno);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(10, 40, 761, 28));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");

        horizontalLayout_6->addWidget(label_2);

        lineEditNome = new QLineEdit(layoutWidget2);
        lineEditNome->setObjectName("lineEditNome");

        horizontalLayout_6->addWidget(lineEditNome);

        tabWidget->addTab(Aluno, QString());
        Matricula = new QWidget();
        Matricula->setObjectName("Matricula");
        tableViewMatricula = new QTableView(Matricula);
        tableViewMatricula->setObjectName("tableViewMatricula");
        tableViewMatricula->setGeometry(QRect(10, 170, 761, 151));
        layoutWidget3 = new QWidget(Matricula);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(10, 140, 761, 26));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirMatricula = new QPushButton(layoutWidget3);
        pushButtonIncluirMatricula->setObjectName("pushButtonIncluirMatricula");

        horizontalLayout_2->addWidget(pushButtonIncluirMatricula);

        pushButtonConsultarMatricula = new QPushButton(layoutWidget3);
        pushButtonConsultarMatricula->setObjectName("pushButtonConsultarMatricula");

        horizontalLayout_2->addWidget(pushButtonConsultarMatricula);

        pushButtonAtualizarMatricula = new QPushButton(layoutWidget3);
        pushButtonAtualizarMatricula->setObjectName("pushButtonAtualizarMatricula");

        horizontalLayout_2->addWidget(pushButtonAtualizarMatricula);

        pushButtonRemoverMatricula = new QPushButton(layoutWidget3);
        pushButtonRemoverMatricula->setObjectName("pushButtonRemoverMatricula");

        horizontalLayout_2->addWidget(pushButtonRemoverMatricula);

        layoutWidget4 = new QWidget(Matricula);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(10, 40, 371, 28));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget4);
        label_11->setObjectName("label_11");

        horizontalLayout_7->addWidget(label_11);

        lineEditCodTurmaMatricula = new QLineEdit(layoutWidget4);
        lineEditCodTurmaMatricula->setObjectName("lineEditCodTurmaMatricula");

        horizontalLayout_7->addWidget(lineEditCodTurmaMatricula);

        layoutWidget5 = new QWidget(Matricula);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(10, 10, 371, 28));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName("label_10");

        horizontalLayout_8->addWidget(label_10);

        lineEditMatricula = new QLineEdit(layoutWidget5);
        lineEditMatricula->setObjectName("lineEditMatricula");

        horizontalLayout_8->addWidget(lineEditMatricula);

        layoutWidget6 = new QWidget(Matricula);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(400, 40, 371, 28));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget6);
        label_18->setObjectName("label_18");

        horizontalLayout_9->addWidget(label_18);

        lineEditSubTurmaMatricula = new QLineEdit(layoutWidget6);
        lineEditSubTurmaMatricula->setObjectName("lineEditSubTurmaMatricula");

        horizontalLayout_9->addWidget(lineEditSubTurmaMatricula);

        layoutWidget7 = new QWidget(Matricula);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(400, 10, 371, 28));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget7);
        label_12->setObjectName("label_12");

        horizontalLayout_10->addWidget(label_12);

        lineEditCodDisciplinaMatricula = new QLineEdit(layoutWidget7);
        lineEditCodDisciplinaMatricula->setObjectName("lineEditCodDisciplinaMatricula");

        horizontalLayout_10->addWidget(lineEditCodDisciplinaMatricula);

        layoutWidget8 = new QWidget(Matricula);
        layoutWidget8->setObjectName("layoutWidget8");
        layoutWidget8->setGeometry(QRect(10, 70, 181, 28));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget8);
        label_13->setObjectName("label_13");

        horizontalLayout_11->addWidget(label_13);

        lineEditAnoMatricula = new QLineEdit(layoutWidget8);
        lineEditAnoMatricula->setObjectName("lineEditAnoMatricula");

        horizontalLayout_11->addWidget(lineEditAnoMatricula);

        layoutWidget9 = new QWidget(Matricula);
        layoutWidget9->setObjectName("layoutWidget9");
        layoutWidget9->setGeometry(QRect(210, 70, 171, 28));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(layoutWidget9);
        label_14->setObjectName("label_14");

        horizontalLayout_12->addWidget(label_14);

        lineEditSemestreMatricula = new QLineEdit(layoutWidget9);
        lineEditSemestreMatricula->setObjectName("lineEditSemestreMatricula");

        horizontalLayout_12->addWidget(lineEditSemestreMatricula);

        layoutWidget10 = new QWidget(Matricula);
        layoutWidget10->setObjectName("layoutWidget10");
        layoutWidget10->setGeometry(QRect(540, 70, 101, 58));
        verticalLayout = new QVBoxLayout(layoutWidget10);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_17 = new QLabel(layoutWidget10);
        label_17->setObjectName("label_17");

        verticalLayout->addWidget(label_17);

        lineEditNotaFinal = new QLineEdit(layoutWidget10);
        lineEditNotaFinal->setObjectName("lineEditNotaFinal");
        lineEditNotaFinal->setEnabled(false);

        verticalLayout->addWidget(lineEditNotaFinal);

        layoutWidget11 = new QWidget(Matricula);
        layoutWidget11->setObjectName("layoutWidget11");
        layoutWidget11->setGeometry(QRect(210, 100, 171, 28));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget11);
        label_16->setObjectName("label_16");

        horizontalLayout_13->addWidget(label_16);

        lineEditNota2Matricula = new QLineEdit(layoutWidget11);
        lineEditNota2Matricula->setObjectName("lineEditNota2Matricula");

        horizontalLayout_13->addWidget(lineEditNota2Matricula);

        layoutWidget12 = new QWidget(Matricula);
        layoutWidget12->setObjectName("layoutWidget12");
        layoutWidget12->setGeometry(QRect(10, 100, 181, 28));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget12);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_15 = new QLabel(layoutWidget12);
        label_15->setObjectName("label_15");

        horizontalLayout_14->addWidget(label_15);

        lineEditNota1Matricula = new QLineEdit(layoutWidget12);
        lineEditNota1Matricula->setObjectName("lineEditNota1Matricula");

        horizontalLayout_14->addWidget(lineEditNota1Matricula);

        tabWidget->addTab(Matricula, QString());
        Turma = new QWidget();
        Turma->setObjectName("Turma");
        tableViewTurma = new QTableView(Turma);
        tableViewTurma->setObjectName("tableViewTurma");
        tableViewTurma->setGeometry(QRect(10, 140, 761, 181));
        layoutWidget13 = new QWidget(Turma);
        layoutWidget13->setObjectName("layoutWidget13");
        layoutWidget13->setGeometry(QRect(10, 110, 761, 26));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget13);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirTurma = new QPushButton(layoutWidget13);
        pushButtonIncluirTurma->setObjectName("pushButtonIncluirTurma");

        horizontalLayout_3->addWidget(pushButtonIncluirTurma);

        pushButtonConsultarTurma = new QPushButton(layoutWidget13);
        pushButtonConsultarTurma->setObjectName("pushButtonConsultarTurma");

        horizontalLayout_3->addWidget(pushButtonConsultarTurma);

        pushButtonAtualizarTurma = new QPushButton(layoutWidget13);
        pushButtonAtualizarTurma->setObjectName("pushButtonAtualizarTurma");

        horizontalLayout_3->addWidget(pushButtonAtualizarTurma);

        pushButtonRemoverTurma = new QPushButton(layoutWidget13);
        pushButtonRemoverTurma->setObjectName("pushButtonRemoverTurma");

        horizontalLayout_3->addWidget(pushButtonRemoverTurma);

        layoutWidget14 = new QWidget(Turma);
        layoutWidget14->setObjectName("layoutWidget14");
        layoutWidget14->setGeometry(QRect(10, 10, 761, 28));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget14);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget14);
        label_9->setObjectName("label_9");

        horizontalLayout_15->addWidget(label_9);

        lineEditCodDisciplinaTurma = new QLineEdit(layoutWidget14);
        lineEditCodDisciplinaTurma->setObjectName("lineEditCodDisciplinaTurma");

        horizontalLayout_15->addWidget(lineEditCodDisciplinaTurma);

        layoutWidget15 = new QWidget(Turma);
        layoutWidget15->setObjectName("layoutWidget15");
        layoutWidget15->setGeometry(QRect(10, 40, 371, 28));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget15);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget15);
        label_4->setObjectName("label_4");

        horizontalLayout_16->addWidget(label_4);

        lineEditCodigoTurma = new QLineEdit(layoutWidget15);
        lineEditCodigoTurma->setObjectName("lineEditCodigoTurma");

        horizontalLayout_16->addWidget(lineEditCodigoTurma);

        layoutWidget16 = new QWidget(Turma);
        layoutWidget16->setObjectName("layoutWidget16");
        layoutWidget16->setGeometry(QRect(400, 40, 371, 28));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget16);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget16);
        label_5->setObjectName("label_5");

        horizontalLayout_17->addWidget(label_5);

        lineEditMaximoTurma = new QLineEdit(layoutWidget16);
        lineEditMaximoTurma->setObjectName("lineEditMaximoTurma");

        horizontalLayout_17->addWidget(lineEditMaximoTurma);

        layoutWidget17 = new QWidget(Turma);
        layoutWidget17->setObjectName("layoutWidget17");
        layoutWidget17->setGeometry(QRect(10, 70, 371, 28));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget17);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget17);
        label_3->setObjectName("label_3");

        horizontalLayout_18->addWidget(label_3);

        lineEditSubTurma = new QLineEdit(layoutWidget17);
        lineEditSubTurma->setObjectName("lineEditSubTurma");

        horizontalLayout_18->addWidget(lineEditSubTurma);

        layoutWidget18 = new QWidget(Turma);
        layoutWidget18->setObjectName("layoutWidget18");
        layoutWidget18->setGeometry(QRect(400, 70, 371, 28));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget18);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget18);
        label_6->setObjectName("label_6");

        horizontalLayout_19->addWidget(label_6);

        lineEditNumeroTurma = new QLineEdit(layoutWidget18);
        lineEditNumeroTurma->setObjectName("lineEditNumeroTurma");
        lineEditNumeroTurma->setEnabled(false);

        horizontalLayout_19->addWidget(lineEditNumeroTurma);

        tabWidget->addTab(Turma, QString());
        Disciplina = new QWidget();
        Disciplina->setObjectName("Disciplina");
        tableViewDisciplina = new QTableView(Disciplina);
        tableViewDisciplina->setObjectName("tableViewDisciplina");
        tableViewDisciplina->setGeometry(QRect(10, 110, 761, 211));
        layoutWidget19 = new QWidget(Disciplina);
        layoutWidget19->setObjectName("layoutWidget19");
        layoutWidget19->setGeometry(QRect(10, 80, 761, 26));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget19);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonIncluirDisciplina = new QPushButton(layoutWidget19);
        pushButtonIncluirDisciplina->setObjectName("pushButtonIncluirDisciplina");

        horizontalLayout_4->addWidget(pushButtonIncluirDisciplina);

        pushButtonConsultarDisciplina = new QPushButton(layoutWidget19);
        pushButtonConsultarDisciplina->setObjectName("pushButtonConsultarDisciplina");

        horizontalLayout_4->addWidget(pushButtonConsultarDisciplina);

        pushButtonAtualizarDisciplina = new QPushButton(layoutWidget19);
        pushButtonAtualizarDisciplina->setObjectName("pushButtonAtualizarDisciplina");

        horizontalLayout_4->addWidget(pushButtonAtualizarDisciplina);

        pushButtonRemoverDisciplina = new QPushButton(layoutWidget19);
        pushButtonRemoverDisciplina->setObjectName("pushButtonRemoverDisciplina");

        horizontalLayout_4->addWidget(pushButtonRemoverDisciplina);

        layoutWidget20 = new QWidget(Disciplina);
        layoutWidget20->setObjectName("layoutWidget20");
        layoutWidget20->setGeometry(QRect(10, 0, 761, 28));
        horizontalLayout_20 = new QHBoxLayout(layoutWidget20);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        horizontalLayout_20->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget20);
        label_8->setObjectName("label_8");

        horizontalLayout_20->addWidget(label_8);

        lineEditCodigoDisciplina = new QLineEdit(layoutWidget20);
        lineEditCodigoDisciplina->setObjectName("lineEditCodigoDisciplina");

        horizontalLayout_20->addWidget(lineEditCodigoDisciplina);

        layoutWidget21 = new QWidget(Disciplina);
        layoutWidget21->setObjectName("layoutWidget21");
        layoutWidget21->setGeometry(QRect(10, 40, 761, 28));
        horizontalLayout_21 = new QHBoxLayout(layoutWidget21);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        horizontalLayout_21->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget21);
        label_7->setObjectName("label_7");

        horizontalLayout_21->addWidget(label_7);

        lineEditNomeDisciplina = new QLineEdit(layoutWidget21);
        lineEditNomeDisciplina->setObjectName("lineEditNomeDisciplina");

        horizontalLayout_21->addWidget(lineEditNomeDisciplina);

        tabWidget->addTab(Disciplina, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 791, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


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
