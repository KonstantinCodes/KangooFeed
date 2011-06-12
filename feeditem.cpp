#include <QDate>
#include "feeditem.h"
#include "ui_feeditem.h"

FeedItem::FeedItem(QPixmap thumbnail, QString titel, QString description, QDate date, int fileSize, QTime length, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FeedItem)
{
    Q_INIT_RESOURCE(icons);
    ui->setupUi(this);
    setThumbnail(thumbnail);
    setTitle(titel);
    setDescription(description);
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

void FeedItem::setDescription(QString description)
{
    ui->descriptionLabel->setText(description);
}

void FeedItem::setInfo(QDate date, int fileSize, QTime length)
{
    double fileSizeMb = fileSize/1048576;
    ui->infoLabel->setText((QString)date.toString("ddd, MMMM d yyyy")+" | "+QString::number(fileSizeMb, 'g', 1)+"Mb | "+length.toString("hh:mm:ss"));
}

