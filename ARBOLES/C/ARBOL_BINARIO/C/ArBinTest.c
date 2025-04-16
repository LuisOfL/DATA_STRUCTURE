#include <stdio.h>
#include <stdlib.h>
#include "./Elem/ElemInt.h"
#include "./ArBin.h"  

int main() {
    // Creamos este árbol:
    //       10
    //      /  \
    //     5    20
    //         /
    //        15

    ArBin a = consAB(10,
                 consAB(5, vacioAB(), vacioAB()),
                 consAB(20,
                        consAB(15, vacioAB(), vacioAB()),
                        vacioAB()));

    printf("Elementos del árbol (inorden):\n");
    ImpNivelPorNivelAB(a);

    int hojas = CantHojas(a);
    int tot = TotAB(a);
    printf("\nCantidad de hojas: %d\n", hojas);
    printf("El total de la suma es de: %d",tot);
    return 0;
}
