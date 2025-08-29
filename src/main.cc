#include "example_window.h"
#include <gtkmm/application.h>

// https://gnome.pages.gitlab.gnome.org/gtkmm-documentation/sec-helloworld.html
// https://gnome.pages.gitlab.gnome.org/gtkmm-documentation/index.html
// https://gtkmm.gnome.org/en/documentation.html
// https://gnome.pages.gitlab.gnome.org/gtkmm-documentation/sec-text-entry.html

int main(int argc, char* argv[])
{
  auto app = Gtk::Application::create("org.gtkmm.example");

  //Shows the window and returns when it is closed.
  return app->make_window_and_run<ExampleWindow>(argc, argv);
}
