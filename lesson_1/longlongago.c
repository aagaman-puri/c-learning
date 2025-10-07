#include<stdio.h>
int main(){
    int p,t,r,si = 0;
    printf("Enter principal:");
    scanf("%d",&p);
    printf("Enter time:");
    scanf("%d",&t);
    printf("Enter rate:");
    scanf("%d",&r);
    si = (p*t*r) / 100;
    printf("the si is :%d",si);
    return 0;
}