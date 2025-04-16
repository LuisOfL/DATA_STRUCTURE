#include<stdio.h>
#include<stdlib.h>
#include "./Elem/ElemInt.h"
#include "AVL.h"


int main() {
    AVL a = vacioAB();
    a = consAVL(50, a);
    a = consAVL(30, a);
    a = consAVL(70, a);
    a = consAVL(60, a);
    a = consAVL(80, a);

    printf("Arbol original (nivel por nivel):\n");
    ImpNivelPorNivelAB(a);

    a = Eliminar(70, a);

    printf("\nDespués de eliminar 70:\n");
    ImpNivelPorNivelAB(a);

    return 0;
}
