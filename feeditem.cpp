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
    QString fileSizeReadable;
    QStringList units;
    units << "KB" << "MB" << "GB";

    QStringListIterator i(units);
    QString unit("bytes");

    while(fileSize >= 1024.0 && i.hasNext())
    {
        unit = i.next();
        fileSize /= 1024.0;
    }
    fileSizeReadable = QString::number(fileSize,'f', 2)+unit;

    ui->infoLabel->setText((QString)date.toString("ddd, MMMM d yyyy")+" | "+fileSizeReadable+" | "+length.toString("hh:mm:ss"));
}

