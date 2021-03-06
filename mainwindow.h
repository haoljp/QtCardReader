#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "reader.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    Reader *mainReader;

public slots:
    void recieveMessage(QString mess);
    
private slots:
    void on_readyButton_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
