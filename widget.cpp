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
        FeedItem *feed = new FeedItem();
        ui->feedVerticalLayout->addWidget(feed);
    }

    QLabel * label = new QLabel();
    label->setText("sfsf");
    QApplication::alert(label, 20000);
}

Widget::~Widget()
{
    delete ui;
}
