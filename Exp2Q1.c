//WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.
#include <stdio.h>
int main(){
    int a,b,area,perimeter;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("Enter the value:");
    scanf("%d",&b);
    area=a*b;
    perimeter=2*(a+b);
    printf("Area:%d\n",area);
    printf("Perimeter:%d\n",perimeter);
    return 0;
}