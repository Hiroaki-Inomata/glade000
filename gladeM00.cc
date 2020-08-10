#include <gtk/gtk.h>
 
int main(int argc, char*argv[]){
  GtkBuilder *builder;
  GObject *GTKWindow;
 
  gtk_init(&argc,&argv);
 
  builder = gtk_builder_new();
  gtk_builder_add_from_file(builder, "M00.glade", NULL);
  gtk_builder_connect_signals(builder, NULL);
  GTKWindow = gtk_builder_get_object(builder, "GTKWindow");
  gtk_widget_show_all(GTK_WIDGET(GTKWindow));
  g_signal_connect(GTKWindow, "destroy", G_CALLBACK(gtk_main_quit), NULL);
  gtk_main();
 
  return 0;
}