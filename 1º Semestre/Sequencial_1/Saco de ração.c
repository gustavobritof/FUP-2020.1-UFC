#include <stdio.h>

int main(){
    
    float pesokg;
    int pesog, qtd, resto, consumo;
    
    scanf("%f%d", &pesokg, &qtd);
    
    pesog=pesokg*1000;
    consumo=qtd*5;
    resto=pesog-consumo;
    
    printf("%d",resto);
    
    
    
    return 0;
    
}