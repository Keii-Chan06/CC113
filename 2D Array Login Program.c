//Login program using 2D array
//Create a simple login program where the user inputs ID# and PIN
//If credentials are correct, the program will print "You have successfully logged in ID#!"
//If credential doesn't match, the program prints "Invalid ID/PIN!"

#include <stdio.h>

void main()
{
    int arr[3][2] = {
        {1100, 000},
        {1101, 111},
        {1102, 222},
    };
    int idNum, pin, i, j;
    {

//Inputted credentials:
//Account 1 ID and PIN: 1100, 000
//Account 2 ID and PIN: 1101, 111
//Account 3 ID and PIN: 1102, 222

        printf("Enter ID Number:");
        scanf("%d", &idNum);
        printf("Enter PIN:");
        scanf("%d", &pin);

        //if else statement
        if((idNum == arr[0][0] && pin == arr[0][1]) || (idNum == arr[1][0] && pin == arr[1][1]) || (idNum == arr[2][0] && pin == arr[2][1]))
        {
            printf("You have successfully logged in ID#%d\n", idNum);
        }
        else
        {
            printf("Invalid ID/PIN!\n");
        }
    }
    return 0;
}


