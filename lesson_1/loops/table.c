#include <stdio.h>
int main() {
    int n ,i;
    printf("enter a number");
    scanf("%d",&n);
    for(i = 1; i<=10; i++){
        printf("%d x %d = %d\n",i , n, n * i);
    }

    return 0;
}
