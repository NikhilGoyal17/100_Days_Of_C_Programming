//Swapping of 2 variables with a third variable 
#include<stdio.h>
int main(){
    int number_1,number_2,temp;
    printf("Enter the first number : ");
    scanf("%d",&number_1);
    printf("Enter the second number : ");
    scanf("%d",&number_2);
    printf("The older numbers are number_1 = %d and number_2 = %d respectively",number_1,number_2);
    temp=number_1;
    number_1=number_2;
    number_2=temp;//This is the assignment operator which works from right to left 
    printf("\nThe newer numbers are number_1 = %d and number_2 = %d respectively",number_1,number_2);
    return 0;
}