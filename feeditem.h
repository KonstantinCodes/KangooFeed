#ifndef FEEDITEM_H
#define FEEDITEM_H

#include <QWidget>
#include <QDate>

namespace Ui {
    class FeedItem;
}

class FeedItem : public QWidget
{
    Q_OBJECT

public:
    explicit FeedItem(QPixmap, QString, QString, QDate, int, QTime, QWidget *parent = 0);
    ~FeedItem();
    void setThumbnail(QPixmap);
    void setTitle(QString);
    void setDescription(QString);
    void setInfo(QDate, int, QTime);

private:
    Ui::FeedItem *ui;
};

#endif // FEEDITEM_H
