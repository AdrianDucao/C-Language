#include <stdio.h>

int main() {
    int limit = 1;
    int counter = 1;
    printf("Enter While Loop Limit:");    
    scanf("%d",&limit);

    while(counter <= limit){
        printf("While Loop Hello World %d \t", counter);
        printf("\n");
        counter++;
    }
    return 0;
}
