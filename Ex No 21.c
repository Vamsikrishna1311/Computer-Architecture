#include <stdio.h>
void main()
{
    int counter = 1, a, b, res, ins, performance_measure;
    printf("Enter the number 1\n");
    scanf("%d", &a);
    counter += 1;
    printf("\nEnter the number 2\n");
    scanf("%d", &b);
    counter += 1;
    res = a && b;
    counter += 1;
    printf("%d", res);
    counter = counter + 2;
    printf("\nEnter the no of instructions\n");
    scanf("%d", &ins);
    performance_measure = ins / counter;
    printf("\nPerformance measure is %d\n", performance_measure);
}