#ifndef GRAPHICSCOORDINATEMAINWINDOW_H
#define GRAPHICSCOORDINATEMAINWINDOW_H

#include <QMainWindow>
#include    <QGraphicsScene>
#include    <QLabel>

namespace Ui {
class GraphicsCoordinateMainWindow;
}

class GraphicsCoordinateMainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QGraphicsScene  *scene;

    QLabel  *labViewCord;
    QLabel  *labSceneCord;
    QLabel  *labItemCord;


    void iniGraphicsSystem(); //创建Graphics View的各项

protected:
    void resizeEvent(QResizeEvent *event);

public:
    explicit GraphicsCoordinateMainWindow(QWidget *parent = nullptr);
    ~GraphicsCoordinateMainWindow();

private slots:
    void    on_mouseMovePoint(QPoint point);

    void    on_mouseClicked(QPoint point);

private:
    Ui::GraphicsCoordinateMainWindow *ui;
};

#endif // GRAPHICSCOORDINATEMAINWINDOW_H
