#include <gtk/gtk.h>

#define WINDOWHEIGHT  400
#define WINDOWWIDTH   300

static void activate (GtkApplication* app, gpointer user_data)
{
  GtkWidget *window;

  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Crazy Calculator");
  gtk_window_set_default_size (GTK_WINDOW (window), WINDOWWIDTH, WINDOWHEIGHT);
  gtk_window_present (GTK_WINDOW (window));
}

int main (int argc, char **argv)
{
  GtkApplication *app;
  int status;

  app = gtk_application_new ("org.gtk.crazycalculator", G_APPLICATION_DEFAULT_FLAGS);
  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  status = g_application_run (G_APPLICATION (app), argc, argv);
  g_object_unref (app);

  return status;
}
