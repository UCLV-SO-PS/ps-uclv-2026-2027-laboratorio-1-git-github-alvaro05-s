#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void mostrar_info_sistema(){
    printf("=== Monitorde Procesos del Sistema ===\n");
    printf("Sistema inicializando correctamente\n");

}
int main(){
    mostrar_info_sistema();
    return 0;

}
CC = gcc
CFLAGS = -Wall -Wextra
TARGET = process_monitor
SOURCES = process_monitor.c

$(TARGET): $(SOURCES)
    $(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

clean:
    rm -f $(TARGET)

.PHONY: clean


