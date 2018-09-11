#include <stdio.h>     
#include <stdlib.h>     

int compare(const void * a, const void * b)
{
  if ( *(float*)a <  *(float*)b ) return -1;
  if ( *(float*)a == *(float*)b ) return 0;
  if ( *(float*)a >  *(float*)b ) return 1;
}

float ordena(float *pF,int n, int (*comP)(const void * , const void * )){
int i,j;
float aux;

for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){

        if(comP(&pF[i],&pF[j])== 1){
            aux=pF[i];
            pF[i]=pF[j];
            pF[j]=aux;
        }

    }

}
return *pF;
}

int main ()
{
  int n,i;
  float *pF;
  
  printf("digite o tamanho do vetor.");
  scanf("%d", &n);
  pF=(float*)malloc(n*sizeof(float));
  
  if(pF==NULL){
    printf("ERRO!");
    exit(1);
  }
  
  for(i=0;i<n;i++){
      printf("digite o valor: %d\n",i+1 );
      scanf("%f",&pF[i]);
  }
 
  ordena(pF,n,compare);

  for (i=0; i<n; i++)
     printf ("%f ",pF[i]);
  
  return 0;
}
