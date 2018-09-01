#ifndef EXT_H_INCLUDED
#define EXT_H_INCLUDED
#define tam 100

void iniciar(char palv[tam], int j);
void q0(int i,char palv[tam], int j, int contador);
void q1(int i,char palv[tam], int j, int contador);
void q2(int i,char palv[tam], int j, int contador);
void q3(int i,char palv[tam], int j, int contador);
void q4(int i,char palv[tam], int j, int contador);
void q5(int i,char palv[tam], int j, int contador);
void q6(int i,char palv[tam], int j, int contador);
void q7(int i,char palv[tam], int j, int contador);


void iniciar(char palv[tam], int j) {
    int i=0;
    int contador=0;
    q0(i, palv, j, contador);
}

void q0(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'p' ) {
        q1(++i, palv, j, contador);
    }else {
        if (palv[i]=='a') {
            q1(i, palv, j, contador);
        } else{
            if (palv[i]!='\0') {
                q0(++i, palv, j, contador);
            } else {
                printf("O arquivo terminou....\n");
                printf("A palavra (papagaio) foi encontrada %d vez(es).\n", contador);
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
    if (palv[i] == 'p') {
        q3 (++i, palv,j, contador);
    } else {
        q0(i, palv, j, contador);
    }
}

void q3(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'a') {
        q4 (++i, palv,j, contador);
    } else {
        q0(i, palv, j, contador);
    }
}

void q4(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'g') {
        q5 (++i, palv,j, contador);
    } else {
        if (palv[i] == 'p') {
            q0(i-2, palv, j, contador);
        } else {
            q0(i, palv, j, contador);
        }

    }
}

void q5(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'a') {
        q6 (++i, palv,j, contador);
    } else {
        q0(i, palv, j, contador);
    }
}

void q6(int i, char palv[tam], int j, int contador) {
    if (palv[i] == 'i') {
        q7 (++i, palv,j, contador);
    } else {
        q0(i, palv, j, contador);
    }
}

void q7(int i, char palv[tam], int j, int contador) {
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
