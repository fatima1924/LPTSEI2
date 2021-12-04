#ifndef EXERCICE9_1_H_INCLUDED
#define EXERCICE9_1_H_INCLUDED

int exercice9_1_h(){

int i,n;
double u;
int factoriel(int n){

if(n==1){


   return 1;
  } else {return n*factoriel(n-1);

   }
}

printf("donner la valeur de n: ");
    scanf("%d",&n);

u=0.0;
for(i=1;i<=n;i++){
u=u+factoriel((int)pow(i,2*i));
        if(n==0){
               printf("la valeur de U ordre %d est: \t%d\n",n,0);

        }
        else {
            printf("la valeur de U ordre %d est: \t%d\n",n,u);
     }



}
}

#endif // EXERCICE9_1_H_INCLUDED
