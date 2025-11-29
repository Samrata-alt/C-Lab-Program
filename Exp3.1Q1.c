//WAP to take check if the triangle is valid or not. If the validity is established, do check if the triangle is isosceles, equilateral, right angle, or scalene. Take sides of the triangle as input from a user.

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value:");
    scanf("%d",&a);
    printf("Enter the value:");
    scanf("%d",&b);
    printf("Enter the value:");
    scanf("%d",&c);
    //Checking the validity of the triangle
    if(a+b>c && a+c>b && c+b>a){
        printf("Triangle is valid");
        //Check for type of triangle
        if(a==b || b==c || a==c){
            printf("It is a isosceles triangle");
        }
        else if(a==b && b==c){
            printf("It is equilateral triangle");
        }
        else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
            printf("It is a right angle triangle");
        }
        else{
            printf("It is a scalene triangle");
        }
    }
    else{
        printf("Triangle is not valid");
        return 0;
    }
    
}