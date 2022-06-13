#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    QString printStr = ui->plainTextEdit->toPlainText();
    QChar *list = printStr.data();
    QStringList strlst;
    int line = 0, cursor = 0;
    for (bool getst = true;getst;)
    {
    int index = printStr.indexOf("\n", cursor); // Ищем перевод каретки
    // на новую строку
    QString s = "";
    if (index == -1)
    {
    getst = false;
    s.append(&list[cursor], printStr.length() - cursor);
    }
    else s.append(&list[cursor], index - cursor);
    cursor = index + 1;
    strlst << s;
    }
    QPainter painter;
    painter.begin(&printer);
    int w = painter.window().width();
    int h = painter.window().height();
    int amount = strlst.count();
    QFont font = painter.font();
    QFontMetrics fmetrics(font);
    for (int i = 0; i < amount; i++)
    {
    QPointF pf;
    pf.setX(10);
    pf.setY(line);
    painter.drawText(pf, strlst.at(i));
    line += fmetrics.height();
    if (h - line <= fmetrics.height())
    {
    printer.newPage();
    line = 0;
    }
    }
    painter.end();
}
