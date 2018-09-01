#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ext.h"

int main() {
    int i=0;
    char palv[tam];

    FILE *arquivo;
    arquivo = fopen("palavra.txt", "r");

    while(!feof(arquivo) && !ferror(arquivo)) {
        for (i = 0; i < tam; i++) {
            palv[i] = fgetc(arquivo);
        }
    }

    fclose(arquivo);

    iniciar(palv,i);

    return 0;
}
