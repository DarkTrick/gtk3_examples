/**
 * Code License: CC-0
 * Creator: DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104
 *
 *
 * This source file triggers a bug, where the scrollbar is
 * place in the wrong position (below the buttons!).
 * To find solutions I created:
 *
 * https://stackoverflow.com/questions/69147830/gtk-hide-and-show-a-widget-in-a-gtkbox-shows-the-widget-underneath-the-gtkbox
 *
**/

#include <gtk/gtk.h>

gboolean
adj_page_sizechanged (GtkAdjustment *adjustment,
                      GdkEvent      *unused,
                      GtkScrollbar  *scrollbar)
{
  gdouble maxValue = gtk_adjustment_get_upper (adjustment);
  gdouble maxSize = gtk_adjustment_get_page_size  (adjustment);

  gboolean show = (maxValue - maxSize >= 0.000001);
  g_object_set (scrollbar, "visible", show, NULL);
  return FALSE;
}



/**
 *  Creates a `automatic` scollbar for `widget`, that will never
 *  overlay (hide) the content of `widget`.
 *  The default behaviour in GTK is overlaying (and possibly hiding)
 *  the content.
 **/
GtkWidget *
gtkx_scrollable_widget_vertical_new (GtkWidget     *widget,
                                     GtkAdjustment *adjustment_nullable)
{
  GtkWidget *root = gtk_box_new (GTK_ORIENTATION_HORIZONTAL, 0);

  // setup adjustment
  GtkAdjustment * adj_v = adjustment_nullable;
  if (NULL == adj_v)
    adj_v = gtk_adjustment_new (0,0,100,1,10,10);

  // setup scrollbar
  {
    GtkWidget * scrollbar = gtk_scrollbar_new (GTK_ORIENTATION_VERTICAL, adj_v);
    g_signal_connect(adj_v, "notify::page-size", G_CALLBACK (adj_page_sizechanged), scrollbar);
    gtk_box_pack_end (GTK_BOX (root), scrollbar, FALSE, FALSE, 0);
  }


  // setup scrollable area
  {
    GtkWidget * scrolled_window = gtk_scrolled_window_new (NULL, adj_v);
    gtk_container_add (GTK_CONTAINER (scrolled_window), widget);
    gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolled_window),
                                  GTK_POLICY_NEVER, GTK_POLICY_EXTERNAL);
    gtk_box_pack_start (GTK_BOX (root), scrolled_window, TRUE, TRUE, 0);
  }

  return root;
}



void
add_button (GtkButton *button,
            GtkBox    *box)
{
  g_print("add button\n");
  gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("b 2"));
  gtk_widget_show_all (GTK_WIDGET (box));
}



GtkWidget *
create_ui()
{
  GtkWidget * action_button = NULL;
  GtkWidget * box_outer     = NULL;
  GtkWidget * box_inner     = NULL;

  box_inner = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);

  action_button = gtk_button_new_with_label ("click me");
  gtk_container_add (GTK_CONTAINER (box_inner), action_button);
  g_signal_connect (action_button, "clicked", G_CALLBACK (add_button), box_inner);

  box_outer = gtkx_scrollable_widget_vertical_new (box_inner, NULL);
  return box_outer;
}




/**
 *  standard stuff. See `create_gui()`
 **/
int main(int argc, char *argv[])
{
  gtk_init (&argc, &argv);

  GtkWidget *window;
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_default_size (GTK_WINDOW (window), -1, 60);

  GtkWidget * ui = create_ui ();
  gtk_container_add (GTK_CONTAINER (window), ui);


  g_signal_connect (G_OBJECT (window), "destroy",
                    G_CALLBACK (gtk_main_quit), G_OBJECT (window));

  gtk_widget_show_all(window);


  gtk_main();

  return 0;
}