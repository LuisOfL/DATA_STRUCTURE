#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include".\Elem\ElemInt.h"
#include".\AVL\AVL.h"

int main(){
  int n, i;
  AVL a=vacioAB();
  srand(time(NULL));
  printf("x?");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    a=consAVL(1+rand()%100,a);
  ImpNivelPorNivelAB(a);
  puts("-----------");
  ImpElem(Mayor(a));
  a=ElimMayor(a);
  putchar('\n');
  ImpNivelPorNivelAB(a);
  puts("-----------");
  a=ElimMenor(a);
  putchar('\n');
  ImpNivelPorNivelAB(a);
  puts("-----------");

/*

  while(!esvacioAB(a)){
       ImpNivelPorNivelAB(a);
       puts("\nCual elemento quieres borrar?");
       a=desconsAB(LeeElem(),a);
       puts("\n--Elimina Mayor--------");
       ImpNivelPorNivelAB(a);
  }
*/
  return 0;
}
