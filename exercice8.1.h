#ifndef EXERCICE8_1_H_INCLUDED
#define EXERCICE8_1_H_INCLUDED


int exercice8_1_h()
{
    int SW,W,W0,W1,n,i;
    W0=0;
    W1=1;
    SW=1;
    printf("donner la valeur de n: ");
    scanf("%d",&n);

    printf("la valeur de W ordre 0 est: \t%d\n",W);

    printf("la valeur de W ordre 1 est: \t%d\n",W);

    for(i=2;i<=n;i++){

    W=W+5*W1+W0+1;
W0=W1;
W1=W;

    printf("la valeur de W ordre %d est: \t%d\n",i,W);

 SW=SW+W;
    }

     printf("la somme de Wn ordre %d est: \t%d\n",n,SW);


}


#endif // EXERCICE8_1_H_INCLUDED
