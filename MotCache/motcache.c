/*
 ============================================================================
 Name        : ctest.c
 Author      : sam
 Version     : v1
 Copyright   : Your copyright notice
 Description : read txt and print it out
 ============================================================================*/
#include<stdio.h>
//#include "grilletest1.txt"
	main()
	{
		FILE *fp;
		char ch;

//		if((fp=fopen("e:\\Documents\\Desktop\\motCache\\Tests\\grilleTest1.txt","rt"))==NULL)
		if((fp=fopen("grilletest1.txt","rt"))==NULL)
		{
			printf("\nCannot open file strike any key exit!");
			getch();
			exit(1);
		}
		ch=fgetc(fp);

		while(ch!=EOF)
		{
		putchar(ch);
		ch=fgetc(fp);
		}
		fclose(fp);
	