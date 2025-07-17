#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int choice = 1, num;
    while (choice)
    {
        int randnum;
        srand(time(0));
        randnum = rand() % 50 + 1;
        for (int i = 1; i < 11; i++)
        {
            printf("guess the number between 1 to 50\n its your %d chance\n you have another %d chance\n", i, 10 - i);
            scanf("%d", &num);
            if (num < randnum)
            {
                printf("oops choose some greater number\n");
            }
            else if (num > randnum)
            {
                printf("choose some smaller number\n");
            }
            else
            {
                printf("Congratulation! you guess it correct the correct number is %d\n", randnum);
                printf("your score is %d percenatge\n", i * 10);
                break;
            }
            if (i != 10)
            {
                printf("your %d Attemp over\n", i);
            }
        }

        // printf("your all attemp is over\n");
        printf("correct number is %d\n",randnum);
        printf("Do you want to play it again if yes press 1 of no press 0\n");
        scanf("%d", &choice);
    }

    return 0;
}