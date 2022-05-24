#ifndef APPMODEL_H
#define APPMODEL_H

#include <QObject>
#include <memory.h>

#include "WardrobeDB.h"
#include "QDataHandler.h"

class AppModel : public QObject
{
    Q_OBJECT
public:
    explicit AppModel(QObject *parent = nullptr);

    bool addSlot(QString& position);
    bool removeSlot(QString& position);

    WardrobeDB* m_database;
    QDataHandler* m_handler;

signals:
    void slotUpdate();

};

#endif // APPMODEL_H
