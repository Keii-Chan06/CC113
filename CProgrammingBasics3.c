#include<stdio.h>

int main()
{
    int num;

    printf("Input any integer:");
    scanf("%d", &num);

    switch(num<0)
    {
        case 1:
            printf("The integer is a negative number.");
            break;
        case 0:
            switch(num==0)
            {
            case 1:
                printf("zero");
                break;
            case 0:
                printf("The integer is a positive number");
                break;
            }
        break;
    }
    return 0;
}
