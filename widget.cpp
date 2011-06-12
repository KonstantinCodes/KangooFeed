#include "widget.h"
#include "ui_widget.h"
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include "feeditem.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    for(int i = 0; i < 100; i++) {
        FeedItem *feed = new FeedItem(QPixmap(":/icons/icons/thumbnail.svg"), (QString)"Titel", (QString)"Beschreibung, blassf f ", QDate(2011, 06, 12), 23523626, QTime(2, 32, 27));
        ui->feedVerticalLayout->addWidget(feed);
        //ui->feedVerticalLayout->addWidget(new Line);
    }

    QLabel * label = new QLabel();
    label->setText("sfsf");
    QApplication::alert(label, 20000);
}

Widget::~Widget()
{
    delete ui;
}
