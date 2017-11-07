#include <stdio.h>
int main()
{
int n;
scanef("%d", &n);
int sum = 0;
int nextValue = 1;
int i;
for(i = 0; i < n; i++) {
sum += nextValue;
nextValue *= 3;
printf("%d", sum);
}
return 0;
}

