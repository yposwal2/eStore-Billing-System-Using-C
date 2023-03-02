#include<stdio.h>

int main(){

    // declared an array named name that can hold 50 characters as a name
    char name[50];
  
    // declaring float to hold customer phone number and ID values
    float phoneNum, customerID; 

    // declaring float to hold cosmetics product values 
    float bodySoap, bodySpray, hairCream, hairSpray;

    // declaring float to hold groceries values 
    float bread, rice, flour, eggs, milk;

    // declaring float to hold soda's & other drink values
    float coke, sprite, juice, coconutWater, Coffee;

    // declaring float to hold total values.
    float total = 0;

    printf("-----------------------------------------------------------\n");
    printf("          Give us feedback at feedback@gmail.com         \n");
    printf("-----------------------------------------------------------\n");
    printf("\033[1m                   Walmart E-store                    \033[0m\n"); // Used  ANSI escape sequences to make store name bold
    printf("                  +1(123)-456-7890                  \n");
    printf("                NewYork City, NY 10008                 \n");
    printf("-----------------------------------------------------------\n");
   
// Displaying List
    printf("Enter the item number from below to add to your cart       \n");
    printf(" 1: Body Soap   2: Body Spray   3: Hair Cream   4: Hair Spray \n");
    printf(" 5: Bread       6: Rice         7: Flour        8: Eggs  \n");
    printf(" 9: Milk       10: Coke        11: Sprite      12: Juice \n");
    printf("13: Coffee     14: Coconut Water\n");

    printf("-----------------------------------------------------------\n");

    printf("Please fill the imformation below: \n");
   // Customer Name  
    printf("Customer Name: ");
    scanf("%s" , name);
    
    // Customer Phone Number  
    printf("Customer Phone Number: ");
    scanf("%f" , &phoneNum);

    // Customer ID 
    printf("e-Customer ID: ");
    scanf("%f", &customerID);

    printf("-----------------------------------------------------------\n");
    // Using Do while Loop to repeatively asking user if they wants to add more item
    
    char choice;
    do{

    int itemNum;
    printf("Enter the item number from above to add to your cart: ");
    scanf("%d" , &itemNum);

    switch (itemNum){
        
        case 1:
            total += 2.99;
            break;

        case 2:
            total += 1.99;
            break;

        case 3:
            total += 0.99;
            break;

        case 4:
            total += 1.50;
            break;

        case 5:
            total += 2.50;
            break;

        case 6:
            total += 1.10;
            break;

        case 7:
            total += 3.50;
            break;

        case 8:
            total += 3.50;
            break;

        case 9:
            total += 1.75;
            break;

        case 10:
            total += 2.0;
            break;

        case 11:
            total += 2.99;
            break;

        case 12:
            total += 3.00;
            break;

    default:
    printf("Invalid Item Number\n");
    break;

    } 

printf("Would you like to add more item? [Y/N]: ");
scanf(" %c", &choice);

printf("\n-----------------------------------------------------------\n");

}while (choice == 'Y' || choice == 'y');


printf("Your Total is: $");
printf("%.2f\n" , total);

printf("\n-----------------------------------------------------------\n");

printf("          ***Thank you for shoping with us today***          \n");

printf("\n-----------------------------------------------------------\n");

}
