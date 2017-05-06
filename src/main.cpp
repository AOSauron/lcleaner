/////////////////////////////////////////////////////////
//                                                     //
//  LCleaner for Linux v1.0.0.0 - 06/05/2017 21:36     //
//                                                     //
/////////////////////////////////////////////////////////

#include <gtkmm/main.h>
#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/stock.h>

int main(int argc, char* argv[]) {

    Gtk::Main app(argc, argv);
    Gtk::Window mainwin;
    Gtk::Button button("Launch clean");
    Gtk::Button cancelButton(Gtk::Stock::CANCEL);

    mainwin.set_border_width(10);
    mainwin.set_title("LCleaner");
    mainwin.resize(800,600);
    mainwin.set_position(Gtk::WIN_POS_CENTER);

    mainwin.add(button);
    button.show();

    Gtk::Main::run(mainwin);

    return 0;
}
