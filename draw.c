#include<stdio.h>
#include<windows.h>
void draw_xy_line01(int a,int b);
void gotoxy(int x,int y);
int main()
{
	int a, b;
	printf("y=ax+b�� ���� ���� ��ǥ�� Ǯ��\n");
	printf("���� a�Է�>");
	scanf("%d",&a);
	printf("���� b�Է�>");
	scanf("%d",&b);
	printf("cls");
	draw_xy_line01(a,b);
	printf("\n");
	return 0; 
}
void gotoxy(int x, int y)
{
	COORD Pos = {x-1,y-1};

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);    
}
void draw_xy_line01(int a, int b)
{
	int x,y;
	for(x=1; x<=10; x++)
	{
		y = a*x + b;
			gotoxy(x, y);
			printf("*");
	}
}
