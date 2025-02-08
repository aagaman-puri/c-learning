#include <stdio.h>
int main() {
    int k = 35;
    printf("\n%d", k == 35);   // First print the result of k == 35
    k = 50;                     // Then change k
    printf("%d", k);            // Print the new value of k
    printf("%d", k > 40);       // Print the result of k > 40
    return 0;
}