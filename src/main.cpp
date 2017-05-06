/////////////////////////////////////////////////////////
//                                                     //
//  LCleaner for Linux v1.0.0.0 - 06/05/2017 21:36     //
//                                                     //
/////////////////////////////////////////////////////////

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/stock.h>

#include "../include/mainwindow.h"

int main(int argc, char* argv[]) {

    Gtk::Main app(argc, argv);

    MainWindow mainwin;

    Gtk::Main::run(mainwin);

    return 0;
}
