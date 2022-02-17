# Requirements:
## Description of project:
* I have chosen a game as my project which is commomly known as Rock-Paper-Scissors game as we all played it atleast once. This familiar game of Rock, Paper, Scissors is played like this: at the same time, two players display one of three symbols: a rock, paper, or scissors. A rock beats scissors, scissors beat paper by cutting it, and paper beats rock by covering it.
## Research:
### Rock-Paper_Scissors Game Features 
Rock-Paper_Scissors is played by two players, who at the same time choose one of the option every time.
Because of the simplicity of Rock-Paper_Scissors, it is often used as a pedagogical tool for teaching the concepts of good sportsmanship and the branch of artificial intelligence that deals with the searching of game trees.

## Benefits
Rock-Paper_Scissors Game offers following benefits:

### Good Sportsmanship
Like any game, Rock-Paper_Scissors also teaches a person to accept the defeat as well as ackowledge the win.

### Concentration
It can help to improve a person's concentration as well as strategic thinking

### Developement of Coordination
Rock-Paper_Scissors helps develop coordination.


## Flow Chart:
   * ![FLOWCHART](https://raw.githubusercontent.com/YR4851/M-1_ROCK-PAPER-SCISSORS_GAME/main/2_Architecture/Screenshot%20(71).png)
   
### Explanation:
* The game starts giving you three input options(0, 1, 2):
    * 0 means you are playing with'Rock'.
    * 1 means you are playing with 'Paper'.
    * 2 means you are playing with 'Scissors'.
* The game ends when:
    * User wins.
    * The computer wins.
    * It is in a draw situation , i.e, a total of 3 moves have been completed and none won.
* The game continues in the beginning if the check for draw is false.
* Then it checks if anyone has won yet.
* If not, then it again checks if it is a draw situation.

# Detailed requirements:
## High level requirements:

| ID | Description | 
| ----- | ----- | 
| HR01 | User can choose '0' to play |
| HR02 | User can choose '1' to play |
| HR03 | User can choose '2' to play |
| HR04 | User can Exit the game |
| HR05 | User can lose|
| HR06 | User can win|
| HR07 | User can end up in a Draw situation|

## Low level requirements:


| ID | Description | HLR ID |
| ------ | --------- | ------ |
| LR01 | If the user presses '0', he will play with 'ROCK'. | HR01 |
| LR02 | If the user presses input he will get the first chance to play. | HR01 |
| LR03 | If the user presses '1', he willplay with 'PAPER'. | HR02 |
| LR04 | If the user is playing with '1', he'll still get the first chance to play. | HR02 |
| LR05 | Theone who makes more points will win | HR03 |
| LR06 | If the total number of moves completed and none won ,then it will be a draw. | HR06 |


# SWOT:
![SWOT analysis](https://raw.githubusercontent.com/YR4851/M-1_ROCK-PAPER-SCISSORS_GAME/main/1_Requirements/Screenshot%20(67).png)
# 4W1H:
##  Who:
Anyone can play this game for entertainment.
## What:
This game is for recreational purposes.
Development of strategies can be done as there are many possible outcomes in this game.
## When:
This game can be played anytime while feeling bored.
## Where:
A variety of websites make a simple Rock paper scissors game available.
## How:
It can be implemented in a business strategies. As after some time the players can make some stategies and also go for bluffing for winning as well.

# Architecture
## Structural diagram:
![Sturcture of game](https://upload.wikimedia.org/wikipedia/commons/6/67/Rock-paper-scissors.svg)

## Behavioral
   * Flowchart:
   * ![FLOWCHART](https://raw.githubusercontent.com/YR4851/M-1_ROCK-PAPER-SCISSORS_GAME/main/2_Architecture/Screenshot%20(71).png)
   * Use case diagrams:
   * ![usecase diagram](https://raw.githubusercontent.com/YR4851/M-1_ROCK-PAPER-SCISSORS_GAME/main/2_Architecture/Screenshot%20(72).png)
 ## main code:
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

# TEST PLAN:

## Table For: High level test plan

|Test ID | Description | Exp I/P | Exp O/P |
|--------|-------------|---------|---------|
|H_01    |  Check if the name of the player is entered or not.           |    Name.     |      Welcome statement with player name .   |
|H_02    |Check if player/computer got 3 of his inputs in Rock, Paper or Scissors format.             |   '0', '1' or '2' i/p from the user/computer.      |The user/computer won the game.|
|H_03    | Check for draw.            |   3 inputs from (user+computer).      |     The game is over.    |

## Table For: Low level test plan

|Test ID | Description | Exp I/P | Exp O/P |
|--------|-------------|---------|---------|
|L_01    | Checking for the basic requirement to the game, i.e., a Name entered by player or not.  |    Name as input expected from the user. |  3Welocome statement with name is displayed.  |
|L_02    |  Play proceeds with the user/computer alternately placing their marks as played in Rock, Paper or Scissors format. |   '0', '1' or '2' i/p from the user/computer.      |   The user/computer won the game.      |
|L_03    |   Check if a total of 3 moves have been made( combining that of user and computer), the game ends up in a draw when neither the user nor the computer is able to get 3 marks in a row.           |  3 inputs from (user+computer).       |                The game is over.       Somebody won or the game ended as a draw. |

