#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_pushButton_clicked()
{
QPrinter printer;
QPrintDialog dlg(&printer, this);
dlg.setWindowTitle("Print");
if (dlg.exec() != QDialog::Accepted)
return;
}

void MainWindow::on_pushButton_clicked()
{
QPrinter printer;
QPrintDialog dlg(&printer, this);
dlg.setWindowTitle("Print");
if (dlg.exec() != QDialog::Accepted)
Return;
textEdit->print(&printer);
}
MainWindow::~MainWindow()
{
    delete ui;
}

