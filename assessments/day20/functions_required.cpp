#include "libmgt.h"

void menuDisplay(void)
{
	cout << "\t0.\t listing books " << endl;
	cout << "\t1.\tsearch " << endl;
	cout << "\t2.\t returning book " << endl;
	cout << "\t3.\t renting " << endl;
	cout << "\t4.\t deletion " << endl;
	cout << "\t5.\t updating " << endl;
	cout << "\t6.\t adding " << endl;
	cout << "\t7.\t exit () " << endl;
}

void listSwitch(int num)
{
	int n;
	char name1[MAX];
	switch (num)
	{
	case 0: //listing books

		listing();
			break;
	case 1: //search
		search();
		break;
	case 2: //returning book 
		

		returning_book(name1, strlen(name1));
		break;
	case 3: //renting
		cout << "enter the name of the book to be rented "<<endl;
		cin.getline(name1, 99);
		renting(name1,strlen(name1));
		break;
	case 4: //deletion
		deletion();
		break;
	case 5: //updating not required
		//updating();
		break;
	case 6: //adding ()
	
		cout << "number of books to be added";
		cin >> n;
		adding(n);
		menuDisplay();
		break;
		
	case 7: //exit ()

		exit(0);

	}
}

int adding(int numBooksAdded)
{
	numBooks+= numBooksAdded;
	//int num = numBooks;

	//library l1[MAX];

	for(int i=0;i< numBooksAdded;i++) // add s  eg 5 books
	{
		// get author ip 
		cout << "enter the author :" << endl;
		cin.getline(l1[i].author,99);
		
		// get title ip
		cout << "enter the title of book :" << endl;
		cin.getline(l1[i].title, 99);

		// get genre ip
		cout << "enter the genre of book :" << endl;
		cin.getline(l1[i].genre, 19);
		

	}
	cout << "updated the list" << endl;

	
	return 0;

}

int renting(char name[], int len)
{
	int res = searching(name, len,1);
	if (res == -1)
		cout << "book not found"<<endl;
	else
	{
		l1[res].ch = 'R';
		cout << l1[res].title << " have rented the book" << endl;

	}

	return 0;
}


int returning_book(char name[], int len)
{
	int res = searching(name, len, 1);
	if (res == -1)
		cout << "book not found" << endl;
	else
	{
		l1[res].ch = 'A';
		cout << l1[res].title << " have returned the book" << endl;

	}

	return 0;
}
