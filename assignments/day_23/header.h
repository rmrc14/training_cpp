#pragma once

#include<iostream>
#include<string>




using namespace std;

static int inv_id = 0;

typedef struct product
{
	int prod_id;
	string prodName;
	string prodCategory;
	bool prodIsAvailable;
	bool removeProd;

}PROD;

typedef struct stock
{
	int s_prod_id;
	int stockQuantity;
	int stockPrice;

}STOCK;

extern PROD p[10];
extern STOCK s[10];

void menu();

int add(PROD*, STOCK*);//done
void list(PROD*, STOCK*);//done

int update(PROD*, STOCK*, int);
int delete_remove(PROD*);


int search(const string&);

