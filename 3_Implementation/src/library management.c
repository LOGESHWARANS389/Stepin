#include<library management.h>

void mainmenu()
{
    system("cls");
	int i;
	gotoxy(20,3);
	printf("MAIN MENU ");
	
	gotoxy(20,5);
	printf("1. Add Books   ");
	gotoxy(20,7);
	printf("2. Delete books");
	gotoxy(20,9);
	printf("3. view book list\n");
	gotoxy(20,11);
	
	printf("Enter your choice:");
	switch(getch())
	{
		case '1':
		addbooks();
		break;
	case '2':
		deletebooks();
		break;
	case '3':
		viewbooks();
		break;

	default:
		{
		gotoxy(10,23);
		printf("\aWrong Entry!!Please re-entered correct option");
		if(getch())
		mainmenu();
		}

    }
}

void returnfunc(void)
{
    {
	printf(" Press ENTER to return to main menu");
    }
    a:
    if(getch()==13) //allow only use of enter
    mainmenu();
    else
    goto a;
}


void loaderanim()
{
int loader;
system("cls");
gotoxy(20,10);
printf("LOADING........");
printf("\n\n");
gotoxy(22,11);
for(loader=1;loader<20;loader++)
{
delay(100);printf("%c",219);}
}
