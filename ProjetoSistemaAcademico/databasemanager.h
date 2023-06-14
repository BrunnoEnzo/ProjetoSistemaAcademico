#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QString>
#include <QSqlDatabase>
class DatabaseManager
{
public:
    DatabaseManager();
    bool open();
    void close();

private:
    QSqlDatabase db;
    QString nomeBD;
};

#endif // DATABASEMANAGER_H
