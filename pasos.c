#include "pasos.h"
#include "motorPasoPaso.h"
#include "MKL25Z4.h"
#include "ctype.h"

void TipoPasos(char Paso, int pasos){
    Paso= toupper(Paso);
    printf("ingrese la cantidad de pasos: ");
    scanf("%d\n", &pasos);
    printf("ingrese el tipo de paso: ");
    scanf("%c\n", &Paso);
    if(Paso == 'N'){
        PasoNormal(pasos);
        cant_pasos = pasos;
    }else if (Paso=='C'){
        PasoCompleto(pasos);
        cant_pasos = pasos;
    }else if (Paso=='M'){
        MedioPaso(pasos);
        cant_pasos=pasos;
    }
}