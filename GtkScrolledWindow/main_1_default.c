/**
 * Code License: CC-0
 * Creator: DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104
 *
 * This code shows how to use a vertically scrollable
 * `GtkScrolledWindow`, that only shows a scrollbar if
 *  necessary.
 *
 * Pitfalls:
 * With this implementation the content of your scrollable
 * window might be hidden by the scrollbar - depending
 * on the theme's layout.
 *
**/

#include <gtk/gtk.h>



GtkWidget *
create_ui()
{
  GtkWidget * scrolled_window = gtk_scrolled_window_new (NULL, NULL);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolled_window),
                                  GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);

  GtkWidget * box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);
  gtk_container_add (GTK_CONTAINER (scrolled_window),box);

  {
    GtkWidget * button = NULL;
    button = gtk_button_new_with_label ("button 1");
    gtk_container_add (GTK_CONTAINER (box), button);

    button = gtk_button_new_with_label ("button 2");
    gtk_container_add (GTK_CONTAINER (box), button);

    button = gtk_button_new_with_label ("button 3");
    gtk_container_add (GTK_CONTAINER (box), button);
  }


  return scrolled_window;
}




/**
 *  standard stuff. See `create_gui()`
 **/
int main(int argc, char *argv[])
{
  gtk_init (&argc, &argv);

  GtkWidget *window;
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

  GtkWidget * ui = create_ui ();
  gtk_container_add (GTK_CONTAINER (window), ui);

  g_signal_connect (G_OBJECT (window), "destroy",
                    G_CALLBACK (gtk_main_quit), G_OBJECT (window));

  gtk_widget_show_all(window);
  gtk_main();

  return 0;
}