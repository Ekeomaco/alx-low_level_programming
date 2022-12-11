#!/bin/bash

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry
 * print the value of n status; zero, positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);

}

