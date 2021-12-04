#ifndef EXERCICE7_1_H_INCLUDED
#define EXERCICE7_1_H_INCLUDED

int exercice7_1_h()
{
    int SV,V,n,i;
    V=2;
    SV=2;
    printf("donner la valeur de n: ");
    scanf("%d",&n);

    printf("la valeur de V ordre 0 est: \t%d\n",V);
    for(i=1;i<=n;i++){

        if(i%2==0){
            V=V+2;
        }
        else {
            V=V+4;
     }

    printf("la valeur de V ordre %d est: \t%d\n",i,V);

      SV=SV+V;

    }

     printf("la somme de Vn ordre %d est: \t%d\n",n,SV);


}

#endif // EXERCICE7_1_H_INCLUDED
