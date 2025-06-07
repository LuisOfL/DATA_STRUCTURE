#include<stdio.h>
#include<stdlib.h>
#include"UsaLista.h"
Elem Unico(Lista l){
    Lista temp = vacia();
    int i = 0;
    while(!esvacia(l)){
        Elem e = cabeza(l);
        if(EstaEn(e,temp))
            temp = Eliminar(e,temp);
        else
            temp = cons(e,temp);
        l = resto(l);
    }
    return cabeza(temp);
}
int MaximosConsecutivos(Lista l){
    int max = 0;
    int temp = 0;
    while(!esvacia(l)){
        Elem e = cabeza(l);
        if(e == 1){temp++;}
        else if(e != 1){
            if(temp > max)
                max = temp;
            temp = 0;
        }
        l = resto(l);
    }
    if(temp > max)
        max = temp;
    return max;
}

int main(){
    Lista l = vacia();
    l = cons(1,cons(1,cons(1,cons(0,cons(1,l)))));
    int con = MaximosConsecutivos(l);
    printf("%d",con);

    return 0;
}
