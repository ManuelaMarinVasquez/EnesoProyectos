#include <gtk/gtk.h>
#include <cairo.h>

GtkApplication *app;
  
void activate(GtkApplication *app, gpointer user_data) {

    //Creo un loop que sera lo que me permite  que no se cierre la ventana
    GMainLoop *loop = g_main_loop_new(NULL, FALSE);

    // Cargar la interfaz de usuario desde el archivo .glade
    GtkBuilder *builder = gtk_builder_new();
    gtk_builder_add_from_file(builder, "C:\\msys64\\home\\Manuelita\\EnesoProyectos\\Teclitas.glade", NULL);

    // Obtener la ventana principal desde el archivo .glade
    GtkWidget *window = GTK_WIDGET(gtk_builder_get_object(builder, "ensayo"));


    // Mostrar la ventana
    gtk_window_present(GTK_WINDOW(window));
    gtk_application_add_window (app,GTK_WINDOW(window));

    // Entrar en el bucle principal de eventos de GTK
    g_main_loop_run(loop);

    // Liberar la memoria utilizada por el bucle principal de eventos
    g_main_loop_unref(loop);

    
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
    g_object_unref(app);
    return status;
}