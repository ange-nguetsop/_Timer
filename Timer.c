// Timer.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#pragma warning(disable: 4996)

void main(void)

{
	short m = 0, s = 0, h =0;
	short d = 0;

	printf("\nAnfangswerte eingeben: ");

	printf("\nUhr: ");
	scanf("%hu", &h);
	while (getchar() != '\n');

	printf("\nMinuten: ");
	scanf("%hu", &m);
	while (getchar() != '\n');


	printf("\nSekunden: ");
	scanf("%hu", &s);
	while (getchar() != '\n');

	if (h>24 || m > 59 || s > 59 )
	{
		printf("ERROR\n");
	}
	if (m == 0 && s == 0 && h== 0 )
	{
		printf("ERROR\n");
	}

	if ( h== 0 && m == 0 && s != 0)
	{
		while (s != 0)
		{
			printf("Timer: \n %02hu:%02hu:%02hu",h, m, s);
			Sleep(1000);
			system("cls");
			s = s - 1;
		}
	}
	

	else if (h==0 && m > 0 && s >= 0)
	{
		do
		{ 
			printf("Timer: \n %02hu:%02hu:%02hu",h, m, s);
			Sleep(1000);
			system("cls");

			switch (s) 
			{

			case 0:
			{
				s = 60;
				m = m - 1;
				s = s - 1;
				break;
			}
			default:
				s = s - 1;
			}
			
					
		} while (m > 0 || s > 0);
	}

	else if (h > 0 && m >= 0 && s >= 0)
	{
		do
		{
			printf("Timer: \n %02hu:%02hu:%02hu", h, m, s);
			Sleep(1000);
			system("cls");

			if (s == 0)
			{
				s = 60;
				m = m - 1;
				s = s - 1;
				if (m == -1)
				{
					m = 60;
					m = m - 1;
					h = h - 1;
				}
			}
			else
				s = s - 1;
		} while (h > 0 || m > 0 || s > 0);

	}
	printf("\nTimer: \n %02hu:%02hu:%02hu", h, m, s);
	printf("\nTimer zu Ende");

}