#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t tempo;
    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);
    strftime(texto, 80, "Hora atual %I:%M%p %Ssec.", infotempo);
    puts(texto);
    strftime(texto, 80, "Data: %A, %d/%b/%Y", infotempo);
    puts(texto);
    system("pause");
    return 0;
}