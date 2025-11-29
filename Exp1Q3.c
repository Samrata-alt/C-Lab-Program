//Write a program that prompts the user to enter their name and age.

#include <stdio.h>
int main(){
    int a;
    char b[50];
    printf("Enter your age:");
    scanf("%d",&a);
    printf("Enter your name:");
    scanf(" %s", &b);
    printf("You are %s and your age is %d. ",b,a);
    return 0;
}