#ifndef DEF_MAINWINDOW
#define DEF_MAINWINDOW

#include <gtkmm/window.h>
#include <gtkmm/button.h>

class MainWindow : public Gtk::Window {
    public :
        MainWindow();
        ~MainWindow();

    private :
      Gtk::Button *button;
};

#endif
