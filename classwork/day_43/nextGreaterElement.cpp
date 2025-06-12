/*

1)	 Given an array, print the Next Greater Element (NGE) for every element.
The Next greater Element for an element x is the first greater element on the right side 
of x in array. Elements for which no greater element exist, 
consider next greater element as -1.

For the input array [4, 5, 2, 25, 7,8}, the next greater elements for each
element are as follows.

Element --> NGE
output:

4 --> 5

5 --> 25

2 --> 25

25 --> -1
7 --> 8
8 --> -1

*/

#include <iostream>
#include <vector>
#include <stack>


std::vector<int> nextGreaterElements(const std::vector<int>& arr)
{
    std::vector<int> nge(arr.size(), -1);   // default all to -1
    std::stack<size_t> st;                  

    for (size_t i = 0; i < arr.size(); ++i)
    {
        // Resolve NGE for elements smaller than arr[i]
        while (!st.empty() && arr[i] > arr[st.top()]) //{ 4, 5, 2, 25, 7, 8 }
        {
            nge[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    // Remaining indices already have nge = -1
    return nge;
}

int main()
{
    std::vector<int> arr{ 4, 5, 2, 25, 7, 8 };

    std::vector<int> nge = nextGreaterElements(arr);

    std::cout << "Element --> NGE\n\n";
    for (size_t i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " --> " << nge[i] << std::endl;
}
