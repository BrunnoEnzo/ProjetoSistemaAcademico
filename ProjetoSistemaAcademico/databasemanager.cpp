#include "databasemanager.h"

DatabaseManager::DatabaseManager()
{
    if (QSqlDatabase::contains("qt_sql_default_connection")) {
        db = QSqlDatabase::database("qt_sql_default_connection");
        db.close();
    }

    db = QSqlDatabase::addDatabase("QSQLITE");
    nomeBD = "C:\\Users\\GUARDIAN\\Downloads\\ProjetoSistemaAcademico\\ProjetoSistemaAcademico\\academico.db";
    db.setDatabaseName(nomeBD);
}

bool DatabaseManager::open()
{
    return db.open();
}

void DatabaseManager::close()
{
    db.close();
}
