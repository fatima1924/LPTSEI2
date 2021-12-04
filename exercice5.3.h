#ifndef EXERCICE5_3_H_INCLUDED
#define EXERCICE5_3_H_INCLUDED


 int exercice5_3_h(){

 int i,N,S;
  S=0;

 printf("entrer la valeur de N: ");
scanf("%d",&N);


  for(i=1;i<N;i){



 if (i==N){
 printf("la somme est: %d\n",S);

}
else {
    i=2*i+1;
    S=S+i;
    printf("la somme est: %d\n",S);
}
}
 }


#endif // EXERCICE5_3_H_INCLUDED
