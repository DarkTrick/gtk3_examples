/**
 * Code License: CC-0
 * Creator: DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104
**/

#include <gtk/gtk.h>


void
button_clicked (GtkButton *button,
                gpointer   revealer)
{
  GtkRevealer * rev = GTK_REVEALER (revealer);
  gboolean currentState = gtk_revealer_get_reveal_child (rev);

  gtk_revealer_set_reveal_child (rev, !currentState);
}



GtkWidget *
create_ui(GtkContainer *container)
{
  GtkWidget * box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);

  GtkWidget * revealer = gtk_revealer_new ();

  GtkWidget * button1 = gtk_button_new_with_label ("button 1");
  gtk_container_add (GTK_CONTAINER (box), button1);
  g_signal_connect (button1, "clicked", G_CALLBACK (button_clicked), revealer);


  GtkWidget * button2 = gtk_button_new_with_label ("button 2");
  gtk_container_add (GTK_CONTAINER (revealer), button2);

  gtk_container_add (GTK_CONTAINER (box), revealer);


  return box;
}




/**
 *  standard stuff. See `create_gui()`
 **/
int main(int argc, char *argv[])
{
  gtk_init (&argc, &argv);

  GtkWidget *window;
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

  GtkWidget * ui = create_ui (GTK_CONTAINER (window));
  gtk_container_add (GTK_CONTAINER (window), ui);

  g_signal_connect (G_OBJECT (window), "destroy",
                    G_CALLBACK (gtk_main_quit), G_OBJECT (window));

  gtk_widget_show_all(window);
  gtk_main();

  return 0;
}