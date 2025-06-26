/*1. Given an array  consisting of  positive and negative integers then without changing the  relative  order of  elements.  
  
   For example :
   Input :  
    8
	9 -3 5 -2 -8 -6 1 3
   Output : 
   -3 -2 -8 -6 9 5 1 3   */
   #include<iostream>
   using namespace std;
   
  void posNeg(int arr[] ,int n)
  {
      for(int i=1;i<n;i++)
      {
          int key= arr[i];
          int j=i-1;
          if(key<0)
          {
              while(j>=0&& arr[j]>0)
              {
                  arr[j+1]=arr[j];
                  j--;
              }
              arr[j+1]=key;
          }
          
      }
  }

   int main()
   {
       int arr[]={9 ,-3, 5, -2, -8, -6, 1 ,3};
       posNeg(arr,8);
       
       for(int i=0;i<8;i++)
       cout<<arr[i]<<" ";
       
       
       return 0;
   }
