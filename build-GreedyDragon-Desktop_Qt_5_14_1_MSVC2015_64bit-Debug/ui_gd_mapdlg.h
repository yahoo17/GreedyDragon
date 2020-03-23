/********************************************************************************
** Form generated from reading UI file 'gd_mapdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GD_MAPDLG_H
#define UI_GD_MAPDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GD_MAPDLG
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *GD_MAPDLG)
    {
        if (GD_MAPDLG->objectName().isEmpty())
            GD_MAPDLG->setObjectName(QString::fromUtf8("GD_MAPDLG"));
        GD_MAPDLG->resize(843, 579);
        gridLayoutWidget = new QWidget(GD_MAPDLG);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 50, 781, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(GD_MAPDLG);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 550, 93, 28));

        retranslateUi(GD_MAPDLG);

        QMetaObject::connectSlotsByName(GD_MAPDLG);
    } // setupUi

    void retranslateUi(QWidget *GD_MAPDLG)
    {
        GD_MAPDLG->setWindowTitle(QCoreApplication::translate("GD_MAPDLG", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("GD_MAPDLG", "play", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GD_MAPDLG: public Ui_GD_MAPDLG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GD_MAPDLG_H
