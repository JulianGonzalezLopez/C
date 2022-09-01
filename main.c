
#include <stdio.h>

int main()
{
    int x = 1;
    
    while(x <= 20){
        printf("%d",x);
        if((x%5) == 0) printf("\n");
        else printf("\t");
        x++;
    }
    
    printf("\n\n");
    
    for(int y = 1; y <= 20; y++){
        printf("%d",y);
        if((y%5) == 0) printf("\n");
        else printf("\t");
    }
    
    printf("\n");
    
    for(int i = 0; i < 5; i++){
        for(int x = 0; x <= i; x++){
            printf("*");
        }
        printf("\n");
    }
    
    for(int i = 5; i >= 0; i--){
        for(int x = 0; x <= i; x++){
            printf("*");
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
