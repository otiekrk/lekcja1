#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QDebug>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT // deklaracja potrzebna do obsługi systemu sygnałów - gniazd
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots: // sekcja która wskazuje że poniższe funkcje są gniazdami publicznymi
    void wyswietlWiadomosc(); // definiujemy gniazdo o nazwie wyswietlWiadomosc
private:
    QPushButton *btn_lekcja1;
};
#endif // WIDGET_H
