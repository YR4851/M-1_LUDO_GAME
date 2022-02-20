#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Random(int n)
{
    srand(time(Null)); //srand takes seed as an input and is defined inside <stdlib.h>
    return rand() % n;
}

// Rock command = (0)
// Paper command = (1)
// Scissors command = (2)

int main()
{
    printf("!!! Welcome !!! Enter your name : ");
    char name[30];
    gets(name);
    int i = 0;
    int p = 0, c = 0; //p = player and c = computer//

    printf("You're welcome %s , in Stone-paper-scissors game.\n", name);

    printf("Hey,\npress 0 for stone.\npress 1 for paper.\npress 2 for scissors.\n\n");
    while (i < 3)
    {

        printf("%s's turn : ", name);
        int n;
        scanf("%d", &n);
        printf("Computer's Turn : %d\n\n", Random(3));
        if (n == 0)
        {
            if (Random(3) == 0)
            {
                goto end;
            }
            else if (Random(3) == 1)
            {
                c++;
            }
            else
            {
                p++;
            }
        }

        if (n == 1)
        {
            if (Random(3) == 0)
            {
                p++;
            }
            else if (Random(3) == 1)
            {
                goto end;
            }
            else
            {
                c++;
            }
        }

        if (n == 2)
        {
            if (Random(3) == 0)
            {
                c++;
            }
            else if (Random(3) == 1)
            {
                p++;
            }
            else
            {
                goto end;
            }
        }
        end:
        i++;
    }
    printf("\n");
    printf("\n");
    printf("~~~~~~~score~~~~~~~ \n");
    printf("%s : computer = %d : %d\n", name, p, c);
    if (p==c)
    {
        printf("The match is tied.\n");
    }
    else if(p>>c)
    {
        printf("congratulations, %s won the game against computer.\n",name);
    }
    else
    {
        printf("You lose...\nPLEASE...!!! TRY AGAIN\n");
    }
    
    return 0;
}
