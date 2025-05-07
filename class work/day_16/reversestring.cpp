// reverse string without lib function


#include<iostream>
#include<cstring>
#define MAX 100
int display(char[],int);
int stringlength(char[]);

//void twoSpaces(char[],int);
using namespace std;

int main()
{

    char ch[MAX];
    cin.getline(ch,99);

    int res = stringlength(ch);
    //cout << res;
    display(ch,res);

    return 0;
}
int display(char c[],int size)
{
    int i=0,count=0,strl;
    int j = 0;
    char tmp[MAX];
 //   FLAG:
    for (i = 0;c[i]!='\0';i++)
    {
        
        if (c[i] != ' ')
        {
            
            tmp[i] = c[i];

        }
        
    }
    if(c[i]!='\0') // for NEXT SPACE
    {
        i++;
    }
    strl=stringlength(tmp);
    
    while (strl)
    {
        strl--;
        c[strl] = tmp[j++];
        
    }
    // 2 spaces
     strl = i;
    count = 1;
    for (;c[i] != '\0';i++)
    {
        if (c[i] == ' ')
            count++;
        if (c[i] != ' ')
        {

            tmp[i] = c[i];

        }

        if (count == 2)
        {
            count--;
            strl = i - strl;
            while (strl)
            {
                c[strl] = tmp[i];
                strl--;
            }

        }

    }
    if (c[i] == '\0')
        return 0;
    cout << c;
  //  goto FLAG;
    //twoSpaces(c, size);
  
    
    
}

//void twoSpaces(char ch[], int size)
//{
//    // 2 spaces
//    int strl = i;
//   int  count = 1;
//    for (;c[i] != '\0';i++)
//    {
//        if (c[i] == ' ')
//            count++;
//        if (c[i] != ' ')
//        {
//
//            tmp[i] = c[i];
//
//        }
//
//        if (count == 2)
//        {
//            count--;
//            strl = i - strl;
//            while (strl)
//            {
//                c[strl] = tmp[i];
//                strl--;
//            }
//
//        }
//
//    }
//
//
//
//}
int stringlength(char ch[])
{
    int count = 0;
    while (ch[count]!='\o')
    {
        count++;
    }
   // cout << count;
    return count+1;
}