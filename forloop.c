#include <stdio.h>

int main() {
    int limit = 1;
    printf("Enter For Loop Limit:");    
    scanf("%d",&limit);

    for(int i=1; i <= limit; i++){
        printf("For Loop Hello World %d \t", i);
        printf("\n");
    }
    return 0;
}
