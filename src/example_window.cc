#include "example_window.h"
#include <iostream>

#define STRING std::string

ExampleWindow::ExampleWindow()
: m_VBox(Gtk::Orientation::VERTICAL),
  m_Button_Close("Close"),
  m_Button_Submit("Submit")
{
  set_size_request(200, 100);
  set_title("Gtk::Entry");

  set_child(m_VBox);

  m_Entry.set_max_length(50);
  m_Entry.set_text("hello");
  m_Entry.set_text(m_Entry.get_text() + " world");
  m_Entry.select_region(0, m_Entry.get_text_length());
  m_Entry.set_expand(true);
  m_VBox.append(m_Entry);

  m_VBox.append(m_HBox);

  m_Button_Submit.signal_clicked().connect( sigc::mem_fun(*this,
              &ExampleWindow::on_button_submit) );
  m_VBox.append(m_Button_Submit);

  m_Button_Close.signal_clicked().connect( sigc::mem_fun(*this,
              &ExampleWindow::on_button_close) );
  m_VBox.append(m_Button_Close);
  m_Button_Close.set_expand();
  set_default_widget(m_Button_Close);
}

ExampleWindow::~ExampleWindow()
{
}

void ExampleWindow::on_button_close()
{
  set_visible(false);
}

void ExampleWindow::on_button_submit()
{
  std::cout << m_Entry.get_text() << std::endl;
  // TODO: use existing Flaxseed logic to generate image.
}

void ExampleWindow::on_activate(){

}