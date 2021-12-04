#ifndef EXERCICE2_H_INCLUDED
#define EXERCICE2_H_INCLUDED
#include<ctype.h>

int exercice2_h(){


char type;
float Pa,Ca,F,Fv,HT,Tva,TTC;

printf("entrer le type du produit:\n");
type=getchar();

printf("entrer le prix d'achat:\n");
scanf("%f",&Pa);

if(Pa>9000)
{
F=Pa*4./100;
}
if (5000<Pa<9000){
F=Pa*6./100;
}
if (2000<Pa<5000){
F=Pa*8./100;
}
else{
F=Pa*1./100;
}


Ca=Pa+F;
Fv=10./100*Ca;

switch(tolower(type)){
case 'x':
    Tva=30./100;
  break;
case'y':
    Tva=38./100;
    break;
case'z':
    Tva=43./100;
    break;
case't':
    Tva=47./100;
    break;
case'u':
    Tva=49./100;
    break;
}

HT=Ca+Fv;
TTC=HT+HT*Tva;

printf("le Prix d'achat est: %f\n",Pa);
printf("les Frais est: %f\n",F);
printf("le Cout d'achat est: %f\n",Ca);
printf("les frais de vente est: %f\n",Fv);
printf("la taxe sur la valeur ajoutée ou TVA est: %f\n",Tva);
printf("le prix de vente hors taxe est: %f\n",HT);
printf("le prix totale est: %f\n",TTC);

}
#endif // EXERCICE2_H_INCLUDED
