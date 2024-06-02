//Writing a program to convert a farhenheit temperature to a celsius one 
#include<stdio.h>
int main(){
    float farhenheit,celsius;
    printf("Enter the temperature in farhenheit :");
    scanf("%f",&farhenheit);
    celsius=(farhenheit-32)*5/9;
    printf("The temperature in celsius id %f",celsius);
    return 0;
}