#include "gd_mapdlg.h"
#include "ui_gd_mapdlg.h"

GD_MAPDLG::GD_MAPDLG(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GD_MAPDLG)
{
    ui->setupUi(this);
    m_map=new GD_MAP(this);
    ui->gridLayout->addWidget(m_map);
    m_map->paintEvent();
}

GD_MAPDLG::~GD_MAPDLG()
{
    delete ui;
}

void GD_MAPDLG::on_pushButton_clicked()
{


}
