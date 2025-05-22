//#pragma once
#ifndef __ARRAYMANIPULATION__
#define __ARRAYMANIPULATION__


#include<iostream>
#include<string.h>
#include<string>
using namespace std;

class ArrayManipulations
{
private:
	int* arr;
	int size;
	int* ascSort();
	int* descSort();
	int biggestElement();

public:

	void displayAsc();
	void displayDesc();
	void dispBiggest();

	ArrayManipulations(int[], int);

};
#endif