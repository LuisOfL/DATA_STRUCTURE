#include"..\ArBin\ArBin.h"
typedef ArBin DicBin;

DicBin InsOrd(Elem e, DicBin a){
     if(esvacioAB(a))
        return consAB(e,vacioAB(),vacioAB());
     else if(EsMenor(e,raiz(a)))
              return   consAB(raiz(a),InsOrd(e,izqAB(a)),derAB(a));
          else
              return consAB(raiz(a),izqAB(a),InsOrd(e,derAB(a)));
}
int EstaEn(Elem e, DicBin a){
    if(esvacioAB(a))
        return 0;
    else if(SonIguales(e,raiz(a)))
             return 1;
         else if(EsMenor(e,raiz(a)))
                return EstaEn(e,izqAB(a));
              else
                return EstaEn(e,derAB(a));
}

Elem Mayor(DicBin a){
    if(EsHoja(a))
        return raiz(a);
    else if(esvacioAB(derAB(a)))
            return raiz(a);
         else
            return Mayor(derAB(a));
}
Elem Menor(DicBin a){
    if(EsHoja(a))
        return raiz(a);
    else if(esvacioAB(izqAB(a)))
            return raiz(a);
         else
            return Menor(izqAB(a));
}

DicBin ElimMayor(DicBin a){
    if(EsHoja(a))
        return vacioAB();
    else if(esvacioAB(derAB(a)))
             return izqAB(a);
         else
            return consAB(raiz(a),izqAB(a),ElimMayor(derAB(a)));
}

DicBin ElimMenor(DicBin a){
    if(EsHoja(a))
        return vacioAB();
    else if(esvacioAB(izqAB(a)))
             return derAB(a);
         else
            return consAB(raiz(a),ElimMenor(izqAB(a)),derAB(a));
}
