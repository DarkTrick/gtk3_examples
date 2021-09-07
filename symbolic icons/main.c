#include <gtk/gtk.h>
#include "resources.h"

/*
Further references:
- https://wiki.gnome.org/HowDoI/ThemedIcons

*/

GtkWidget *
create_gui()
{
  GResource * ress = NULL;
  GtkWidget * icon = NULL;

  // utilizes "resources.h";
  // requires "resources.c" to be compiled together.
  // So: remember to `glib-compile-resources --generate-source ./resources.xml`
  //     before compiling
  ress = resources_get_resource ();

  g_resources_register (ress);

  // WRONG: Your icon wouldn't be shown
  // GtkIconTheme * theme = gtk_icon_theme_new ();

  GtkIconTheme * theme = gtk_icon_theme_get_default ();
  gtk_icon_theme_add_resource_path (theme, "/org/myapp/data/icons/scalable/actions");


  icon = gtk_image_new_from_icon_name ("aaaa-symbolic", GTK_ICON_SIZE_INVALID /*ignored*/);
  gtk_image_set_pixel_size (GTK_IMAGE (icon),256);

  // Or:
  //icon = gtk_image_new_from_gicon (g_themed_icon_new_with_default_fallbacks ("aaaa"), GTK_ICON_SIZE_LARGE_TOOLBAR);

  /*/ WRONG: This will load the icon, but it won't be color-aware
  // icon = gtk_image_new_from_resource ("/org/gjiten/data/aaaa-symbolic.svg");
  //                                                   ↑
  //                               make sure to include `data` inside the
  //                               path; I.e. include the full name stated
  //                               inside <file> tags.
  //*/

  /* WRONG: loads the icon, but it won't be color-aware
  {
    GdkPixbuf * pixbuf = gtk_icon_info_load_icon (icon_info, NULL);
    icon = gtk_image_new_from_pixbuf (pixbuf);
  }
  //*/


  /* PROBLEMATIC: The icon will be color-aware, but only
  //              at initializing time. I.e. if the theme
  //              changes later, the icon won't be updated
  {
    GtkIconInfo * icon_info = gtk_icon_theme_lookup_icon (theme,"aaaa-symbolic", 64 ,GTK_ICON_LOOKUP_FORCE_SYMBOLIC);
    GdkRGBA fg = {0.0,0.0,0.0,1.0};
    GtkWidget * tmp = gtk_button_new ();
    GtkStyleContext * context = gtk_widget_get_style_context (tmp);
    gtk_style_context_get_color (context,GTK_STATE_FLAG_NORMAL,&fg);
    gtk_widget_destroy (tmp);
    GdkPixbuf * pixbuf = gtk_icon_info_load_symbolic (icon_info, &fg, NULL, NULL, NULL, NULL, NULL);
    icon = gtk_image_new_from_pixbuf (pixbuf);
  }
  //*/


  /* WRONG, but nice to know:
  //        This way you can freely colorize
  //        your foreground color.
  {
    GtkIconInfo * icon_info = gtk_icon_theme_lookup_icon (theme,"aaaa-symbolic", 64 ,GTK_ICON_LOOKUP_FORCE_SYMBOLIC);
    GdkRGBA fg = {1.0,0.0,0.0,1.0};
    GdkPixbuf * pixbuf = gtk_icon_info_load_symbolic (icon_info, &fg, NULL, NULL, NULL, NULL, NULL);
    icon = gtk_image_new_from_pixbuf (pixbuf);
  }
  //*/


  // Nice to know:
  // `gtk_icon_theme_has_icon` doesn't work as expected:
  //
  // gtk_icon_theme_has_icon (theme, "aaaa"             ); => FALSE
  // gtk_icon_theme_has_icon (theme, "aaaa-symbolic.svg"); => FALSE
  // gtk_icon_theme_has_icon (theme, "aaaa-symbolic"    ); => FALSE
  // gtk_icon_theme_has_icon (theme, "/org/gjiten/data/aaaa-symbolic.svg"); => FALSE
  // gtk_icon_theme_has_icon (theme, "data/aaaa-symbolic.svg"); => FALSE
  // gtk_icon_theme_has_icon (theme, "data/aaaa"        ); => FALSE



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
