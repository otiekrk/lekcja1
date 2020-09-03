#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(300,200);
    btn_lekcja1 = new QPushButton("guzik",this);
    btn_lekcja1->setGeometry(75,75,150,50);
    connect(btn_lekcja1,&QPushButton::clicked,this,&Widget::wyswietlWiadomosc);
    setWindowTitle("strefaKodowania - lekcja1");
}

Widget::~Widget()
{
}

void Widget::wyswietlWiadomosc(){
    QString s("tajna wiadomość");
    qDebug() << s;
    QMessageBox::warning(this,"informacja",s);
}

