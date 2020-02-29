#include <stdio.h>

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(result = num%2){
        printf("Number is Odd \n");
        return 0;
    }else{
        printf("Number is Even \n");
        return 0;
    }
}
