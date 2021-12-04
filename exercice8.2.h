#ifndef EXERCICE8_2_H_INCLUDED
#define EXERCICE8_2_H_INCLUDED

int exercice8_2_h()
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


W0=W1;
W1=W;

if(i%1==0){
        W=W+2*W1+W0+8;
        }
        else {
            W=W+7*W1+W0-9;
     }

    printf("la valeur de W ordre %d est: \t%d\n",i,W);

 SW=SW+W;
    }

     printf("la somme de Wn ordre %d est: \t%d\n",n,SW);


}


#endif // EXERCICE8_2_H_INCLUDED
