//Write a C program to add two numbers, take number from user.

#include <stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("Enter the value:");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum:%d",sum);
    return 0;

}