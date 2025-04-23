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
cout<<"choose from 1-5";
cout<<"1. addition"<<endl;
cout<<"2. subtraction"<<endl;
cout<<"3. multiplication"<<endl;
cout<<"4. division"<<endl;
cout<<"5. modulus"<<endl;
cin>>x;
cout<<"now enter 2 digits";
cin>>a>>b;
switch (x)
{
    case 1: //addition
     c=a+b;
    break;

    case 2://subtraction
      c=a-b;
    break;
    
    case 3://multiplication
      c=a*b;
    break;
    
    case 4://division
      c=a/b;
    break;
    
    case 5://modulus
      c=a%b;
    break;

    default:// error
       cout<<"choose from 1-5";
    break;
}
   
    
    cout<<"ans="<<c<<endl;

return 0;
}