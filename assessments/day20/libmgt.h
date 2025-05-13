#pragma once
#include<iostream>
#define MAX 100
static int numBooks = 0;

using namespace std;

void menuDisplay(void);
int adding(int numBooksAdded);
int renting(char name, int len);
//void listSwitch(int cases);
//int adding();

struct library {
	char author[MAX];
	char title[MAX];
	char genre[20];
	char ch = 'a';
};