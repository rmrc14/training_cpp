/* 
Desc: Arithmetic operator
Author: Remin Varghese
DOC/DOM:
Version:
*/

#include <iostream>


using namespace std;
int main()
{ int a,b,c,x;
cout<<"choose from 1-4";
cout<<"1. preincrement"<<endl;
cout<<"2. postincrement"<<endl;
cout<<"3. predecrement"<<endl;
cout<<"4. postdecrement"<<endl;
cout<<"5. conditional operation"<<endl;
cin>>x;
cout<<"now enter 2 digits";
cin>>a>>b;
cout<<"a="<<a<<"b="<<b;
switch (x)
{
    case 1: //prefix
     c=++a;
     cout<<c;
     cout<<a;
    break;

    case 2://postfix
      c=a++;
     cout<<c;
     cout<<a;
    break;
    
    case 3://prefix decrement
      c=--a;
     cout<<c;
     cout<<a;
    break;
    
    case 4://postfix
      c=a--;
     cout<<c;
     cout<<a;
    break;
    
    case 5://conditional operation
      c=a>b?a:b;
      cout<<c<<" is greater"<<endl;
    break;

    default:// error
       cout<<"choose from 1-5";
    break;
}
   
    

return 0;
}