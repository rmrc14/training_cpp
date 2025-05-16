#include<iostream>
#include<cctype>
#include<cstring>
#include<stdlib.h>
#include<stdio.h>


#define MAX 100
static int numBooks = 0;

using namespace std;

int menuDisplay(void);
int adding(int numBooksAdded);
int renting(char name[], int len);
int searching(char name[], int len, int choice);
int deletion(char name[], int len);
int displaysearching(void);
void displaybook(int iv);
int returning_book(char name[], int len);
void listSwitch(int cases);


struct library
{
	char author[MAX];
	char title[MAX];
	char genre[20];
	bool flag;
}l1[MAX];



int main()
{

	int ret;

	//adding(num);

	while (true)
	{
		listSwitch(menuDisplay());
	}
		
	return 0;
}







int menuDisplay(void)
{
	int choice;
	cout << "\t0.\t listing books " << endl;
	cout << "\t1.\t search " << endl;
	cout << "\t2.\t returning book " << endl;
	cout << "\t3.\t renting " << endl;
	cout << "\t4.\t deletion " << endl;
	cout << "\t5.\t updating " << endl;
	cout << "\t6.\t adding " << endl;
	cout << "\t7.\t exit () " << endl;
	cin >> choice;
	cin.ignore();
	return choice;
}

// adding content int library
int adding(int numBooksAdded)
{
	numBooks += numBooksAdded;


	for (int i = 0;i < numBooksAdded;i++) // add s  eg 5 books
	{
		// get author ip 
		cout << "enter the author :" << endl;
		cin.ignore();
		cin.getline(l1[i].author, 99);

		// get title ip
		cout << "enter the title of book :" << endl;
		cin.ignore();
		cin.getline(l1[i].title, 99);

		// get genre ip
		cout << "enter the genre of book :" << endl;
		cin.ignore();
		cin.getline(l1[i].genre, 19);

		l1[i].flag = false;

	}
	cout << "updated the list" << endl;


	return 0;

}


void listSwitch(int num)
{
	int n;
	char name1[MAX];
	int choice2 = -1;
	int res;
	switch (num)
	{
	case 0: //listing books
		
		displaybook(numBooks);

		break;
	case 1: //search

		cout << "enter the name of the book to be rented " << endl;
		cin.ignore();
		res = searching(name1, strlen(name1), displaysearching());
		displaybook(res);
		//searching(name1,strlen(name1), choice2);
		// display all the value in index location received from searching using another function

		break;
	case 2: //returning book 


		returning_book(name1, strlen(name1));
		break;
	case 3: //renting
		cout << "enter the name of the book to be rented " << endl;
		cin.ignore();
		cin.getline(name1, 99);
		renting(name1, strlen(name1));
		break;
	case 4: //deletion
		cout << "get the title of book to be deleted:" << endl;
		cin.ignore();
		cin.getline(name1, 99);
		deletion(name1, strlen(name1));
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

// renting the content in library changes the ch value to 'r' to indicate rented 'a' otherwise
int renting(char name[], int len)
{
	int res = searching(name, len, 1);
	if (res == -1)
		cout << "book not found" << endl;
	else
	{
		l1[res].flag = true;
		cout << l1[res].title << " have rented the book" << endl;

	}

	return 0;
}

//  changes the ch value from 'r' to indicate rented  to 'a' to indicate available
int returning_book(char name[], int len)
{
	int res = searching(name, len, 1);
	if (res == -1)
		cout << "book not found" << endl;
	else
	{
		l1[res].flag = false;
		cout << l1[res].title << " have returned the book" << endl;

	}

	return 0;
}


// delete the content in struct and decrease the count of numBooks 
// and also the next content in l1[] is brought occupied 
int deletion(char name[], int len) // check error
{
	int res = searching(name, len, 1);
	if (res == -1)
		cout << "book not found" << endl;
	else
	{
		cout << "count of book :" << numBooks;
		numBooks--;
		for (int i = res;i < numBooks + 1;i++)
		{
			for (int j = 0;j < len;j++)
			{
				l1[i].author[j] = l1[i + 1].author[j];

				l1[i].title[j] = l1[i + 1].title[j];
				l1[i].flag = l1[i + 1].flag;
			}
		}
		cout << " have deleted the book" << endl;
		cout << "count of book :" << numBooks;

	}

	return 0;


}

int displaysearching()
{
	int choice;
	cout << "Search by:\n";
	cout << "0 - Author\n";
	cout << "1 - Title\n";
	cout << "2 - Genre\n";
	cout << "3 - break \n";
	cin >> choice;
	return choice;
}


void displaybook(int iv)
{
	for (int i = 0;i < iv;i++)
	{
		cout << l1[i].author << endl;
		cout << l1[i].title << endl;
		cout << l1[i].genre << endl;
		if (l1[i].flag == false)
			cout << "available to rent" << endl;
		else
			cout << "not available to rent" << endl;
	}

}


int searching(char name[], int size, int choice)

{

	int i = 0;

	switch (choice)
	{

	case 0: // Author
		for (i = 0;i < numBooks;i++)
		{
			if (strcmp(l1[i].author, name) == 0)

				return i;
			else
				continue;
		}
		return -1;
		break;

	case 1: // Title

		for (i = 0;i < numBooks;i++)
		{
			if (strcmp(l1[i].title, name) == 0)
				return i;
			else
				continue;
		}

		return -1;
		break;


	case 2: // Genre

		for (i = 0;i < numBooks;i++)
		{
			if (strcmp(l1[i].genre, name) == 0)

				return i;
			else
				continue;
		}

		return -1;
		break;

	case 3:
		break;
	default:

		cout << " not valid choice" << endl;
		displaysearching();

		return -1;
	}

	return -1;
}






