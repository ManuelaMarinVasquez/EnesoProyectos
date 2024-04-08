#include <gtk/gtk.h>

GtkApplication *app;
GMainLoop *loop ;
GtkWidget *window;

void on_window_destroy(GtkWidget *widget, gpointer data) {
    // Realizar la tarea aquí, por ejemplo, imprimir un mensaje en la consola
    g_print("Tarea completada. Cerrando la ventana...\n");
    // Cerrar la ventana
    gtk_window_close(GTK_WINDOW(widget));
}

 
void activate(GtkApplication *app, gpointer user_data) {
    
    loop = g_main_loop_new(NULL, FALSE);

    //Creo un loop que sera lo que me permite  que no se cierre la ventana

    // Cargar la interfaz de usuario desde el archivo .glade
    GtkBuilder *builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "C:\\msys64\\home\\Manuelita\\EnesoProyectos\\Teclitas.glade", NULL);

    // Obtener la ventana principal desde el archivo .glade
   window = GTK_WIDGET(gtk_builder_get_object(builder, "ensayo"));

    // Mostrar la ventana
    gtk_window_present(GTK_WINDOW(window));
    gtk_application_add_window (app,GTK_WINDOW(window));
    g_signal_connect(window, "destroy", G_CALLBACK(on_window_destroy), NULL);

    // Liberar la memoria utilizada por el constructor de la interfaz de usuario
    g_object_unref(builder);

}

int main(int argc, char **argv)
{
    int status;
   // GtkSelectionModel *model = create_application_list();
    app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    gtk_window_close(window);
    app.gtk_window_close();
    return status;
}
