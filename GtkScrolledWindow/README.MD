## Introduction

*Goal*:<br>
Create a window, that would automatically show a vertical scrollbar (up/down),
if its content is vertically too long.

*Pitfalls:*<br>
The default behavior for a GtkScrolledWindow is, scrollbars don't not reserve
space for themselves. They *overlay* - and possibly hide - the content (see image below).

![Scrollbar overlays content](doc_data/overlay_scrollbar.svg)

## Code

### Solution 1 (native, overlay)
[`main_1_default.c`](./main_1_default.c) shows the default approach of using a
  `GtkScrolledWindow`.

### Solution 2 (non-native, no overlay)
[`main_2_nonOverlaying_scrollbar.c`](./main_2_nonOverlaying_scrollbar.c)
implements a function, that will create a scrollable widget with a
scrollbar, that would never overlay it's content.

![Video: Non overlaying scrollbar](main_2_nonOverlaying_scrollbar.gif)

Note, that there's still a problem with this solution, that looks like
a GTK bug. I'm trying to solve it with the help of ...
- (This question on StackOverflow)[https://stackoverflow.com/questions/69147830/gtk-hide-and-show-a-widget-in-a-gtkbox-shows-the-widget-underneath-the-gtkbox]
- (`bug_test.c` in this project)[./bug_test.c]