/*
    License: CC-0
    Creator: (DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104)

    How to Create a Menu with Separators
    =====================================
                                          Keywords: #GMenu
                                                    #Action
                                                    #GSimpleAction
                                                    #GActionGroup

    Resulting menu looks like this:
     ______
    | App  |
    |______|________
    | Action1       |
    |_______________|
    | Action2       |
    |---------------|  <--- separator
    | Action3       |
    |_______________|
    | More actions: |  <---- named separator
    |---------------|
    | Action2       |
    |_______________|
    | Action3       |
    |_______________|


  It's crutial to understand that in GTK, there is a strict
  separation between:
    - Menu as GUI element              (GMenu)
    - Action, that happen on click     (GAction)

  That means you set both up separately

*/
#include <gtk/gtk.h>
#include <stdio.h>

static void
menu_item_clicked (GSimpleAction *action,
                   GVariant      *parameter,
                   gpointer       gtk_application)
{
  g_print ("Menu item clicked\n");
}



static void
create_menu (GtkWindow      * window,
             GtkApplication * app)
{
  // Object Structure we're building:
  // =================================
  //
  // menubar                            // create 3rd
  //    └ menu_button ("App")           // create 2nd
  //          └ menu_content            // create 1nd
  //              └ menu_section_1
  //                      └ "Action1"
  //                      └ "Action2"
  //              └ menu_section_2
  //                      └ "Action3"
  //              └ menu_section_3
  //                      └ "Action4"
  //                      └ "Action5"
  //
  // Note that the building order is bottom-to-top.
  //

  // 1) create menu content
  GMenu * menu_content = g_menu_new();
  {
    GMenu * menu_section_1 = g_menu_new();
    g_menu_append (menu_section_1, "Action_1", "app.action1"  );
    g_menu_append (menu_section_1, "Action_2", "app.action2"  );
    g_menu_append_section (menu_content, NULL,
                           G_MENU_MODEL (menu_section_1));

    GMenu * menu_section_2 = g_menu_new();
    g_menu_append (menu_section_2, "Action_3", "app.action2"  );
    g_menu_append_section (menu_content, NULL,
                           G_MENU_MODEL (menu_section_2));

    GMenu * menu_section_3 = g_menu_new();
    g_menu_append (menu_section_3, "Action_4", "app.action2"  );
    g_menu_append (menu_section_3, "Action_5", "app.action2"  );
    g_menu_append_section (menu_content, "More actions",
                           G_MENU_MODEL (menu_section_3));
  }

  // 2) create button, that's going to be inside the menu bar
  GMenuItem * menu_button = g_menu_item_new ("_App", "unused");
  g_menu_item_set_submenu (menu_button, G_MENU_MODEL (menu_content));

  // 3) create the menu bar
  GMenu * menubar = g_menu_new();
  g_menu_append_item (menubar, menu_button);
  g_object_unref (menu_button);

  // 4) add menu bar to GtkApplication
  gtk_application_set_menubar (app, G_MENU_MODEL (menubar));


  // Note: On this point, the menu shows,
  //       but all items are disabled

  // 5) "connect" callback functions with action names
  {
    GActionEntry actions[] = {
      {.name="action1",  .activate=menu_item_clicked, NULL, NULL, NULL },
      {.name="action2",  .activate=menu_item_clicked, NULL, NULL, NULL },
    };

    GSimpleActionGroup *action_group = g_simple_action_group_new ();
    g_action_map_add_action_entries (G_ACTION_MAP (action_group), actions, G_N_ELEMENTS (actions), NULL);
    gtk_widget_insert_action_group (GTK_WIDGET (window), "app", G_ACTION_GROUP (action_group));
    // Extra information:
    // You could insert the action group into an arbitrary widget.
    // Which actions are `enabled` inside the menu depends on which widget is focussed
  }

}


/**
 *  Nice to know:
 *  =============
 *    - Make sure you're explicitly using a GtkApplication
 *    - Make sure you're using a `GtkApplicationWindow`.
 *      `GtkWindow`s work, too, but it's a hassle.
 *
 *  More information on GAction:
 *    https://wiki.gnome.org/HowDoI/GAction
 *
 ***/

void
application_start (GApplication *_self,
                   gpointer      user_data)
{
  GtkApplication *self =  GTK_APPLICATION (_self);

  GtkWindow *window = GTK_WINDOW (gtk_application_window_new (self));
  create_menu (window, self);

  gtk_widget_show_all (GTK_WIDGET (window));
  g_application_quit (G_APPLICATION (self));
}


/**
 *  Standard main function.
 **/
int
main(int argc, char *argv[])
{
  GtkApplication * app = gtk_application_new("My.App", G_APPLICATION_FLAGS_NONE);
  g_signal_connect (app, "activate", G_CALLBACK (application_start), NULL);

  int status = g_application_run(G_APPLICATION (app), argc, argv);
  g_object_unref(app);
  return status;
}

