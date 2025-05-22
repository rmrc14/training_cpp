/*
Q2.Movie Rating System
Problem:
Create a class Movie with members: title, genre, rating (out of 10). 
Write functions to accept movie details and another 
function to print "Hit", "Average", or "Flop" based on the rating.

*/


#include<iostream>
#include<string>

using namespace std;

class Movie
{
private:
	string m_title;
	string m_genre;
	float m_rating;
	string m_rated;

	int movieRated()  //rating the movie
	{
		if (m_rating >= 7 and m_rating <= 10)
			m_rated = "hit";
		else if (m_rating >= 5 and m_rating < 7)
			m_rated = "average";
		else if (m_rating >= 0 and m_rating < 5)
			m_rated = "flop";
		else
			m_rated = "out of range";
		return EXIT_SUCCESS;
	}

public:
	int setTitle( string n)
	{
		m_title = n;
		return EXIT_SUCCESS;
	}
	int setGenre(string g)
	{
		m_genre = g;
		return EXIT_SUCCESS;
	}
	int setRating(float rating)
	{
		m_rating = rating;
		return EXIT_SUCCESS;

	}

	void display()
	{
		cout << "title       \t:" << m_title << endl;
		cout << "---------------------------" << endl;
		cout << "genre    \t:" << m_genre << endl;
		cout << "rating   \t:" << m_rating << endl;
		movieRated();
		cout << "rated     \t:" << m_rated << endl;
	}
};




int main()
{
	Movie M;
	string titleMovie="harry potter", gen="fantasy";
	float rate=9.8;



	M.setTitle(titleMovie);
	M.setGenre( gen);
	M.setRating( rate);

	M.display();

	return 0;
}