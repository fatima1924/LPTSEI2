#ifndef EXERCICE6_H_INCLUDED
#define EXERCICE6_H_INCLUDED

 int exercice6_h(){
int s,nb,i;

  printf("Entrez un nombre: ");
  scanf("%d",&nb);
  s=0;
  for(i= 1;i<nb;++i){
    if(nb%i==0){
      s=s+i;
    }
  }
  if(s==nb){
    printf("C'est un nombre parfait");
  }
  else{
    printf("Ce n'est pas un nombre parfait");
  }
 }
#endif // EXERCICE6_H_INCLUDED
