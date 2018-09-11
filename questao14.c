#include <stdio.h>
#include <stdlib.h>

float* ordenar(float *values, int n)
{
    float aux;
    int i, j;

    for(i=0;i<n-1;i++){
            for(j=i+1; j<n; j++){
                if(values[i] > values[j]){
                    aux = values[i];
                    values[i] = values[j];
                    values[j] = aux;
                }
            }
        }
    return values;
}

int main()
{
    int n;
    float *values;

    printf("Type the quantity of numbers: ");
    scanf("%i", &n);
    values = (float*) malloc(n * sizeof(float));

    for(int i = 0; i < n; i++)
    {
        scanf("%f", &values[i]);
    }

    ordenar(values,n);


    printf("Result = ");

    for(int i = 0; i < n; i++)
    {
        printf("%f ", values[i]);
    }

    free(values);

    return 0;
}
