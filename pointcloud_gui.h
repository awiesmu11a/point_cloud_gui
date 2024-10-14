#ifndef POINTCLOUD_GUI_H
#define POINTCLOUD_GUI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class PointCloud_GUI;
}
QT_END_NAMESPACE

class PointCloud_GUI : public QMainWindow
{
    Q_OBJECT

public:
    PointCloud_GUI(QWidget *parent = nullptr);
    ~PointCloud_GUI();

private:
    Ui::PointCloud_GUI *ui;
};
#endif // POINTCLOUD_GUI_H
