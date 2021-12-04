#ifndef EXERCICE7_2_H_INCLUDED
#define EXERCICE7_2_H_INCLUDED

int exercice7_2_h()
{
    int SV,V,n,i;
    V=abs(-59);
    SV=abs(-59);
    printf("donner la valeur de n: ");
    scanf("%d",&n);

    printf("la valeur de V ordre 0 est: \t%d\n",V);
    for(i=1;i<=n;i++){

        if(i%1==0){
            V=V*8;
        }
        else {
            V=V*9;
     }

    printf("la valeur de V ordre %d est: \t%d\n",i,V);

 SV=SV+V;
    }

     printf("la somme de Vn ordre %d est: \t%d\n",n,SV);


}


#endif // EXERCICE7_2_H_INCLUDED
