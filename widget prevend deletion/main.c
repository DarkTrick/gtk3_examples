/*
  Example program, that shows how to prevent
  that a dialog gets closed or destroyed 
  when the user tries to close it.
  
  Keywords: Dialog, Window, GtkBuilder
*/
#include <gtk/gtk.h>

static GtkBuilder * builder;

// Imagine this is actually content a resource
// file containing other dialogs well.
const char * dialog = ""
"<interface>"
"  <object class=\"GtkDialog\" id=\"dialog1\">"
"    <property name=\"modal\">True</property>"
"    <child internal-child=\"vbox\">"
"      <object class=\"GtkBox\" id=\"vbox1\">"
"        <child internal-child=\"action_area\">"
"          <object class=\"GtkBox\" id=\"hbuttonbox1\">"
"            <child>"
"              <object class=\"GtkButton\" id=\"ok_button\">"
"                <property name=\"label\">gtk-ok</property>"
"                <signal name=\"clicked\" handler=\"ok_button_clicked\"/>"
"              </object>"
"            </child>"
"          </object>"
"        </child>"
"      </object>"
"    </child>"
"  </object>"
"</interface>";


void
on_dialog_response(GtkDialog *dialog,
                   int        response_id,
                   gpointer   user_data)
{
  // Do something according to the response
  //gtk_widget_hide (GTK_WIDGET (dialog));
}



gboolean
on_dialog_delete(GtkWidget *dialog,
                 GdkEvent  *event,
                 gpointer   user_data)
{

  return TRUE;    // prevent propagation => prevent deletion
  //return FALSE; // propagate => delete
}



void
on_button_clicked(GtkButton *button,
                  gpointer   window)
{
  GtkBuilder * builder = gtk_builder_new_from_string (dialog, g_utf8_strlen (dialog, 30000));
  GtkWidget * dialog = GTK_WIDGET (gtk_builder_get_object (builder, "dialog1"));

  g_signal_connect (dialog, "response", G_CALLBACK (on_dialog_response), NULL);

  g_signal_connect (dialog, "delete-event", G_CALLBACK (on_dialog_delete), NULL);


  gtk_widget_show_all (GTK_WIDGET(dialog));
}



GtkWindow*
create_window()
{
  GtkWindow *window = GTK_WINDOW (gtk_window_new (GTK_WINDOW_TOPLEVEL));

  // initialize builder
  builder = gtk_builder_new_from_string (dialog, g_utf8_strlen (dialog, 30000));

  // create means to open the dialog
  {
    GtkWidget *layout = gtk_box_new (GTK_ORIENTATION_VERTICAL, 0);
    gtk_container_add (GTK_CONTAINER (window), layout);

    GtkWidget *button = gtk_button_new_with_label ("open dialog");
    gtk_container_add (GTK_CONTAINER (layout), button);

    g_signal_connect (button, "clicked", G_CALLBACK (on_button_clicked), window);
  }

  return window;
}



int
main(int   argc,
     char *argv[])
{
    gtk_init (&argc, &argv);

    GtkWindow *window = create_window ();

    gtk_widget_show_all (GTK_WIDGET (window));
    gtk_main();

    return 0;
}









