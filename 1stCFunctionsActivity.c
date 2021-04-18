#include <stdio.h>
int main()
{
    int s1, s2, s3, s4, s5, sum, average;

    printf("Enter your grade in English:");
    scanf("%d", &s1);

    printf("Enter your grade in Filipino:");
    scanf("%d", &s2);

    printf("Enter your grade in Math:");
    scanf("%d", &s3);

    printf("Enter your grade in Science:");
    scanf("%d", &s4);

    printf("Enter your grade in History:");
    scanf("%d", &s5);

    sum=s1+s2+s3+s4+s5;
    average=sum/5;

    printf("Average:%d", average);

    return 0;
}
