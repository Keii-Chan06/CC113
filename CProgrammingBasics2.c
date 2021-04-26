#include<stdio.h>
void main()
{
    char voter_name;
    int voter_age;

    printf("Name:");
    scanf("%[^\n]s", &voter_name);


    printf("Age:");
    scanf("%d", &voter_age);

    if(voter_age>=18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    return 0;
}
