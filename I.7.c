#include <stdio.h>
#include <stdlib.h>
int n, j, arr[101], i;
int main (){
    printf("Input an integer between 0 and 90: ");
    do {
        scanf("%d", &n);
        if (n>0&&n<99)
            break;
        printf("Invalid, input again: ");
    } while (n<=0||n>=99);
    printf("Success!");
    return 0;
}
