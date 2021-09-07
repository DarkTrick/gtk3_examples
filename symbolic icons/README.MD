== Introduction ==

You want to use custom icons in your application, but they look stupid on different / dark / bright themes. You want icons, that adapt to the current theme coloring (like native gtk icons).

Here's what you need:
 * use `svg` images.
 * make the icons part of the theme. (Keyword: `themed icons`)
 * bind the icons into resources. (Keyword: `GResource`)
 * load the icon with the right function.


== Step-by-step guide ==

=== Prepare the icon ===

Be aware of the following:

 * Only `svg` files will work.
 * Only `fill` colors can become theme-color-aware. `Stroke` colors will *not* become theme-color-aware.
 * Use color `#00000000`. For grey-scaling, use the alpha channel only (don't make the color "grey").
 * Text has to be converted to a `path`. If you use Inkscape, do: select text, Menu → `Path` → `Object to Path`.

=== Create Resources ===

Compile Resources from your `PROJECT_ROOT` (`./`) directory:

 - `glib-compile-resources --generate-header ./resources.xml`
 - `glib-compile-resources --generate-source ./resources.xml`

This will generate a `resource.h` and `resource.c` file.

**Warning**
You cannot generate the header and source file together with one command.


Details on resources here:
 - Wiki article on (themed) icons in general (read suggested) https://wiki.gnome.org/HowDoI/ThemedIcons
 - Docs about GResource (read suggested): https://developer-old.gnome.org/gio/2.68/GResource.html#GResource.description



=== Compile Application ===

You compile the files `main.c` and `resources.c`.

```gcc -g -Wall  `pkg-config --cflags gtk+-3.0` main_minimal.c resources.c `pkg-config --libs gtk+-3.0```



== References ==

 * Wiki article on (themed) icons in general (read suggested) https://wiki.gnome.org/HowDoI/ThemedIcons
 * Docs about GResource (read suggested): https://developer-old.gnome.org/gio/2.68/GResource.html#GResource.description
 * Docs about themed icons (read suggested): https://developer.gnome.org/documentation/tutorials/themed-icons.html#symbolic-icons
 * Forum question on the topic (no read necessary)  https://discourse.gnome.org/t/how-to-use-my-own-symbolic-icon/
 * Forum question on the topic (no read necessary)  https://discourse.gnome.org/t/how-to-make-gtk-icons-dark-light-theme-aware/

