#include<stdio.h>
int main(){
    int a; // ajay
    int b; // shyam
    int c; // ram
    printf("enter the age of 1st person :");
    scanf("%d",&a);
     printf("enter the age of 2nd person :");
    scanf("%d",&b);
     printf("enter the age of 3rd person :");
    scanf("%d",&c);
    if(a<b && a<c){
        printf("ajay is  the youngest");
    }
    if(b<a && b<c){
        printf("shyam is  the youngest");
    }
    if(c<a && c<b){
        printf("ram is  the youngest");
    }
    return 0;
}