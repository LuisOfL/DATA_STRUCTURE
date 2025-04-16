#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"./Elem/ElemStr.h"
#include"./AVL/AVL.h"

int main() {
    ArBin a = vacioAB();  

    FILE *ent = fopen("dataset.txt", "r");

    if (ent == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    int i = 0;
    char arr[178][50];  


    for (i = 0; i < 176; i++) {
        if (fgets(arr[i], sizeof(arr[i]), ent) != NULL) {
            arr[i][strcspn(arr[i], "\n")] = '\0'; 
            a = InsOrd(arr[i], a); 
        }
    }

    fclose(ent);  
    a = HazAVL(a);  

    ImpNivelPorNivelAB(a);


    char temp[50];  
    Elem e;

    printf("Ingresa el pais que deseas eliminar: ");
    

    if (fgets(temp, sizeof(temp), stdin) != NULL) {
       
        temp[strcspn(temp, "\n")] = '\0';
        
       
        e = temp;

  
        if (!EstaEn(e, a)) {
            printf("Elemento no encontrado: %s\n", e);  
        } else {
            a = desconsAB(e, a);  
        }

        ImpNivelPorNivelAB(a);
    } else {
        printf("Error al leer el país.\n");
    }

    return 0;
}
