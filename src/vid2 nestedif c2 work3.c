/*
 ============================================================================
 Name        : vid2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	setbuf(stdout,NULL);
	printf("Enter 3 numbers ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
		if(a>c)
			printf("Greatest number is %d",a);
		else
			printf("Greatest number is %d",c);
	else if(b>c)
		printf("Greatest number is %d",b);
	else
		printf("Greatest number is %d",c);
	return EXIT_SUCCESS;
}
