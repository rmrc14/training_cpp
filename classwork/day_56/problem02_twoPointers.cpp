/*1. 2. Given  an binary  array,  Sort it in linear time and constant space. Output  Should Print contain all zeroes followed  by all ones.

For  example:
Input : 
 8
1 0 0 0 1 0 1 1
Output:
0 0 0 0 1 1 1 1   */
   #include<iostream>
   using namespace std;
   
  void twoPointer(int arr[] ,int n)
  {
      int left=0 , right=n-1;
      
      while(left<right)
      {
          while(arr[left]==0&& left<right)
          {
              left++;
          }
          while(arr[right]==1&& left<right)
          {
              right--;
          }
          if(left<right)
          {
              swap(arr[left],arr[right]);
              left++;
              right--;
          }
          
      }
  }

   int main()
   {
       int arr[]={1 ,0, 0, 0, 1, 0, 1, 1};
       twoPointer(arr,8);
       
       for(int i=0;i<8;i++)
       cout<<arr[i]<<" ";
       
       
       return 0;
   }
