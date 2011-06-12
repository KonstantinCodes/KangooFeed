#include "widget.h"
#include "ui_widget.h"
#include <QtGui>
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
}

Widget::~Widget()
{
    delete ui;
}
