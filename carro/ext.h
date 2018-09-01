#ifndef EXT_H_INCLUDED
#define EXT_H_INCLUDED
#define tam 100

void iniciar(char palv[tam], int j);
void q0(int i,char palv[tam], int j, int contador);
void q1(int i,char palv[tam], int j, int contador);
void q2(int i,char palv[tam], int j, int contador);
void q3(int i,char palv[tam], int j, int contador);
void q4(int i,char palv[tam], int j, int contador);


void iniciar(char palv[tam], int j) {
    int i=0;
    int contador=0;
    q0(i, palv, j, contador);
}

void q0(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'c' ) {
        q1(++i, palv, j, contador);
    }else {
        if (palv[i]=='a') {
            q1(i, palv, j, contador);
        } else{
            if (palv[i]!='\0') {
                q0(++i, palv, j, contador);
            } else {
                printf("O arquivo terminou....\n");
                printf("A palavra (carro) foi encontrada %d vez(es).\n", contador);
            }
        }

    }
}

void q1(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'a') {
        q2(++i, palv ,j, contador);
    }
    else {
        q0(i, palv, j, contador);
    }
}

void q2(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'r') {
        q3 (++i, palv,j, contador);
    } else {
        q0(i, palv, j, contador);
    }
}

void q3(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'r') {
        q4 (++i, palv,j, contador);
    } else {
        q0(i, palv, j, contador);
    }
}

void q4(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'o') {
        contador ++;
        if (palv[i]!='\0') {
            q0(++i, palv,j, contador);
        }
    } else {
        q0(i, palv, j, contador);
    }
}

#endif // EXT_H_INCLUDED
