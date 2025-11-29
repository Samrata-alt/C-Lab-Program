/*WAP to compute the BMI Index of the person and print the BMI values as per the following ranges.
You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).*/

#include <stdio.h>
int main(){
    float w,h,bmi;        //variable to store the percentage
    printf("Enter your weight(kg):");
    scanf("%f",&w);     //inputting and storing in w
    printf("Enter your height(Meters):");
    scanf("%f",&h);     //inputting and storing in h

    bmi=w/(h*h);        //Calculates the BMI

    if(bmi<15){      //conidions
        printf("Starvation");
    }
    else if (bmi>=15.1 && bmi<=17.5){
        printf("Anorexic");
    }
    else if (bmi>=17.6 && bmi<=18.5){
        printf("Underweight");
    }
    else if (bmi>=18.6 && bmi<=24.9){
        printf("Ideal");
    }
    else if (bmi>=25 && bmi<=25.9){
        printf("Overweight");
    }
    else if (bmi>=30 && bmi<=39.9){
        printf("Obese");
    }
    else{
        printf("Morbidity Obese");
    }
    return 0;
}