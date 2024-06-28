#include "pasos.h"
#include "motorPasoPaso.h"
#include "MKL25Z4.h"
#include "ctype.h"
int pines[4]={1, 2, 3, 4};
int main(){
    int i;
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK;
    char Paso = toupper(Paso);
    for (i=0; i< 4; i++){
        PORTA-> PCR[pines[i]]|=PORT_PCR_MUX(0);
    }
    switch(Paso){
    case 'C':
        PasoCompleto(pasos);
        break;
    case 'N':
        PasoNormal(pasos);
        break;
    case 'M':
        MedioPaso(pasos);
        break;
    }
}