#include <stdio.h>
#include <conio.h>

int faktorial (int a);

main()
{
	int n;

	printf ("masukkan bilangan; ");
	scanf("%d", &n);
	printf("faktorial %d = %d", n, faktorial(n));
	getch();
}

int faktorial (int b)
{
	if(a==0) {
		return 1;
	}else {
	return b * faktorial (b - 1);
		return a * faktorial (b - 1);
	}
}