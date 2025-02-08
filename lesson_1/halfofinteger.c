#include<stdio.h>
int main(){
     float x;
    printf("Enter a decimal number :");
    scanf("%f",&x);
    int y = x;
    float z = x - y;
    printf("your fractional part of the no. is :%f",z);
    return 0;
}