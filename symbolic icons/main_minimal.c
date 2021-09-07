#include <gtk/gtk.h>
#include "resources.h"


GtkWidget *
create_gui()
{
  GtkWidget * icon = NULL;

  // utilizes "resources.h";
  // requires "resources.c" to be compiled together.
  g_resources_register (resources_get_resource ());

  gtk_icon_theme_add_resource_path (gtk_icon_theme_get_default (),
                                    "/org/myapp/data/icons/scalable/actions");

  icon = gtk_image_new_from_icon_name ("aaaa-symbolic", GTK_ICON_SIZE_INVALID /*ignored*/);

  // set the size you like
  gtk_image_set_pixel_size (GTK_IMAGE (icon),256);

  // add icon to a button
  GtkToolButton *button;
  button = GTK_TOOL_BUTTON (gtk_tool_button_new (icon, "my tooltext"));

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
