#include <QtGui/QApplication>
#include "widget.h"
#include "feeditem.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    FeedItem f;
    f.show();

    return a.exec();
}
