#include <iostream>
#include <stdio.h>
#include "Arithmeric_Library.h"
using namespace std;
using namespace arithmetic;

int main(void)
{
	printf("Hello, World!\n");

	Arithmetic a;
	printf("%d\n", a.add(10, 20));
	printf("%.1f\n", a.add(10.2f, 30.5f));

	return 0;
}