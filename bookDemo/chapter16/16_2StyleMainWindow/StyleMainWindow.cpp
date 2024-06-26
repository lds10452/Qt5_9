﻿#include "StyleMainWindow.h"
#include "ui_StyleMainWindow.h"

#include    <QStyleFactory>

StyleMainWindow::StyleMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StyleMainWindow)
{
    ui->setupUi(this);
    QRegExp regExp(".(.*)\\+?Style");
    QString defaultStyle = QApplication::style()->metaObject()->className();
//    ui->LabDefaultStyle->setText(defaultStyle);
    ui->statusbar->showMessage(defaultStyle);
    if (regExp.exactMatch(defaultStyle))
        defaultStyle = regExp.cap(1);
    ui->comboSysStyle->addItems(QStyleFactory::keys());
    ui->comboSysStyle->setCurrentIndex(ui->comboSysStyle->findText(defaultStyle, Qt::MatchContains));
//    ui->comboSysStyle->setCurrentIndex(ui.styleSheetCombo->findText("Coffee"));
//    loadStyleSheet("Coffee");
}

StyleMainWindow::~StyleMainWindow()
{
    delete ui;
}

void StyleMainWindow::on_comboSysStyle_currentIndexChanged(const QString &arg1)
{
//    qApp->setStyle(arg1);

    QStyle *style=QStyleFactory::create(arg1);
    qApp->setStyle(style);
    ui->statusbar->showMessage(style->metaObject()->className());
}

void StyleMainWindow::on_btnNormal_clicked()
{//正常样式，去除所有样式表
    this->setStyleSheet("");
}

void StyleMainWindow::on_btnFontLarge_clicked()
{//大字体
  ui->plainTextEdit->setStyleSheet("font: 13pt '宋体';");
}

void StyleMainWindow::on_btnFontSmall_clicked()
{//小字体
    ui->plainTextEdit->setStyleSheet("font: 10pt '宋体';");
}

void StyleMainWindow::on_btnStyleSheet_clicked()
{//设置样式表
    this->setStyleSheet("QPlainTextEdit{"
                        "color: blue; "
                        "font: 13pt '宋体';}"
                        "QPushButton:hover{background-color:lime;}"
                        "QLineEdit{ border: 2px groove red;"
                        "background-color: rgb(170, 255, 127); "
                        "border-radius: 6px;}"
                        "QCheckBox:checked{color: red;}"
                        "QRadioButton:checked{color:red;}"
                        );

}
