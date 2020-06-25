#ifndef LASTWINDOW_H
#define LASTWINDOW_H

#include <QDialog>


namespace Ui {
class LastWindow;
}

class LastWindow : public QDialog
{
    Q_OBJECT

public:
    explicit LastWindow(QWidget *parent = nullptr);
    ~LastWindow();

private slots:



private:

    Ui::LastWindow *ui;
};

#endif // LASTWINDOW_H
