/**
 *  Example program, that shows how to use gressource
 *
 **/

#include <gtk/gtk.h>
#include "resources.h"

GtkWidget *
create_gui()
{
  GResource * ress = NULL;

  // use statically linked resources  (preferred, no I/O error possible)
  ress = resources_get_resource ();

  // OR:
  // use dynamically loaded resources:
  // ress = g_resource_load ("resources.gresource");

  // without this nothing works:
  g_resources_register (ress);

  // load resource: notice, that `data` is part of this path!
  GtkWidget * icon = gtk_image_new_from_resource ("/org/myapp/data/my-image.svg");

  GtkToolButton *button;
  button = GTK_TOOL_BUTTON (gtk_tool_button_new (icon, "tooltext"));

  return GTK_WIDGET (button);
}



/**
 *  standard stuff. See `create_gui()`
 **/
int main(int argc, char *argv[])
{
  gtk_init (&argc, &argv);

  GtkWidget *window;
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

  GtkWidget * box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);
  gtk_container_add (GTK_CONTAINER (window), box);

  GtkWidget * gui = create_gui ();
  gtk_container_add (GTK_CONTAINER (box), gui);

  g_signal_connect (G_OBJECT (window), "destroy",
                    G_CALLBACK (gtk_main_quit), G_OBJECT (window));

  gtk_widget_show_all(window);
  gtk_main();

  return 0;
}
