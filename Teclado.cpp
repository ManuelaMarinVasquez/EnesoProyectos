#include <gtk/gtk.h> //CAMBIOS
static GtkCssProvider *cssProvider;
 void activate(GtkApplication *app, gpointer user_data) {
    // Creo la ventana principal
    GtkWidget *window = gtk_application_window_new(GTK_APPLICATION(app));
    cssProvider = gtk_css_provider_new();
    GtkWidget*label;
    
    gtk_window_set_title(GTK_WINDOW(window), "Tablero Comunicacion");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300); //tamaño
    gtk_css_provider_load_from_path(cssProvider, "style.css"); // estilo 

        gtk_style_context_add_provider_for_display(
        gtk_widget_get_display(window),
        
        GTK_STYLE_PROVIDER(cssProvider),
        GTK_STYLE_PROVIDER_PRIORITY_USER);


    // Creo el contenedor principal como un GtkBox horizontal
    GtkWidget *main_box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL,5);
    gtk_box_set_homogeneous(GTK_BOX(main_box), TRUE);
    gtk_window_set_child(GTK_WINDOW(window), main_box);

    GtkWidget *box0 = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5); // label de texto
    label = gtk_label_new("Soy texto");
    gtk_box_append(GTK_BOX(box0), label);
    gtk_box_append(GTK_BOX(main_box), box0);

    gtk_window_set_child(GTK_WINDOW(window), main_box);

    // Cre0 el primer GtkBox vertical
    GtkWidget *box1 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);

    // Agrego widgets al primer GtkBox donde ira Q-A-Z
    GtkWidget *buttonq = gtk_button_new_with_label("Q");//letra q
    gtk_box_append(GTK_BOX(box1), buttonq);
    gtk_widget_set_name(box1,"cajita");
    GtkWidget *buttona = gtk_button_new_with_label("A"); //letra a
    gtk_box_append(GTK_BOX(box1), buttona); // Agrego el Botón 2 debajo de Botón 1
     GtkWidget *buttonz = gtk_button_new_with_label("Z");//letra z
    gtk_box_append(GTK_BOX(box1), buttonz); 
    // Agrego el primer GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box1);




    // Creo el segundo GtkBox vertical donde ira la W-S-X
    GtkWidget *box2 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttonw = gtk_button_new_with_label("W"); //letra w
    gtk_box_append(GTK_BOX(box2), buttonw);
    GtkWidget *buttons = gtk_button_new_with_label("S");//letra s
    gtk_box_append(GTK_BOX(box2),buttons);
    GtkWidget *buttonx = gtk_button_new_with_label("X");//letra s
    gtk_box_append(GTK_BOX(box2),buttonx);

    // Agregamos el segundo GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box2);



    // Creo tercero  GtkBox vertical donde ira la E-D-C
    GtkWidget *box3 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttone = gtk_button_new_with_label("E"); //letra w
    gtk_box_append(GTK_BOX(box3), buttone);
    GtkWidget *buttond = gtk_button_new_with_label("D");//letra s
    gtk_box_append(GTK_BOX(box3),buttond);
    GtkWidget *buttonc = gtk_button_new_with_label("C");//letra s
    gtk_box_append(GTK_BOX(box3),buttonc);

    // Agregamos el segundo GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box3);


     // Creo cuarto  GtkBox vertical donde ira la R-F-V
    GtkWidget *box4 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttonr = gtk_button_new_with_label("R"); //letra w
    gtk_box_append(GTK_BOX(box4), buttonr);
    GtkWidget *buttonf = gtk_button_new_with_label("F");//letra s
    gtk_box_append(GTK_BOX(box4),buttonf);
    GtkWidget *buttonv = gtk_button_new_with_label("V");//letra s
    gtk_box_append(GTK_BOX(box4),buttonv);

    // Agregamos el segundo GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box4);

    // Creo quinto  GtkBox vertical donde ira la R-F-V
    GtkWidget *box5 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttont = gtk_button_new_with_label("T"); //letra w
    gtk_box_append(GTK_BOX(box5), buttont);
    GtkWidget *buttong = gtk_button_new_with_label("G");//letra s
    gtk_box_append(GTK_BOX(box5),buttong);
    GtkWidget *buttonb = gtk_button_new_with_label("B");//letra s
    gtk_box_append(GTK_BOX(box5),buttonb);

    // Agregamos el  GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box5);


// Creo sexta  GtkBox vertical donde ira la Y-H-N
    GtkWidget *box6 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttony = gtk_button_new_with_label("Y"); //letra w
    gtk_box_append(GTK_BOX(box6), buttony);
    GtkWidget *buttonh = gtk_button_new_with_label("H");//letra s
    gtk_box_append(GTK_BOX(box6),buttonh);
    GtkWidget *buttonn = gtk_button_new_with_label("N");//letra s
    gtk_box_append(GTK_BOX(box6),buttonn);

    // AgregaO el  GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box6);

    // Creo septima  GtkBox vertical donde ira la U-J-M
    GtkWidget *box7 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttonu = gtk_button_new_with_label("U"); //letra w
    gtk_box_append(GTK_BOX(box7), buttonu);
    GtkWidget *buttonj = gtk_button_new_with_label("J");//letra s
    gtk_box_append(GTK_BOX(box7),buttonj);
    GtkWidget *buttonm = gtk_button_new_with_label("M");//letra s
    gtk_box_append(GTK_BOX(box7),buttonm);

    // AgregaO el  GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box7);

     // Creo octava  GtkBox vertical donde ira la U-J-M
    GtkWidget *box8 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttoni = gtk_button_new_with_label("I"); //letra w
    gtk_box_append(GTK_BOX(box8), buttoni);
    GtkWidget *buttonk = gtk_button_new_with_label("K");//letra s
    gtk_box_append(GTK_BOX(box8),buttonk);
   
    // Agrego el  GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box8);
    

     // Creo novena  GtkBox vertical donde ira la U-J-M
    GtkWidget *box9 = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    // Agrego widgets al segundo GtkBox
    GtkWidget *buttono = gtk_button_new_with_label("O"); //letra w
    gtk_box_append(GTK_BOX(box9), buttono);
    GtkWidget *buttonl = gtk_button_new_with_label("L");//letra s
    gtk_box_append(GTK_BOX(box9),buttonl);

    // Agrego el  GtkBox al contenedor principal
    gtk_box_append(GTK_BOX(main_box), box9);

  


    // Mostramos la ventana principal
    gtk_window_present (GTK_WINDOW(window));
    gtk_box_set_homogeneous(GTK_BOX(main_box),TRUE);//con esto hago homogeneo los botones
}

int main(int argc, char **argv) {

    GtkApplication *app;
    int status;
    app = gtk_application_new("org.gtk.example", G_APPLICATION_DEFAULT_FLAGS);
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);
    status = g_application_run(G_APPLICATION(app), argc, argv);
    g_object_unref(app);

    return status;
}