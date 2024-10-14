#include "pointcloud_gui.h"
#include "./ui_pointcloud_gui.h"

PointCloud_GUI::PointCloud_GUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PointCloud_GUI)
{
    ui->setupUi(this);
}

PointCloud_GUI::~PointCloud_GUI()
{
    delete ui;
}
