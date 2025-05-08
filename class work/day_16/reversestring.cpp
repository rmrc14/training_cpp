// reverse string without lib function


#include<iostream>
#include<cstring>
#define MAX 100
char* revstr(char[],int);
int stringlength(char[]);
void getword(char*, int);
//void twoSpaces(char[],int);
using namespace std;

int main()
{

    char ch[MAX];
    cin.getline(ch,99);

    int res = stringlength(ch);
    //cout << res<<endl;
    getword(ch, stringlength(ch));
   // cout<<revstr(ch,res);
    
    return 0;
}

char* revstr(char st[], int size)
{
    int i = 0, j = size - 1;      // last character is at index len-1
    char tmp;

    // Swap characters moving inward
    while (i < j) {
        tmp = st[i];
        st[i++] = st[j];
        st[j--] = tmp;
    }

    return st;
}

 
int stringlength(char ch[])
{
    int count = 0;
    while (ch[count++] != '\0');
    
    return count-1;
}


void getword(char* c, int s)
{
     char words[100][MAX];   // Store actual words
     char* result[100];      // Array of pointers to words

    int i = 0, j = 0, k = 0;

    while (i <= s)// s length of sentence string
    {
        if (c[i] != ' ' && c[i] != '\0') 
        {
            words[j][k++] = c[i];
        }
        else
        {
            if (k > 0)// that means there are words to be reversed // when space found reverses the string and final word
            {
                words[j][k] = '\0';  // null-terminate the word
                revstr(words[j], stringlength(words[j]));
                result[j] = words[j]; // store pointer
                j++;
                k = 0;
            }
        }
        i++;
    }


    //char sent_reversed[MAX];
    
    
    /*char str[MAX];
    int x;
    for ( x = 0; x <= j; x++)
    {
       int wsize= stringlength(result[x]);
        for(int y=0;y<wsize-1;y++)
        {
            str[y]=result[x][y];
        }
        str[wsize]=' ';
    }
    if (x == j)
    {
        str[s] = '\0';
    }
    
   

        cout << str ;*/

    


    // Print the reversed words
    for (int x = 0; x < j; x++) 
    {
        
            cout << result[x] << " ";
        
    }



    cout << endl;

  //  return result;


}






//{
//    char* tmp[MAX];
//    //char st1[MAX];
//    int i=0,j=0,k=0,wordcount=0;
//    
//        while (c[i] != '\0')
//        {
//            if (c[i] != ' ')
//            {
//                tmp[j][k++] = c[i];
//            }  
//            else
//            {
//                // now call reverse a string
//                tmp[j]=revstr(tmp[j],stringlength(tmp[j]));
//                tmp[j++][k] = '\0';
//                k=0;
//                wordcount++;
//            }
//        }
//        tmp[j] = revstr(tmp[j], stringlength(tmp[j]));
//        tmp[j][k] = '\0';
//        wordcount++;
//          
//        for (int i = 0;i < j;i++)
//            cout << tmp[i]<<" ";
//        return tmp;
//    
//}