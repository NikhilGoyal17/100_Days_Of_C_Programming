// Write a program to calculate the volume of the sphere with the user defined radius
#include<stdio.h>
int main(){
    float radius,Volume;
    printf("Enter the Radius : ");
    scanf("%f",&radius);
    Volume = (4*3.142857*radius*radius*radius)/3;
    printf("The Volume of the sphere with the radius %f is %f ",radius,Volume);
    return 0;

}