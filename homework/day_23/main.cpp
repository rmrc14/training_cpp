/*
  Title-   MINI inventory

  to create an inventory management system .
  simple inventory managemenet ,menu driven , add products, types, category , provide add/remove/
  update inventory /search.

*/

#include "header.h"


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
			for(i=inv_id;i<n;i++)
			{
				add(&p[i],&s[i]);
			}
			break;
		case 1:
			for (i = 0;i < inv_id;i++)
			{
				list(&p[i],&s[i]);
			}
			break;
		case 2:
			update();
			break;
		case3:
			exit();
			break;

		default:
			cout << "wrong choice :" << endl;
			break;
		}

	}

	


	return 0;
}





