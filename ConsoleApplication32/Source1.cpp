#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>
#include "Header.h"
#define p 3.14
bool IsPowerN(int K, int N)
{
	for (int i = 0; i < 10; i++)
	{
while (!(K % N)) K /= N;
	return (K == 1);
	}
	
}
bool isPrime(int n)
{
	int kol = 0;
	for (int i = 1; i <= 10; i++)
		if (n % i == 0)
		{
			kol++;
			printf ("Количсетво простых чисел в данном наборе - %d\n", kol);
		}
		else
			return false;

	return n > 1;
}
int DigitN(int K, int N) 
{
	do
	{
		if (N > 0)
			return K % 10;
	} while (K /= 10);
	return -1; 			   
}
float DegToRad( float D)
{

	int i;
	for ( i= 1; i < 5; i++)
	{
		D = (D*p )/ 180;//формула как перевести из градусов в радаинаы
	printf("В каждом угле %d радиан равен = %f\n",i, D);	 
	}
	
	return D;
}
float RadToDeg(float D)
{

	int i;
	for (i = 1; i < 5; i++)
	{
	D = (D*180) / p;//формула как перевести из радианов в градусы
		printf("В каждом угле %d градус равен = %f\n", i, D);
	}

	return D;
}
int Fact(int N)
{
	int f = 1;
	int i;
	for ( i= 0; i < N; i++)
	{
		 f=f* N;
printf("Факториал каждого %d равен = %d\n", i + 1, f);
	}		
	
	return N;
}
