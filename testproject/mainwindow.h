#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>
#include <QString>
#include <QVector>
#include <cmath>
#include <QFile>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void getData(const QString& path);

private slots:
    void on_pathToFile_btn_clicked();

    void on_updateListPorts_btn_clicked();

    void on_connectionToPort_clicked();

    void on_buildGraph_btn_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort* comPort;
    QVector<double> x, y;
};
#endif // MAINWINDOW_H
