#include <gtk/gtk.h>
#include "helloworld.h"
void activate(GtkApplication *app, gpointer user_data) {

GtkWidget* window= create_window();
gtk_application_add_window(app,GTK_WINDOW(window));
gtk_window_present(GTK_WINDOW(window));
}


int main(int argc, char *argv[]) {
    GtkApplication *app;
    int status;
    app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    gtk_init();
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);
    return status;
}