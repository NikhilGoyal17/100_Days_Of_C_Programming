//Write a program to find the volume of the cylinder with a user defined radius 
#include<stdio.h>
int main(){
    float radius,height,Volume;
    printf("Enter the radius :");
    scanf("%f",&radius);
    printf("Enter the height :");
    scanf("%f",&height);
    Volume= 3.14*radius*radius*height;
    printf("The Volume of the cylinder of radius %f and the height %f is %f .",radius,height,Volume);
    return 0;
}