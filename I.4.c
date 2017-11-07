#include <stdio.h>
#include <stdlib.h>

int n, j, arr[101], i, gap;
int main (){
    scanf("%d", &n);
    for (i=0;i<n;i++)
        scanf("%d", &arr[i]);
    for (gap = n/2; gap > 0; gap /= 2)
        for (i = gap; i < n; i += 1) {
            int temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    for (i=0;i<n;i++)
        printf("%d", arr[i]);
    return 0;
}
