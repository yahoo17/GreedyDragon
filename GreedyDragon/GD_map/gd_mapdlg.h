#ifndef GD_MAPDLG_H
#define GD_MAPDLG_H

#include <QWidget>
#include "GD_map/gd_map.h"
namespace Ui {
class GD_MAPDLG;
}

class GD_MAPDLG : public QWidget
{
    Q_OBJECT

public:
    explicit GD_MAPDLG(QWidget *parent = nullptr);
    ~GD_MAPDLG();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GD_MAPDLG *ui;
    GD_MAP *m_map;
};

#endif // GD_MAPDLG_H
