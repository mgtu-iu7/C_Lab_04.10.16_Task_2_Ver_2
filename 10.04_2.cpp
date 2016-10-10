//Palindrome sequence task.

#include "stdafx.h" 
#include <conio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, inversion, base, residual;

	printf("Enter positive a:\n");
	scanf_s("%d", &a);

	printf("\nEnter positive b:\n");
	scanf_s("%d", &b);

	if (a > 9 && b > a) {
		while (a <= b) {
			inversion = 0;
			base = a;
			while (base != 0) {
				residual = base % 10;
				inversion = (inversion * 10) + residual;
				base /= 10;
			}
			if (a == inversion) {
				printf("\nPalindrome: %d", a);
			}
			a++;			
		}
	}
	else {
		printf("\nEnter a > 9 and b > a");
	}

	_getch();
	return 0;
}
