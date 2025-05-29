/*
Method Overriding with Single Inheritance
    Method overriding in cpp is a mechanism that allows a subclass to provide a specific 
    implementation for a method that is already defined in its superclass. 
    The overriding method in the subclass should have the same name and parameters 
    (if overridden), but it may provide a different implementation.

    This code demonstrates method overriding in cpp. Here's an explanation of how it works:

    Base class Animal: This is the base class that defines a method make_sound().
    The implementation of this method prints "Animal makes a sound".

    Subclass Dog and Cat: These are subclasses of Animal. 
    Each subclass defines its own version of the make_sound() method,
    which overrides the implementation in the base class. 
    The Dog subclass defines make_sound() to print "Dog barks", 
    and the Cat subclass defines make_sound() to print "Cat meows".

Object Creation:

    animal1 is created as an instance of the Dog class.
    animal2 is created as an instance of the Cat class.
Method Call:

    When animal1.make_sound() is called, it invokes the make_sound() method of the Dog class 
    because animal1 is an instance of Dog. This demonstrates dynamic polymorphism, 
    where the method to be called is determined at runtime based on the type of the object.
    Similarly, when animal2.make_sound() is called, it invokes the make_sound() 
    method of the Cat class because animal2 is an instance of Cat.
Run the code to see how overriding works in cpp.

*/
#include<iostream>
#include<string>
using namespace std;

class Animal {
public:
    void eat() { cout << "eat "; }
    void walk() { cout << "walk "; }
    void makeSound() { cout << "make a sound "; }

    virtual void soundLike() { cout << "Animal sound"; }
};

class Cat : public Animal {
public:
    void dispCat() { cout << "cat :"; }
    void soundLike() override { cout << "Meow!"; }
};

class Dog : public Animal {
public:
    void dispDog() { cout << "dog :"; }
    void soundLike() override { cout << "Bow!"; }
};

int main() {
    Animal* bcptr = nullptr;
    Cat c;
    Dog d;

    // Direct calls using objects
    c.dispCat();
    cout << " can ";
    c.eat();
    cout << " and can ";
    c.walk();
    cout << " and can also ";
    c.makeSound();
    cout << "like: ";
    c.soundLike();
    cout << "\n\n======================\n" << endl;

    d.dispDog();
    cout << " can ";
    d.eat();
    cout << " and can ";
    d.walk();
    cout << " and can also ";
    d.makeSound();
    cout << "like: ";
    d.soundLike();
    cout << "\n\n======================\n" << endl;

    // Runtime polymorphism using base class pointer
    bcptr = &c;
    cout << "Base class pointer to Cat:\n";
    bcptr->eat();
    cout << " ";
    bcptr->walk();
    cout << " ";
    bcptr->makeSound();
    cout << "like: ";
    bcptr->soundLike();
    cout << "\n\n======================\n" << endl;

    bcptr = &d;
    cout << "Base class pointer to Dog:\n";
    bcptr->eat();
    cout << " ";
    bcptr->walk();
    cout << " ";
    bcptr->makeSound();
    cout << "like: ";
    bcptr->soundLike();
    cout << "\n\n======================\n" << endl;

    return 0;
}
