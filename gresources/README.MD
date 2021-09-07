== Introduction  ==

This project shows an example of how to use `Resources` (`GResource`). Specifically it will store an image inside resources and load it from there during runtime.


=== Why would you use GResource? ===

- `Applications and libraries often contain binary or textual data that is really part of the application, rather than user data. For instance GtkBuilder .ui files, splashscreen images, GMenu markup XML, CSS files, icons, etc. These are often shipped as files in $datadir/appname, or manually included as literal strings in the code.`

- You want to use custom icons in your application, but they look stupid on different / dark / bright themes. You want icons, that adapt to the current theme coloring (like native gtk icons).



== Step-by-step guide ==


=== Method 1: Static Linking: store all your resources inside the binary ===

I think this is the easiest option: You don't have to worry about where to put your files inside the filesystem anymore.


Compile Resources from your `PROJECT_ROOT` (`./`) directory:

 - `glib-compile-resources --generate-header ./resources.xml`
 - `glib-compile-resources --generate-source ./resources.xml`

This will generate a `resource.h` and `resource.c` file.

**Warning**
You cannot generate the header and source file together with one command.


=== Method 2: Dynamic Loading: store your resources inside a dedicated file ===

Compile Resources from your `PROJECT_ROOT` (`./`) directory:<br>
`glib-compile-resources ./resources.xml`

This will generate a `resources.gresource` file


=== Compile Application ===

- Method 1:
  - You need to list the generated `resources.c` in your *files to compile*.<br>
  ```gcc -g -Wall  `pkg-config --cflags gtk+-3.0` main.c resources.c `pkg-config --libs gtk+-3.0```

- Method 2:
  - Nothing special to worry about



== References ==

  * Docs about GResource (read suggested): https://developer-old.gnome.org/gio/2.68/GResource.html#GResource.description


