gcc $( pkg-config --cflags gtk4 ) -o calculator src/main.c $( pkg-config --libs gtk4 )

