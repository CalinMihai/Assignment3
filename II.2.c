#include <stdio.h>
int n, F[100], i;
int main(){
    F[1] = 1;
    F[2] = 1;
    printf("n=");
    scanf("%d", &n);
        printf("%d", F[1]);
        printf("%d", F[2]);
for(i= 3; i <= n; i++){
    F[i] = F[i-1] + F[i-2];
    printf("%d", F[i]);
}

}
