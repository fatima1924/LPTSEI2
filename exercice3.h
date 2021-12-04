#ifndef EXERCICE3_H_INCLUDED
#define EXERCICE3_H_INCLUDED

int exercice3_h(){


char sexe,SF;
int age;

printf("saisir la situation familiale:\n");
scanf(" %c",&SF);

printf("saisir h pour homme et f pour femme:\n");
scanf(" %c",&sexe);

printf("saisir l'age:\n");
scanf(" %d",&age);

if(sexe=='h' && age<20 && SF=='c' || sexe=='h' && age>70 && SF=='m' || sexe=='f' && age<22 && SF=='c' || sexe=='f' && age>55 && SF=='m'  ){
    printf("il/elle est n'est pas imposable");
}
else{
    printf("il/elle est imposable");
}



}
#endif // EXERCICE3_H_INCLUDED
