//Write a program to find the total price and the average price of the three objects given
#include<stdio.h>
int main(){
    int laptop_price,mobile_price,book_price,total_price;
    float avg_price;
    printf("Enter the price of Laptop : ");
    scanf("%d",&laptop_price);
    printf("Enter the price of Mobile : ");
    scanf("%d",&mobile_price);
    printf("Enter the price of Book : ");
    scanf("%d",&book_price);
    total_price=laptop_price+mobile_price+book_price;
    avg_price=total_price/3.0;
    printf("The total and the average price for the laptop %d$ , Mobile %d$ and the book %d$ is %d$ and %f$ respectively .",
    laptop_price,mobile_price,book_price,total_price,avg_price);
    
    return 0;
}