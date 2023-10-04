#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , comPort(new QSerialPort(this))
{
    ui->setupUi(this);

    on_updateListPorts_btn_clicked();

    ui->transferRate_comboBox->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->transferRate_comboBox->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->transferRate_comboBox->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->transferRate_comboBox->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::getData(const QString &path)
{
    QString str;
    QFile file(path);
    if(file.open(QIODevice::ReadOnly)){
        str = file.readAll();
    }

    QString s = "";
    for(const auto& e: str)
    {
        if(e != ','){
            s += e;
        }
        else{
            bool ok;
            x.push_back(s.toInt(&ok, 10));
            s = "";
        }
    }
}


void MainWindow::on_pathToFile_btn_clicked()
{
    QString path = QFileDialog::getOpenFileName(this);
    ui->path_lineEdit->setText(path);
}


void MainWindow::on_updateListPorts_btn_clicked()
{
    if(!ui->availablePorts_comboBox->size().isEmpty())
        ui->availablePorts_comboBox->clear();

    for(const QSerialPortInfo &portInfo: QSerialPortInfo::availablePorts())
    {
        ui->availablePorts_comboBox->addItem( portInfo.portName());
    }
}


void MainWindow::on_connectionToPort_clicked()
{
    this->comPort->setPortName(ui->availablePorts_comboBox->currentText());
    this->comPort->setBaudRate(ui->transferRate_comboBox->currentText().toInt());
    this->comPort->setDataBits(QSerialPort::Data5);
    this->comPort->setParity(QSerialPort::NoParity);
    this->comPort->setStopBits(QSerialPort::OneStop);

    this->comPort->open(QIODevice::ReadWrite);
    this->comPort->write("Hello");
    this->comPort->close();
}


void MainWindow::on_buildGraph_btn_clicked()
{
    getData(ui->path_lineEdit->text());
    ui->widget->xAxis->setRange(-10, 10);
    ui->widget->yAxis->setRange(-5, 5);

    for(const auto& e: this->x)
    {
        y.push_back(sin(e));
    }

    ui->widget->setInteraction(QCP::iRangeZoom, true);
    ui->widget->setInteraction(QCP::iRangeDrag, true);
    ui->widget->legend->setVisible(true);
    ui->widget->legend->setFont(QFont("Helvetica", 9));
    ui->widget->legend->setTextColor(Qt::red);

    QStringList name;
    name << "Ток"<< "Напряжение"<< "Коррдината" << "Состояние датчика 1" << "Состояние датчика 2";

    for(const auto& e: name)
    {
       ui->widget->addGraph()->setName(e);
    }

    ui->widget->graph()->addData(x, y);
    ui->widget->replot();

    ui->widget->installEventFilter(this);
}

