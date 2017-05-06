#include "../include/mainwindow.h"

MainWindow::MainWindow()
{
    set_border_width(10);
    set_title("LCleaner");
    resize(800,600);
    set_position(Gtk::WIN_POS_CENTER);

    button = new Gtk::Button("Launch analysis");
    add(*button);
    button->show();
}

MainWindow::~MainWindow()
{
    delete this;
}
