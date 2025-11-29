//WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

#include <stdio.h>
int main(){
    int c,f;
    //Input from user
    printf("Enter celcius value:");
    scanf("%d",&c);
    //calculates the fahrenheit from celcius value
    f=(c*9/5)+32;
    printf("Fahrenheit:%d",f);
    return 0;
}