 #include <stdio.h>
void main()
{
    int counter;
    counter = 1;
    int a, b, choice, res, ins, per;
    printf("\nEnter Number 1\n");
    scanf("%d", &a);
    counter = counter + 1;
    printf("\nEnter Number 2\n");
    scanf("%d", &b);
    counter = counter + 1;
    printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("\nEnter your choice\n");
    scanf("%d", &choice);
    if (choice <= 4)
    {

        switch (choice)
        {
        case 1:
            printf("\nPerforming Addition\n");
            res = a + b;
            counter = counter + 1;
            break;
        case 2:
            printf("\nPerforming subtraction \n ");
            res = a - b;
            counter = counter + 1;
            break;
        case 3:
            printf("\nPerfoming Multiplication\n");
            res = a * b;
            counter = counter + 1;
            break;
        case 4:
            if(b==0)
            printf("\nDenominator can't be zero\n");
            printf("\nPerforming Division\n");
            res = a / b;
            counter = counter + 1;
            break;
        default:
            printf("\nInvalid Input !!!!! \n Enter the choice provided");
            break;
        }
    }
    else
        printf("\n Enter the valid input!!!!\n");
    printf("%d", res);
    counter = counter + 3;
    printf("\nCycle value is:%d \n", counter);
    printf("\n Enter the number of instructions\n");
    scanf("%d", &ins);
    per = ins / counter;
    printf("\n Perforamce measure is %d\n", per);
}
