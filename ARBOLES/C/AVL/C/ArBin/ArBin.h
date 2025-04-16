typedef struct Nodo{
      struct Nodo *i;
      Elem r;
      struct Nodo *d;
}*ArBin;

ArBin vacioAB(){return NULL;}
ArBin consAB(Elem r, ArBin i, ArBin d){
     ArBin t=(ArBin)malloc(sizeof(struct Nodo));
     t->r=r;
     t->i=i;
     t->d=d;
     return t;
}
int esvacioAB(ArBin a){return a==vacioAB();}
Elem raiz(ArBin a){return a->r;}
ArBin izqAB(ArBin a){return a->i;}
ArBin derAB(ArBin a){return a->d;}

int EsHoja(ArBin a){return esvacioAB(izqAB(a))&&esvacioAB(derAB(a));}

void ImpInOrder(ArBin a){
    if(!esvacioAB(a)){
        ImpInOrder(izqAB(a));
        ImpElem(raiz(a));
        ImpInOrder(derAB(a));
    }
};

int MayorElem(int a, int b){
    if(a>b)
        return a;
    else
        return b;
}

int Altura(ArBin a){
    if(esvacioAB(a))
        return 0;
    else
        return 1+MayorElem(Altura(izqAB(a)),Altura(derAB(a)));
}


void ImpNivelAB(ArBin a, int nivel) {
    if (esvacioAB(a))
        return;
    if (nivel == 1) {
        // Imprime la raíz sin sangría adicional
        ImpElem(raiz(a));
    } else if (nivel > 1) {
        // Imprimir primero el subárbol izquierdo y luego el derecho, con una sangría controlada
        ImpNivelAB(izqAB(a), nivel - 1);
        ImpNivelAB(derAB(a), nivel - 1);
    }
}

void ImpNivelPorNivelAB(ArBin a) {
    int h = Altura(a), i;
    for (i = 1; i <= h; i++) {
        // Indicar claramente el nivel que se está imprimiendo
        printf("Nivel %d: ", i);
        ImpNivelAB(a, i);  // Imprimir los elementos del nivel 'i'
        printf("\n");
    }
}

