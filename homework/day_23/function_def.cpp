#include"header.h"
//#include<iostream>
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

	if(s->stockQuantity>0)
		p->prodIsAvailable = true;
	else
		p->prodIsAvailable = false;

	p->removeProd = false;// creates the product 
	
	p->prod_id =s->s_prod_id = ++inv_id;




	return EXIT_SUCCESS;

}

void list(PROD* p, STOCK* s)
{
	if(p.removeProd==false)
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


		
	}
	else
	{
		cout << "the item/product was removed from the inventory. " << endl;
	}
	cout << "========================================" << endl;
}

int update(PROD* p, STOCK* s,int iv)
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


//int delete_remove(PROD* p, int iv)
//{
//	p->removeProd = true;
//
//
//
//	return EXIT_SUCCESS;
//}
//
//int search(string arr)
//{
//	int iv;
//	for(int i=0;i< inv_id;i++)
//	{
//		if (strcmp(arr, p[iv].prodName) == 0)
//			list(&p[iv], &s[iv]);
//	}
//
//	return iv;
//}