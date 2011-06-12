#ifndef FEEDITEM_H
#define FEEDITEM_H

#include <QWidget>

namespace Ui {
    class FeedItem;
}

class FeedItem : public QWidget
{
    Q_OBJECT

public:
    explicit FeedItem(QWidget *parent = 0);
    ~FeedItem();

private:
    Ui::FeedItem *ui;
};

#endif // FEEDITEM_H
