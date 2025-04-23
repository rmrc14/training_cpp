/*
Desc: Arithmetic operator
Author: Remin Varghese
DOC/DOM:16/04/25
Version:
*/

#include <main.h>


int main()
{
    
    int a, b,y;
 
    cout << "1. addition" << endl;
    cout << "2. subtraction" << endl;
    cout << "choose the no." << endl;
    cin >> y;
    cout << "now enter 2 digits"<<endl;
    cin >> a >> b;
   
    switch (y) {
    case 1:
        cout << add(a, b);
        break;
    case 2:
        cout << sub(a, b);
        break;
    default:
        cout << "enter valid no.";
        break;

    }
    
    return 0;

        
    
}

