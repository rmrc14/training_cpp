/*
Problem Statement 7
Write a program that takes two comma-separated lists of integers as input. 
For each integer N in the first list, the program needs to find the count of its occurrences 
(denoted as C) in the second list.
The program should print the result N-C for each integer N in the first list.
*/


#include <iostream>
#include <cstring>
//#include <cstdlib>  // for atoi
#define MAX 100

using namespace std;

void countOccurrences(char a[], char b[]);

int main() {
    char A[MAX], B[MAX];

    cout << "The first list (list A): ";
    fgets(A, MAX, stdin);
   // A[strcspn(A, "\n")] = '\0';  // remove newline

    cout << "The second list (list B): ";
    fgets(B, MAX, stdin);
    //B[strcspn(B, "\n")] = '\0';  // remove newline

    countOccurrences(A, B);

    return 0;
}

void countOccurrences(char A[], char B[]) 
{
    int numbersA[MAX], numbersB[MAX];  // array to store the integers
    int counta = 0, countb = 0, count = 0;

    // 1 Tokenize the string by commas
    char* token = strtok(A, ",");

    while (token != nullptr) {
        numbersA[counta++] = atoi(token);  // convert string to int and store
        token = strtok(nullptr, ",");   // get next token
    }
   
    // 2 Tokenize the string by commas
    char* token2 = strtok(B, ",");
    
    while (token2 != nullptr) {
        numbersB[countb++] = atoi(token2);  // convert string to int and store
        token2 = strtok(nullptr, ",");   // get next token
    }
    
    // Output the stored integers
    cout << "Stored integers a: ";
    for (int i = 0; i < counta; ++i) {
        cout << numbersA[i] << " ";
    }
    cout << endl;
    
    
    // Output the stored integers

    cout << "Stored integers b: ";
    for (int i = 0; i < countb; ++i) {
        cout << numbersB[i] << " ";
    }
    cout << endl;

    // counts frequency of integer

    for (int i = 0; i < counta; i++)        // iterates through A
    {
        int count = 0;                    // reinitializes every loop after j is completed
        for (int j = 0; j < countb; j++) // for b array
        {

            if (numbersA[i] == numbersB[j])
            {
                count++;

            }

        }

        cout << numbersA[i] << "-" << count << " " << endl;
    }
}
