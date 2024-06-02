/*This the code for the Simple interest */
#include<stdio.h>
int main(){
    float principal,rate,year,interest;
    printf("Enter the Principal : ");
    scanf("%f",&principal);
    printf("Enter the Rate : ");
    scanf("%f",&rate);
    printf("Enter the Year : ");
    scanf("%f",&year);
    interest=(principal*rate*year)/100;
    printf("The simple interest for the principal %f , rate %f and year %f is %F",principal,rate,year,interest);
    
    return 0;
    
}