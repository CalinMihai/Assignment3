#include <stdio.h>
int main()
{
int n;
scanf("%d", &n);
int sum = 0;
int nextValue = 1;
int i;
printf("An=0");
for(i = 1; i <= n; i++) {
sum = nextValue;
nextValue *= 3;
printf("%+d", sum);
}
return 0;
}
