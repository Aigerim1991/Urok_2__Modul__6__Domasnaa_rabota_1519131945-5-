#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int d;
	do
	{
		printf("������� ����� ������: ");
		scanf("%d", &d);
		switch (d)
		{
		case 1:
		{
			int n, k;
			scanf("%d %d", &n, &k);
			printf("�������� �� ����� �������� � �������� ����� N? -%d\n",IsPowerN(k, n));
		}
		break;
		case 2:
		{
			int n;
			printf("������� ����� N: ");
			scanf("%d", &n);
			printf("%d\n",isPrime(n));
		}
		break;
		case 3:
		{
			int K, N;
			printf("N = ");
			scanf("%d\n",&N);
			for (int i = 0; i < 5; i++)
			{
				printf(" K: %d = ", i + 1);
				scanf("%d\n", &K);
				printf("������� %d\n", DigitN(K, N));
			}
		}
		break;
		case 4:
		{
		float D;
			printf("������� ������ D=");
			scanf("%f", &D);
			DegToRad(D);
		}
		break;
		case 5:
		{
			float D;
		printf("������� ������ D=");
		scanf("%f", &D);
		RadToDeg(D);		
		}
		break;		
		case 6:
		{
			int n;
			printf("n = ");
			scanf("%d\n", &n);
			Fact(n);
		}
		break;
		default:
			break;
		}

	} while (d > 0);






}