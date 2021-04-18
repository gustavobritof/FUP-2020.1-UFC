#include <stdio.h>

int main(){
    float peso, altura ,imc;
    
    scanf("%f%f",&peso, &altura);
    
    imc=peso/(altura*altura);
    
    printf("%f", imc);
    
    return 0;
}