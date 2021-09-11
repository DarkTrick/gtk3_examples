/**
 * Code License: CC-0
 * Creator: DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104
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
 *
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



GtkWidget *
create_ui()
{
  GtkWidget * box = gtk_box_new (GTK_ORIENTATION_VERTICAL, 5);
  {
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 1"));
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 2"));
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 3"));
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 4"));
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 5"));
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 6"));
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 7"));
    gtk_container_add (GTK_CONTAINER (box), gtk_button_new_with_label ("button 8"));
  }

  GtkWidget * root = gtkx_scrollable_widget_vertical_new (box, NULL);
  return root;
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