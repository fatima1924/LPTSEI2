#ifndef EXERCICE1_H_INCLUDED
#define EXERCICE1_H_INCLUDED
int exercice1_h(){


int Sa,R,B200,B100,B50,B20,P10,P5,P1;

printf("entrer la somme d'argents: ");
scanf("%d",&Sa);

printf("la répartition en billets de %d ",Sa);
if(B200=Sa/200){
Sa=Sa%200;
printf("\nbillets_200",B200);
}

if(B100=Sa/100){
    Sa=Sa%100;
  printf("\nbillets_100",B100);
}

if(B50=Sa/50){
  Sa=Sa%50;
    printf("\nbillets_50",B50);
}

if(B20=Sa/20){
   Sa=Sa%20;
printf("\nbillets_20",B20);
}

 printf("\nEt en pieces est:");

if(P10=Sa/10){
    Sa=Sa%10;
    printf("\npiecess_10 ",P10);
}
if(P5=Sa/5){
    Sa=Sa%5;

   printf("\npiecess_5 ",P5);
}

if(P1=Sa/1){
    Sa=Sa%1;

    printf("\npiecess_1 ",P1);
}



}
#endif // EXERCICE1_H_INCLUDED
