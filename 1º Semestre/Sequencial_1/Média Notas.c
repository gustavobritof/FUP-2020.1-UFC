#include <stdio.h>

int main(){
 
 float n1, n2, n3, p1, p2, p3, media;
 
 scanf("%f%f%f%f%f%f",&n1, &n2, &n3, &p1, &p2, &p3);
    
    media=((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);
    
    printf("%f", media);
    
    return 0;
}