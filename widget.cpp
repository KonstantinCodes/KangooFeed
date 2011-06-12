#include "widget.h"
#include "ui_widget.h"
#include <QtGui>
#include "feeditem.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    //FeedItem f = new FeedItem();

    //ui->feedVerticalLayout->addWidget(f);
}

Widget::~Widget()
{
    delete ui;
}
