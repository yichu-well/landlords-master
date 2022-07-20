#ifndef LOADING_H
#define LOADING_H

#include <QWidget>

class Loading : public QWidget
{
    Q_OBJECT    /*只有继承了QObject类的类，才具有信号槽的能力。所以，为了使用信号槽，必须继承QObject。凡是QObject类（不管是直接子类还是间接子类），都应该在第一行代码写上Q_OBJECT*/
public:
    explicit Loading(QWidget *parent = nullptr);

signals:
protected:
    void paintEvent(QPaintEvent* event);

private:
    QPixmap m_bk;
    QPixmap m_progress;
    int m_dist = 15;
};

#endif // LOADING_H
