#include<windows.h>
#include<stdio.h>

void gotoxy(int x, int y)
{
    COORD c;
    c.X=x;
    c.Y=y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
main()
{
    int x=30,y=10;
    char ch;
    gotoxy(x,y);
    while(1)
    {
        ch=getc;
        switch(ch){
            case 'a':
                x--;
            break;
            case 'd':
                x++;
            break;
            case 'w':
                y--;
            break;
            case 'x':
                y++;
            break;
            case 27:
            exit(0);
        }
        system("cls");
        gotoxy(x,y);
        printf("Pranay Sanjule");
    }
}