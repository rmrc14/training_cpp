#include <iostream>

using namespace std;

void disp(int [],int);
void selectionSort(int [],int);


int main() {
    
    int arr[]={3,54,6,3,2,54,24,65};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr,n);
    cout<<endl;
    
    

    return 0;
}
void disp(int arr[],int n)
{
    //cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int arr[],int n)
{
for(int i=0;i<n;i++)
{
   int index=i;
    //cout<<arr[i]<<endl;
    for(int j=i+1;j<n;j++)
    {
        if(arr[index]>arr[j])
         index=j;
        
    }
     swap(arr[index],arr[i]);
     disp(arr,n);
}

    
    
}
