#include "widget.h"
#include <QDebug>
#include <QVariant>
#include <QColor>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVariant v(709);
    qDebug()<<v.toInt();
    QVariant w("How are you? ");
    qDebug()<<w.toString();

    QMap<QString, QVariant>map;
    map["int"] = 709;
    map["double"] = 709.709;
    map["string"] = "How are you? ";
    map["color"] = QColor(255, 0, 0);
    /* 调用相应的转换函数并输出 */
    qDebug()<<map["int"]<<map["int"].toInt();       //依次输出：原始值，转换类型后的值
    qDebug()<<map["double"]<<map["double"].toDouble();
    qDebug()<<map["string"]<<map["string"].toString();
    qDebug()<<map["color"]<<map["color"].value<QColor>();

    QStringList sl;
    sl<<"A"<<"B"<<"C"<<"D";
    QVariant slv(sl);       //保存列表
    /* 输出列表内容 */
    if(slv.type() == QVariant::StringList)
    {
        QStringList list = slv.toStringList();
        for(int i=0; i<list.size(); ++i)
            qDebug()<<list.at(i);
    }
}

Widget::~Widget()
{

}
