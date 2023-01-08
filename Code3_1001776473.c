/* Youssef Muhiar 1001776473 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void FillBingoCard(int bCard[5][5]);
void printCard(int bCard[5][5]);
int PickNumber();

bool exist(int num, int bCard[5][5]);

bool rowCheck(int bCard[5][5]);
bool columnCheck(int bCard[5][5]);
bool diagonalCheck(int bCard[5][5]);

void FillBingoCard(int bCard[5][5])
{
    int zero = 0;
    srand(time(0));

    bCard[0][0] = rand()%15+1;
    bCard[1][0] = rand()%15+1;
    bCard[2][0] = rand()%15+1;
    bCard[3][0] = rand()%15+1;
    bCard[4][0] = rand()%15+1;


    if(bCard[0][0]==bCard[1][0])
    {
        bCard[1][0] = rand()%15+1;
    }
    if(bCard[0][0]==bCard[2][0])
    {
        bCard[2][0] = rand()%15+1;
    }
    if(bCard[0][0]==bCard[3][0])
    {
        bCard[3][0] = rand()%15+1;
    }
    if(bCard[0][0]==bCard[4][0])
    {
        bCard[4][0] = rand()%15+1;
    }


    if(bCard[1][0]==bCard[0][0])
    {
        bCard[0][0] = rand()%15+1;
    }
    if(bCard[1][0]==bCard[2][0])
    {
        bCard[2][0] = rand()%15+1;
    }
    if(bCard[1][0]==bCard[3][0])
    {
        bCard[3][0] = rand()%15+1;
    }
    if(bCard[1][0]==bCard[4][0])
    {
        bCard[4][0] = rand()%15+1;
    }


    if(bCard[2][0]==bCard[0][0])
    {
        bCard[0][0] = rand()%15+1;
    }
    if(bCard[2][0]==bCard[1][0])
    {
        bCard[1][0] = rand()%15+1;
    }
    if(bCard[2][0]==bCard[3][0])
    {
        bCard[3][0] = rand()%15+1;
    }
    if(bCard[2][0]==bCard[4][0])
    {
        bCard[4][0] = rand()%15+1;
    }


    if(bCard[3][0]==bCard[0][0])
    {
        bCard[0][0] = rand()%15+1;
    }
    if(bCard[3][0]==bCard[1][0])
    {
        bCard[1][0] = rand()%15+1;
    }
    if(bCard[3][0]==bCard[2][0])
    {
        bCard[2][0] = rand()%15+1;
    }
    if(bCard[3][0]==bCard[4][0])
    {
        bCard[4][0] = rand()%15+1;
    }


    if(bCard[4][0]==bCard[0][0])
    {
        bCard[0][0] = rand()%15+1;
    }
    if(bCard[4][0]==bCard[1][0])
    {
        bCard[1][0] = rand()%15+1;
    }
    if(bCard[4][0]==bCard[2][0])
    {
        bCard[2][0] = rand()%15+1;
    }
    if(bCard[4][0]==bCard[3][0])
    {
        bCard[3][0] = rand()%15+1;
    }


    bCard[0][1] = rand()%15+16;
    bCard[1][1] = rand()%15+16;
    bCard[2][1] = rand()%15+16;
    bCard[3][1] = rand()%15+16;
    bCard[4][1] = rand()%15+16;


    if(bCard[0][1]==bCard[1][1])
    {
        bCard[1][1] = rand()%15+16;
    }
    if(bCard[0][1]==bCard[2][1])
    {
        bCard[2][1] = rand()%15+16;
    }
    if(bCard[0][1]==bCard[3][1])
    {
        bCard[3][1] = rand()%15+16;
    }
    if(bCard[0][1]==bCard[4][1])
    {
        bCard[4][1] = rand()%15+16;
    }


    if(bCard[1][1]==bCard[0][1])
    {
        bCard[0][1] = rand()%15+16;
    }
    if(bCard[1][1]==bCard[2][1])
    {
        bCard[2][1] = rand()%15+16;
    }
    if(bCard[1][1]==bCard[3][1])
    {
        bCard[3][1] = rand()%15+16;
    }
    if(bCard[1][1]==bCard[4][1])
    {
        bCard[4][1] = rand()%15+16;
    }


    if(bCard[2][1]==bCard[0][1])
    {
        bCard[0][1] = rand()%15+16;
    }
    if(bCard[2][1]==bCard[1][1])
    {
        bCard[1][1] = rand()%15+16;
    }
    if(bCard[2][1]==bCard[3][1])
    {
        bCard[3][1] = rand()%15+16;
    }
    if(bCard[2][1]==bCard[4][1])
    {
        bCard[4][1] = rand()%15+16;
    }


    if(bCard[3][1]==bCard[0][1])
    {
        bCard[0][1] = rand()%15+16;
    }
    if(bCard[3][1]==bCard[1][1])
    {
        bCard[1][1] = rand()%15+16;
    }
    if(bCard[3][1]==bCard[2][1])
    {
        bCard[2][1] = rand()%15+16;
    }
    if(bCard[3][1]==bCard[4][1])
    {
        bCard[4][1] = rand()%15+16;
    }


    if(bCard[4][1]==bCard[0][1])
    {
        bCard[0][1] = rand()%15+16;
    }
    if(bCard[4][1]==bCard[1][1])
    {
        bCard[1][1] = rand()%15+16;
    }
    if(bCard[4][1]==bCard[2][1])
    {
        bCard[2][1] = rand()%15+16;
    }
    if(bCard[4][1]==bCard[3][1])
    {
        bCard[3][1] = rand()%15+16;
    }


    bCard[0][2] = rand()%15+31;
    bCard[1][2] = rand()%15+31;
    bCard[2][2] = 0;
    bCard[3][2] = rand()%15+31;
    bCard[4][2] = rand()%15+31;


    if(bCard[0][2]==bCard[1][2])
    {
        bCard[1][2] = rand()%15+31;
    }
    if(bCard[0][2]==bCard[2][2])
    {
        bCard[2][2] = rand()%15+31;
    }
    if(bCard[0][2]==bCard[3][2])
    {
        bCard[3][2] = rand()%15+31;
    }
    if(bCard[0][2]==bCard[4][2])
    {
        bCard[4][2] = rand()%15+31;
    }


    if(bCard[1][2]==bCard[0][2])
    {
        bCard[0][2] = rand()%15+31;
    }
    if(bCard[1][2]==bCard[2][2])
    {
        bCard[2][2] = rand()%15+31;
    }
    if(bCard[1][2]==bCard[3][2])
    {
        bCard[3][2] = rand()%15+31;
    }
    if(bCard[1][2]==bCard[4][2])
    {
        bCard[4][2] = rand()%15+31;
    }


    if(bCard[2][2]==bCard[0][2])
    {
        bCard[0][2] = rand()%15+31;
    }
    if(bCard[2][2]==bCard[1][2])
    {
        bCard[1][2] = rand()%15+31;
    }
    if(bCard[2][2]==bCard[3][2])
    {
        bCard[3][2] = rand()%15+31;
    }
    if(bCard[2][2]==bCard[4][2])
    {
        bCard[4][2] = rand()%15+31;
    }


    if(bCard[3][2]==bCard[0][2])
    {
        bCard[0][2] = rand()%15+31;
    }
    if(bCard[3][2]==bCard[1][2])
    {
        bCard[1][2] = rand()%15+31;
    }
    if(bCard[3][2]==bCard[2][2])
    {
        bCard[2][2] = rand()%15+31;
    }
    if(bCard[3][2]==bCard[4][2])
    {
        bCard[4][2] = rand()%15+31;
    }


    if(bCard[4][2]==bCard[0][2])
    {
        bCard[0][2] = rand()%15+31;
    }
    if(bCard[4][2]==bCard[1][2])
    {
        bCard[1][2] = rand()%15+31;
    }
    if(bCard[4][2]==bCard[2][2])
    {
        bCard[2][2] = rand()%15+31;
    }
    if(bCard[4][2]==bCard[3][2])
    {
        bCard[3][2] = rand()%15+31;
    }


    bCard[0][3] = rand()%15+46;
    bCard[1][3] = rand()%15+46;
    bCard[2][3] = rand()%15+46;
    bCard[3][3] = rand()%15+46;
    bCard[4][3] = rand()%15+46;


    if(bCard[0][3]==bCard[1][3])
    {
        bCard[1][3] = rand()%15+46;
    }
    if(bCard[0][3]==bCard[2][3])
    {
        bCard[2][3] = rand()%15+46;
    }
    if(bCard[0][3]==bCard[3][3])
    {
        bCard[3][3] = rand()%15+46;
    }
    if(bCard[0][3]==bCard[4][3])
    {
        bCard[4][3] = rand()%15+46;
    }


    if(bCard[1][3]==bCard[0][3])
    {
        bCard[0][3] = rand()%15+46;
    }
    if(bCard[1][3]==bCard[2][3])
    {
        bCard[2][3] = rand()%15+46;
    }
    if(bCard[1][3]==bCard[3][3])
    {
        bCard[3][3] = rand()%15+46;
    }
    if(bCard[1][3]==bCard[4][3])
    {
        bCard[4][3] = rand()%15+46;
    }


    if(bCard[2][3]==bCard[0][3])
    {
        bCard[0][3] = rand()%15+46;
    }
    if(bCard[2][3]==bCard[1][3])
    {
        bCard[1][3] = rand()%15+46;
    }
    if(bCard[2][3]==bCard[3][3])
    {
        bCard[3][3] = rand()%15+46;
    }
    if(bCard[2][3]==bCard[4][3])
    {
        bCard[4][3] = rand()%15+46;
    }


    if(bCard[3][3]==bCard[0][3])
    {
        bCard[0][3] = rand()%15+46;
    }
    if(bCard[3][3]==bCard[1][3])
    {
        bCard[1][3] = rand()%15+46;
    }
    if(bCard[3][3]==bCard[2][3])
    {
        bCard[2][3] = rand()%15+46;
    }
    if(bCard[3][3]==bCard[4][3])
    {
        bCard[4][3] = rand()%15+46;
    }


    if(bCard[4][3]==bCard[0][3])
    {
        bCard[0][3] = rand()%15+46;
    }
    if(bCard[4][3]==bCard[1][3])
    {
        bCard[1][3] = rand()%15+46;
    }
    if(bCard[4][3]==bCard[2][3])
    {
        bCard[2][3] = rand()%15+46;
    }
    if(bCard[4][3]==bCard[3][3])
    {
        bCard[3][3] = rand()%15+46;
    }


    bCard[0][4] = rand()%15+61;
    bCard[1][4] = rand()%15+61;
    bCard[2][4] = rand()%15+61;
    bCard[3][4] = rand()%15+61;
    bCard[4][4] = rand()%15+61;




    if(bCard[0][4]==bCard[1][4])
    {
        bCard[1][4] = rand()%15+61;
    }
    if(bCard[0][4]==bCard[2][4])
    {
        bCard[2][4] = rand()%15+61;
    }
    if(bCard[0][4]==bCard[3][4])
    {
        bCard[3][4] = rand()%15+61;
    }
    if(bCard[0][4]==bCard[4][4])
    {
        bCard[4][4] = rand()%15+61;
    }


    if(bCard[1][4]==bCard[0][4])
    {
        bCard[0][4] = rand()%15+61;
    }
    if(bCard[1][4]==bCard[2][4])
    {
        bCard[2][4] = rand()%15+61;
    }
    if(bCard[1][4]==bCard[3][4])
    {
        bCard[3][4] = rand()%15+61;
    }
    if(bCard[1][4]==bCard[4][4])
    {
        bCard[4][4] = rand()%15+61;
    }


    if(bCard[2][4]==bCard[0][4])
    {
        bCard[0][4] = rand()%15+61;
    }
    if(bCard[2][4]==bCard[1][4])
    {
        bCard[1][4] = rand()%15+61;
    }
    if(bCard[2][4]==bCard[3][4])
    {
        bCard[3][4] = rand()%15+61;
    }
    if(bCard[2][4]==bCard[4][4])
    {
        bCard[4][4] = rand()%15+61;
    }


    if(bCard[3][4]==bCard[0][4])
    {
        bCard[0][4] = rand()%15+61;
    }
    if(bCard[3][4]==bCard[1][4])
    {
        bCard[1][4] = rand()%15+61;
    }
    if(bCard[3][4]==bCard[2][4])
    {
        bCard[2][4] = rand()%15+61;
    }
    if(bCard[3][4]==bCard[4][4])
    {
        bCard[4][4] = rand()%15+61;
    }


    if(bCard[4][4]==bCard[0][4])
    {
        bCard[0][4] = rand()%15+61;
    }
    if(bCard[4][4]==bCard[1][4])
    {
        bCard[1][4] = rand()%15+61;
    }
    if(bCard[4][4]==bCard[2][4])
    {
        bCard[2][4] = rand()%15+61;
    }
    if(bCard[4][4]==bCard[3][4])
    {
        bCard[3][4] = rand()%15+61;
    }
}

void printCard(int bCard[5][5])
{
    printf("\n    B       I       N       G       O    \n");
    printf("-----------------------------------------\n");
    printf("|  %2d   |  %2d   |  %2d   |  %2d   |  %2d   |\n", bCard[0][0], bCard[0][1], bCard[0][2], bCard[0][3], bCard[0][4]);
    printf("-----------------------------------------\n");
    printf("|  %2d   |  %2d   |  %2d   |  %2d   |  %2d   |\n", bCard[1][0], bCard[1][1], bCard[1][2], bCard[1][3], bCard[1][4]);
    printf("-----------------------------------------\n");
    printf("|  %2d   |  %2d   |  %2d   |  %2d   |  %2d   |\n", bCard[2][0], bCard[2][1], bCard[2][2], bCard[2][3], bCard[2][4]);
    printf("-----------------------------------------\n");
    printf("|  %2d   |  %2d   |  %2d   |  %2d   |  %2d   |\n", bCard[3][0], bCard[3][1], bCard[3][2], bCard[3][3], bCard[3][4]);
    printf("-----------------------------------------\n");
    printf("|  %2d   |  %2d   |  %2d   |  %2d   |  %2d   |\n", bCard[4][0], bCard[4][1], bCard[4][2], bCard[4][3], bCard[4][4]);
    printf("-----------------------------------------\n");
}

int PickNumber()
{
    srand(time(0));
    int i, pick, temp;
    pick = rand()%75+1;
    int check[75];
    for(i = 0; i < 75; i++)
    {
        if(check[i]==pick)
        {
            PickNumber();
        }
    }
    temp = pick;
    check[i]=pick;
    printf("The next number is ");
    if((pick>=1)&&(pick<=15))
    {
        printf("B");
    }
    else if((pick>=16)&&(pick<=30))
    {
        printf("I");
    }
    else if((pick>=31)&&(pick<=45))
    {
        printf("N");
    }
    else if((pick>=46)&&(pick<=60))
    {
        printf("G");
    }
    else if((pick>=61)&&(pick<=75))
    {
        printf("O");
    }
    printf("%d", pick);
    return pick;
}

bool exist(int num, int bCard[5][5])
{
    int r,c;
    for(r = 0; r < 5; r++)
    {
        for(c = 0; c < 5; c++)
        {
            if(bCard[r][c]==num)
            {
                bCard[r][c]=0;
                return true;
            }
        }
    }
}

bool rowCheck(int bCard[5][5])
{
    if((bCard[0][0]==0)&&(bCard[0][1]==0)&&(bCard[0][2]==0)&&(bCard[0][3]==0)&&(bCard[0][4]==0))
    {
        return true;
    }
    else if((bCard[1][0]==0)&&(bCard[1][1]==0)&&(bCard[1][2]==0)&&(bCard[1][3]==0)&&(bCard[1][4]==0))
    {
        return true;
    }
    else if((bCard[2][0]==0)&&(bCard[2][1]==0)&&(bCard[2][2]==0)&&(bCard[2][3]==0)&&(bCard[2][4]==0))
    {
        return true;
    }
    else if((bCard[3][0]==0)&&(bCard[3][1]==0)&&(bCard[3][2]==0)&&(bCard[3][3]==0)&&(bCard[3][4]==0))
    {
        return true;
    }
    else if((bCard[4][0]==0)&&(bCard[4][1]==0)&&(bCard[4][2]==0)&&(bCard[4][3]==0)&&(bCard[4][4]==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool columnCheck(int bCard[5][5])
{
    if((bCard[0][0]==0)&&(bCard[1][0]==0)&&(bCard[2][0]==0)&&(bCard[3][0]==0)&&(bCard[4][0]==0))
    {
        return true;
    }
    else if((bCard[0][1]==0)&&(bCard[1][1]==0)&&(bCard[2][1]==0)&&(bCard[3][1]==0)&&(bCard[4][1]==0))
    {
        return true;
    }
    else if((bCard[0][2]==0)&&(bCard[1][2]==0)&&(bCard[2][2]==0)&&(bCard[3][2]==0)&&(bCard[4][2]==0))
    {
        return true;
    }
    else if((bCard[0][3]==0)&&(bCard[1][3]==0)&&(bCard[2][3]==0)&&(bCard[3][3]==0)&&(bCard[4][3]==0))
    {
        return true;
    }
    else if((bCard[0][4]==0)&&(bCard[1][4]==0)&&(bCard[2][4]==0)&&(bCard[3][4]==0)&&(bCard[4][4]==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool diagonalCheck(int bCard[5][5])
{
    if((bCard[0][0]==0)&&(bCard[1][1]==0)&&(bCard[2][2]==0)&&(bCard[3][3]==0)&&(bCard[4][4]==0))
    {
        return true;
    }
    else if((bCard[4][0]==0)&&(bCard[3][1]==0)&&(bCard[2][2]==0)&&(bCard[1][3]==0)&&(bCard[0][4]==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int win=0;
    int bingoCard[5][5];
    int counter=0;

    FillBingoCard(bingoCard);
    printCard(bingoCard);
    bool trueFalse = false;
    bool rWin, cWin, dWin;

    while((win==0)&&(counter<150))
    {
        int number = PickNumber();
        char input;
        int r, c;
        printf("\n\nDo you have it? (Y/N)");
        scanf("%c", &input);
        if(input=='Y')
        {
            counter++;
            trueFalse=exist(number, bingoCard);
            if(trueFalse==false)
            {
                printf("\nThat value is not on your BINGO card - are you trying to cheat??\n\n");
            }
            else
            {
                rWin=rowCheck(bingoCard);
                cWin=columnCheck(bingoCard);
                dWin=diagonalCheck(bingoCard);
            }
        }
        else
        {
            counter++;
            printCard(bingoCard);
        }
        if(rWin==true)
        {
            win++;
        }
        if(cWin==true)
        {
            win++;
        }
        if(dWin==true)
        {
            win++;
        }
    }
    if((rWin==true)&&(cWin==true)&&(dWin==true))
    {
        printCard(bingoCard);
        printf("\nYou filled out a row, a column, and a diagonal - BINGO\n!!!");
    }
    else if((rWin==true)&&(cWin==true)&&(dWin==false))
    {
        printCard(bingoCard);
        printf("\nYou filled out a row and a column - BINGO!!!\n");
    }
    else if((rWin==false)&&(cWin==true)&&(dWin==true))
    {
        printCard(bingoCard);
        printf("\nYou filled out a column and a diagonal - BINGO\n!!!");
    }
    else if((rWin==true)&&(cWin==false)&&(dWin==true))
    {
        printCard(bingoCard);
        printf("\nYou filled out a row and a diagonal - BINGO!!!\n");
    }
    else if((rWin==true)&&(cWin==false)&&(dWin==false))
    {
        printCard(bingoCard);
        printf("\nYou filled out a row - BINGO!!!\n");
    }
    else if((rWin==false)&&(cWin==true)&&(dWin==false))
    {
        printCard(bingoCard);
        printf("\nYou filled out a column - BINGO!!!\n");
    }
    else if((rWin==false)&&(cWin==false)&&(dWin==true))
    {
        printCard(bingoCard);
        printf("\nYou filled out a diagonal - BINGO!!!\n");
    }
}
