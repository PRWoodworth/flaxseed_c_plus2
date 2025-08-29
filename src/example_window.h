#ifndef GTKMM_EXAMPLEWINDOW_H
#define GTKMM_EXAMPLEWINDOW_H
#include <gtkmm/button.h>
#include <gtkmm/window.h>
#include <gtkmm.h>

#define STRING std::string

class ExampleWindow : public Gtk::Window
{
public:
  ExampleWindow();
  virtual ~ExampleWindow();

protected:
  //Signal handlers:
  void on_button_close();
  void on_button_submit();
  void on_activate();

  //Child widgets:
  Gtk::Box m_HBox;
  Gtk::Box m_VBox;
  Gtk::Entry m_Entry;
  Gtk::Button m_Button_Close, m_Button_Submit;
};

#endif //GTKMM_EXAMPLEWINDOW_H
