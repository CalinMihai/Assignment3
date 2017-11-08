
#include <stdio.h>
#include <stdlib.h>
int n, i, j, nr1, nr2, nr3, nr4;
int main (){
    i = 1;
    while (i < 40) {
        printf("*");
        nr1++;
        i++;
    }
    printf("\n");
    printf("%d asterisks\n", nr1);
    i = 1;
    do {
        nr2++;
        printf ("*");
        i += 3;
    } while (i != 40);
    printf("\n");
    printf("%d asterisks\n", nr2);
    printf("We have an infinite cycle for the third example, so infinite asterisks.");
    for(i=1;i<=40;i+=15)
        for (j = 1; j <= i; j++) {
            nr4++;
        }
    printf("\n");
    printf("In the fourth example, there are: %d asterisks", nr4);
    return 0;
}
