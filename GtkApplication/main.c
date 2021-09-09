/**
 * Code License: CC-0
 * Creator: DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104
**/

#include <gtk/gtk.h>


static void
myapp_activate(GtkApplication *app,
               gpointer        user_data)
{
   GtkWidget *widget;
   widget = gtk_application_window_new (GTK_APPLICATION (app));

   // populate your window here.

   gtk_widget_show_all (widget);
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

