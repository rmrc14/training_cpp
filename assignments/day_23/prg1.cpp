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

int update(PROD*, STOCK*,int);
int delete_remove(PROD*);


int search(const string&);

//
//                  MAIN()
//

int main()
{
	int choice;
	int n, i;
	string searchName;

	while (true)
	{
		menu();
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 0:

			cout << "enter the number to be added";
			cin >> n;
			n = inv_id + n;
			if (!(n > 10))
			{
				for (i = inv_id;i < n;i++)
				{
					add(&p[i], &s[i]);
					cout << endl;
				}
			}
			else
			{
				cout << "inventory full:\n";
				break;
			}
			break;
		case 1:

			for (i = 0;i < inv_id;i++)
			{
				list(&p[i], &s[i]);
				cout << endl;
			}
			break;

		case 2:

			cout << "enter the id of Item/product to be edited " << endl;
			cin >> n;
			n = n - 1;
			if (n < 0 || n >= inv_id || p[n].removeProd)
			{
				cout << "Invalid ID or product was removed.\n";
				break;
			}
			update(&p[n],&s[n],n);
			cout << " the content was updated:  " << endl;
			list(&p[n], &s[n]);
			cout << "\t -----------------------" << endl;

			break;

		case 3:

			cout << "Enter product ID to delete: ";
			cin >> n;
			if (n < 0 || n >= inv_id || p[n].removeProd) 
			{
				cout << "Invalid ID or product already removed.\n";
				break;
			}
			delete_remove(&p[n]);
			cout << "Product removed from inventory.\n";
			break;
			
		case 4:
			
			cout << "Enter product name to search: ";
			cin >> searchName;
			search(searchName);
			break;

			
		case 5:

			cout << "Exiting program.\n";
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
//    ----------------      functions          --------------------------------
//
void menu()
{
	cout << "mini inventory menu :" << endl;
	cout << "choose from the below list:" << endl;
	cout << "0. add()" << endl;
	cout << "1. list()" << endl;
	cout << "2. update()" << endl;
	cout << "3. Delete Product\n";
	cout << "4. Search Product\n";
	cout << "5. exit()" << endl;

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


		
	}
	else
	{
		cout << "the item/product : "<< p->prod_id <<" was removed from the inventory. " << endl;
	}
	cout << "========================================" << endl;
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




int delete_remove(PROD* p)
{
	p->removeProd = true;



	return EXIT_SUCCESS;
}

int search(const string& name)
{
	
	for(int i=0;i< inv_id;i++)
	{
		if (!p[i].removeProd && p[i].prodName == name)
		{
			list(&p[i], &s[i]);
			return i;
		}
	}
	cout << "not found element:\n";
	return -1;
}