/**
 * Code License: CC-0
 * Creator: DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104
**/

#include <gtk/gtk.h>


void
show_error(const char *title,
           const char *message)
{
  GtkWidget *dialog = gtk_message_dialog_new (
                              NULL,
                              GTK_DIALOG_MODAL,
                              GTK_MESSAGE_ERROR,
                              GTK_BUTTONS_OK,
                              "%s", message );
  gtk_window_set_title (GTK_WINDOW (dialog), title);

  g_signal_connect_swapped (G_OBJECT (dialog), "response",
                          G_CALLBACK (gtk_widget_destroy),
                          G_OBJECT (dialog));


  // This is crutial! Otherwise the message won't be shown
  gtk_window_set_application (GTK_WINDOW (dialog),
                              g_application_get_default ());

  gtk_widget_show_all (dialog);
}



static void
myapp_activate(GtkApplication *app,
               gpointer        user_data)
{
   if (/* error_occured == */  TRUE)
   {
      show_error ("MyApp","Something went wrong.");
   }
}



GtkApplication *
myapp_new()
{
  GtkApplication * app = gtk_application_new (NULL,G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (myapp_activate), NULL);

  return app;
}



int main(int argc, char *argv[])
{
   /**
    *  This is everything a main method should do.
    **/
   GtkApplication * app = myapp_new ();

   int status = g_application_run(G_APPLICATION (app), argc, argv);
   g_object_unref(app);

   return status;
}

