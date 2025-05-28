#include<iostream>
#include<string>

using namespace std;

class Animal
{


public:
	void eat() { cout << "eat "; }
	void walk() { cout << "walk " ; }
	void makeSound() { cout << "make a sound " ; }
	virtual void soundLike() { cout << "Animal sound"; }
};


class Cat: public Animal
{public:
	void dispCat() { cout << "cat :"; }
	 void soundLike() { cout << "Meow!"; }
};

class dog :public Animal
{
public:
	void dispDog() {
		cout << "dog :" ;
	}
	void soundLike() { cout << "bow!"; }
};


int main()
{
	Animal* bcptr=nullptr;
	Cat c;
	dog d;


	c.dispCat();
	cout << " can ";
	c.eat();
	cout << " and can ";
	c.walk();
	cout << " and can also ";
	c.makeSound();
	cout << "like:";
	c.soundLike();
	cout << "\n\n======================\n" << endl;

	d.dispDog();
	cout << " can ";
	d.eat();
	cout << " and can ";
	d.walk();
	cout << " and can also ";
	d.makeSound();
	cout << "like:";
	d.soundLike();  // function is overidden by derived class functionality of base class
	cout << endl;
	cout << "\n\n======================\n" << endl;

	bcptr = &c;
	
	bcptr->eat();
	bcptr->walk();
	bcptr->makeSound();
	bcptr->soundLike();
	cout << "\n\n======================\n" << endl;

	bcptr = &d;

	bcptr->eat();
	bcptr->walk();
	bcptr->makeSound();
	bcptr->soundLike();
	cout << "\n\n======================\n" << endl;
}