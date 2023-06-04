#include "matriculadao.h"

MatriculaDAO::MatriculaDAO()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    nomeBD = "C:\\Users\\GUARDIAN\\Downloads\\SistAcad\\SistAcad\\academico.db";
    db.setDatabaseName(nomeBD);
}
void MatriculaDAO::incluir(Matricula* obj){
    if (!db.open()) {
        throw QString("Erro ao abrir o banco de dados");
    }
    QSqlQuery insertQuery;
    insertQuery.prepare("INSERT INTO matricula (mat_aluno,cod_turma,sub_turma,cod_disciplina,ano_matricula,semestre,nota1,nota2,media) "
                        "VALUES (:mat_aluno, :cod_turma, :sub_turma, :cod_disciplina, :ano_matricula, :semestre, :nota1, :nota2, :media)");
    insertQuery.bindValue(":mat_aluno",obj->getMatricula());
    insertQuery.bindValue(":cod_turma", obj->getCod_turma());
    insertQuery.bindValue(":sub_turma", obj->getSub_turma());
    insertQuery.bindValue(":cod_disciplina", obj->getCod_disciplina());
    insertQuery.bindValue(":ano_matricula", obj->getAno());
    insertQuery.bindValue(":semestre", obj->getSemestre());
    insertQuery.bindValue(":nota1", obj->getNota1());
    insertQuery.bindValue(":nota2", obj->getNota2());
    insertQuery.bindValue(":media", obj->getNotaf());

    if (!insertQuery.exec()) {
        db.close();
        throw QString("Erro ao executar a inserção");
    }

    db.close();
}
Matricula* MatriculaDAO::buscar(Matricula* obj){

}
void MatriculaDAO::alterar (Matricula* obj){

}
Matricula* MatriculaDAO::remover(Matricula* obj){

}
