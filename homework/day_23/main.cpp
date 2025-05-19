/*
  Title-   MINI inventory

  to create an inventory management system .
  simple inventory managemenet ,menu driven , add products, types, category , provide add/remove/
  update inventory /search.

*/

#include "header.h"


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
			update(&p[n], &s[n], n);
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