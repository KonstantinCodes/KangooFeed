#include <QDate>
#include "feeditem.h"
#include "ui_feeditem.h"

FeedItem::FeedItem(QPixmap thumbnail, QString titel, QDate date, int fileSize, QTime length, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FeedItem)
{
    Q_INIT_RESOURCE(icons);
    ui->setupUi(this);
    setThumbnail(thumbnail);
    setTitle(titel);
    setInfo(date, fileSize, length);
}

FeedItem::~FeedItem()
{
    delete ui;
}

void FeedItem::setThumbnail(QPixmap thumbnail)
{
    ui->thumbnail->setPixmap(thumbnail);
}

void FeedItem::setTitle(QString title)
{
    ui->titleLabel->setText(title);
}

void FeedItem::setInfo(QDate date, int fileSize, QTime length)
{
    ui->infoLabel->setText((QString)"Info: 12.06.2011 | 189.3Mb | 2:42:29"); //date+" | "+fileSize+" | "+length
}

