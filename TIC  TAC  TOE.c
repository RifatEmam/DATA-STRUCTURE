#include <stdio.h>

#include <math.h>
#include <string.h>
#include<conio.h>
#include<stdlib.h>
char gameboard[3][3];
void drawboard();
int showresult (char ch);
int validateinput(int cell);
void turnplayerO(int *pcell);
void turnplayerX(int *pcell);
void getrowcol(int cell,int *pX,int *pY);



int main()
{

    int X=0,Y=0,row=0,col=0,selectedcell=0,availablecell=9;
    char startchar = '1';

    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
            gameboard[row][col]=startchar++;

    }

    drawboard();

    while(availablecell>0)
    {
        turnplayerX(&selectedcell);
        getrowcol(selectedcell,&X,&Y);
        gameboard[X][Y]='X';
        availablecell-=1;
        system("cls");
        drawboard();
        if(showresult('X')==1)
        {
            break;
        }
        else if(availablecell==0)
        {
            printf("\n game drawn");
            break;
        }
        turnplayerO(&selectedcell);
        getrowcol(selectedcell,&X,&Y);
        gameboard[X][Y]='O';
        availablecell-=1;
        system("cls");
        drawboard();
        if(showresult('O')==1)
        {
            break;
        }
        else if(availablecell==0)
        {
            printf("\n game drawn");
            break;
        }


    }

    return 0;
}

void drawboard()
{
    int i,j;
    printf("\n TIC TAC TOE");
    printf("\n Digits (1-9) indicates valid cell number\n");
    printf("\n %c | %c | %c ",gameboard[0][0],gameboard[0][1],gameboard[0][2]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c ",gameboard[1][0],gameboard[1][1],gameboard[1][2]);
    printf("\n---|---|---");
    printf("\n %c | %c | %c ",gameboard[2][0],gameboard[2][1],gameboard[2][2]);



}

void turnplayerO(int*pcell)
{

    int cell;
    do
    {
        printf("\n player O,\n selected valid number : ");
        scanf("%d",&cell);
    }
    while(0==validateinput(cell));
    *pcell=cell;
}

void turnplayerX(int*pcell)
{

    int cell;
    do
    {
        printf("\n player X,\n selected valid number : ");
        scanf("%d",&cell);
    }
    while(0==validateinput(cell));
    *pcell=cell;
}
void getrowcol(int cell,int*pX,int *pY)
{
    *pX=(cell-1)/3;
    *pY=(cell-1)%3;
}
int validateinput(int cell)
{
    int row,col;
    if(cell<1 || cell>9)
    {
        return 0;

    }
    getrowcol(cell,&row,&col);
    if('O'==gameboard[row][col]  ||  'X'==gameboard[row][col] )
    {
        return 0;
    }
    return 1;



}
int showresult(char ch)
{
    int status=0;
    if(gameboard[0][0]==ch && gameboard[1][1]==ch && gameboard[2][2]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;
    }
    else if(gameboard[0][2]==ch && gameboard[1][1]==ch && gameboard[2][0]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;

    }
    else if(gameboard[0][0]==ch && gameboard[1][0]==ch && gameboard[2][0]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;

    }
    else if(gameboard[1][0]==ch && gameboard[1][1]==ch && gameboard[1][2]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;

    }
    else if(gameboard[2][0]==ch && gameboard[2][1]==ch && gameboard[2][2]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;

    }
    else if(gameboard[0][0]==ch && gameboard[0][1]==ch && gameboard[0][2]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;

    }
    else if(gameboard[0][1]==ch && gameboard[1][1]==ch && gameboard[2][1]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;

    }
    else if(gameboard[0][2]==ch && gameboard[1][2]==ch && gameboard[2][2]==ch)
    {

        printf("\n player %c is winner ",ch);
        status=1;

    }
    return status;


}
