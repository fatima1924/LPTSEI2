#ifndef EXERCICE5_2_H_INCLUDED
#define EXERCICE5_2_H_INCLUDED


 int exercice5_2_h(){

 int i,N,S;
  S=0;

 printf("entrer la valeur de N: ");
scanf("%d",&N);


  for(i=0;i<N;i){



 if (i==N){
 printf("la somme est: %d\n",S);

}
else {
    i=i+1;
    S=S+i;
    printf("la somme est: %d\n",S);
}
}
 }

#endif // EXERCICE5_2_H_INCLUDED
