#include <QApplication>
#include "Firstwindow.h"




int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    FirstWindow first_window;
    first_window.show();
    return a.exec();
}
