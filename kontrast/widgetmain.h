#ifndef WIDGETMAIN_H
#define WIDGETMAIN_H

#include <QWidget>
#include <QShowEvent>
#include <QResizeEvent>
#include <QCloseEvent>

namespace Ui {
class WidgetMain;
}

class WidgetMain : public QWidget
{
    Q_OBJECT

public:
    explicit WidgetMain(QWidget *parent = 0);
    ~WidgetMain();

    void showEvent(QShowEvent *event);
    void resizeEvent(QResizeEvent *ev);
    void closeEvent(QCloseEvent *event);
    QImage contrast(QImage &resim, int faktor);

private slots:
    void on_pushButton_clicked();

    void on_horizontalSlider_sliderMoved(int position);

private:
    Ui::WidgetMain *ui;
};

#endif // WIDGETMAIN_H
