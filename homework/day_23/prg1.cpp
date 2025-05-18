/*
  Title-   MINI inventory

  to create an inventory management system .
  simple inventory managemenet ,menu driven , add products, types, category , provide add/remove/
  update inventory /search.

*/

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

}PROD ;

typedef struct stock
{
	int s_prod_id;
	int stockQuantity;
	int stockPrice;

}STOCK ;

PROD p[10];
STOCK s[10];

void menu();

int add(PROD*, STOCK*);//done
void list(PROD*, STOCK*);//done


int main()
{
	int choice;
	int n, i, j;
	while (true)
	{
		menu();
		cin >> choice;
		switch (choice)
		{
		case 0:
			cout << "enter the number to be added";
			cin >> n;
			n = inv_id + n;
			for (i = inv_id;i < n;i++)
			{
				add(&p[i], &s[i]);
			}
			break;
		case 1:
			for (i = 0;i < inv_id;i++)
			{
				list(&p[i], &s[i]);
			}
			break;
		case 2:
			//update();
			break;
		case3:
			exit(0);
			break;

		default:
			cout << "wrong choice :" << endl;
			break;
		}

	}




	return 0;
}



//
// functions
//
void menu()
{
	cout << "mini inventory menu :" << endl;
	cout << "choose from the below list:" << endl;
	cout << "0. add()" << endl;
	cout << "1. list()" << endl;
	cout << "2. update()" << endl;
	cout << "3. exit()" << endl;

}







int add(PROD* p, STOCK* s)
{
	cout << "enter name:";cin >> p->prodName;
	cout << "enter category:";cin >> p->prodCategory;
	cout << "enter quantity:";cin >> s->stockQuantity;
	cout << "enter price:";cin >> s->stockPrice;

	if (s->stockQuantity > 0)
		p->prodIsAvailable = true;
	else
		p->prodIsAvailable = false;

	p->removeProd = false;// creates the product 

	p->prod_id = s->s_prod_id = ++inv_id;




	return EXIT_SUCCESS;

}

void list(PROD* p, STOCK* s)
{
	if (p->removeProd == false)
	{
		cout << "========================================" << endl;
		cout << "prod name      :\t" << p->prodName << endl;
		cout << "prod id        :\t" << p->prod_id << endl;
		cout << "prod category  :\t" << p->prodCategory << endl;

		cout << "quantity       :\t" << s->stockQuantity << endl;
		cout << "price          :\t" << s->stockPrice << endl;

		if (p->prodIsAvailable == true)
			cout << "product available for sale " << endl;
		else
			cout << "product not available for sale as -- stock is empty" << endl;


		cout << "========================================" << endl;
	}
	else
	{
		cout << "the item/product was removed from the inventory. " << endl;
	}

}

int update(PROD* p, STOCK* s, int iv)
{
	cout << "enter name:";cin >> p->prodName;
	cout << "enter category:";cin >> p->prodCategory;
	cout << "enter quantity:";cin >> s->stockQuantity;
	cout << "enter price:";cin >> s->stockPrice;

	if (s->stockQuantity > 0)
		p->prodIsAvailable = true;
	else
		p->prodIsAvailable = false;

	return EXIT_SUCCESS;

}




