#include "motorPasoPaso.h"
#include "MKL25Z4.h"
#define in1 1
#define in2 2
#define in3 3
#define in4 4
int pines[4]={in1, in2, in3, in4};
int i, cant_pasos=0;
void PasoNormal(int pasos){
    cant_pasos=pasos;
    for (i = 0; i<4; i++){
        PORTA->PCR[pines[i]]|=PORT_PCR_MUX(1);
    }
    do{
        if(cant_pasos<=pasos){
            if(cant_pasos==1){
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
                PTA->PSOR|=(0<<pines[2]);
                PTA->PSOR|=(0<<pines[3]);
            }else if (cant_pasos==2){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
                PTA->PSOR|=(1u<<pines[2]);
                PTA->PSOR|=(0<<pines[3]);
            }else if (cant_pasos==3){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
            }else if (cant_pasos==4){
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
            }
            cant_pasos =cant_pasos-4;

        }else if(cant_pasos==0){
            cant_pasos=0;
        }
    }while(cant_pasos==pasos);    
}
void MedioPaso (int pasos){
    cant_pasos=pasos;
    for (i = 0; i<4; i++){
        PORTA->PCR[pines[i]]|=PORT_PCR_MUX(1);
    }
        do{
        if(cant_pasos<=pasos){
            if(cant_pasos==1){
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(0<<pines[2]);
                PTA->PSOR|=(0<<pines[3]);
            }else if (cant_pasos==2){
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
                PTA->PSOR|=(0<<pines[2]);
                PTA->PSOR|=(0<<pines[3]);
            }else if (cant_pasos==3){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
            }else if(cant_pasos==4){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);          
            }else if (cant_pasos==5){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
            }else if (cant_pasos==6){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
            }else if (cant_pasos==7){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
            }else if (cant_pasos==8){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
            }
            cant_pasos =cant_pasos-8;

        }else if(cant_pasos==0){
            cant_pasos=0;
        }
    }while(cant_pasos==pasos);   
}
void PasoComoleto(int pasos){
    cant_pasos=pasos;
    for (i = 0; i<4; i++){
        PORTA->PCR[pines[i]]|=PORT_PCR_MUX(1);
    }
    do{
        if(cant_pasos<=pasos){
            if(cant_pasos==1){
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(0<<pines[2]);
                PTA->PSOR|=(0<<pines[3]);
            }else if (cant_pasos==2){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
                PTA->PSOR|=(0<<pines[2]);
                PTA->PSOR|=(0<<pines[3]);
            }else if (cant_pasos==3){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(1u<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
            }else if (cant_pasos==4){
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(0<<pines[1]);
                PTA->PSOR|=(0<<pines[0]);
                PTA->PSOR|=(1u<<pines[1]);
            }
            cant_pasos =cant_pasos-4;

        }else if(cant_pasos==0){
            cant_pasos=0;
        }
    }while(cant_pasos==pasos);    
}
