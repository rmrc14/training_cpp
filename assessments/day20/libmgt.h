#pragma once
#include<iostream>
#define MAX 100
static int numBooks = 0;

using namespace std;

int menuDisplay(void);
int adding(int numBooksAdded);
int renting(char name[], int len);
int searching(char name[], int len, int choice);
//int deletion(char name[], int len);
int displaysearching(void);
void displaybook(int iv);
int returning_book(char name[], int len);
void listSwitch(int cases);
int adding(int);

struct library 
{
	char author[MAX];
	char title[MAX];
	char genre[20];
	bool flag;
}l1[MAX];

