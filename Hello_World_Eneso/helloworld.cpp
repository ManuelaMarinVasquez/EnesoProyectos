#include "helloworld.h"
#include <gtk/gtk.h>

static void on_button_clicked(GtkWidget* widget, gpointer data) {
    g_print("Hello, World!\n");
}

GtkWidget* create_window() {
    GtkWidget* window = gtk_window_new();
    gtk_window_set_title(GTK_WINDOW(window), "Hello World");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    GtkWidget* button = gtk_button_new_with_label("Click me!");
    g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);
    gtk_window_set_child(GTK_WINDOW(window), button);

    g_signal_connect(window, "destroy", G_CALLBACK(g_application_quit), NULL);

    return window;
}