**Tags**: How to use GtkApplication?

## Introduction
Applications in GTK should be realized using a `GtkApplication`. `main.c` shows you an example of how to do that.

You can realize a `GtkApplication` in two ways:
- By subclassing `GtkApplication` (difficult and tedious)
- By just providing and natural interface (used here; **my suggestion**)



## Notes
- `gtk_window_get_application ()` only hands you an application, if you explicitly created one.
- Most of the examples here don't use GtkApplication, because code looks more complex. However, in your code you should always use a `GtkApplication` to prevent bad suprises and strange bugs later on.


## Compile:
sh ./compile.sh main.c

## License
License of everything but the code:
CC-BY (DarkTrick - 69f925915ed0193a3b841aeec09451df2326f104)
