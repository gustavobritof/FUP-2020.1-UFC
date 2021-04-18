#include <stdio.h>

int main(){
    int n1, n2, n3, v1, v2, v3;
    
    scanf("%d%d%d",&n1, &n2, &n3);
    
    v1=n1*n2/100;
    v2=n1*n3/100;
    v3=n1-v1-v2;

    
    printf("%d %d %d", v1, v2 , v3);
    
    return 0;
}