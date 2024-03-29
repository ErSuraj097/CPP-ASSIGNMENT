
// Q1 - Given an array arr of size N and a target value target The task is to find all the indices of the
// given target value in the array.

// (Medium)

// Input: arr = {1, 2, 9, 2, 2, 9}, target = 2
// Output: 1 3 4
// Elemeft 2 is preseft at ifdices 1, 3, 4 (0 based ifdexifg)
// Input: arr[] = {8, 8, 8}, target = Z
// Output: 0 1 e
#include <bits/stdc++.h>
using namespace std;
vector<int> allIndex(vector<int> a,int target, int start)
{
        // If the start index reaches the
        // length of the array, then
        // return empty array
        if (start == a.size()) {
            vector<int> ans; // empty array
            return ans;
        }
 
        // Getting the recursive answer in
        // smallIndex array
        vector<int> smallIndex = allIndex(a, target, start + 1);
 
        // If the element at start index is equal
        // to target then
        // (which is the answer of recursion) and then
        // (which came through recursion)
        if (a[start] == target) {
           vector<int> result(smallIndex.size()+1);
 
            // Put the start index in front
            // of the array
            result[0] = start;
            for (int i = 0; i < smallIndex.size(); i++) {
 
                // Shift the elements of the array
                // one step to the right
                // and putting them in
                // result array
                result[i + 1] = smallIndex[i];
            }
            return result;
        }
        else {
 
            // If the element at start index is not
            // equal to x then just simply return the
            // answer which came from recursion.
            return smallIndex;
        }
}
int main()
{
    vector<int> a={1,2,3,2,2,5};
    int target=2;
 
        vector<int> output =  allIndex(a, target, 0);
 
        // Printing the output array
        for (int i = 0; i < output.size(); i++) {
            cout<<output[i]<<" ";
        }
}

// Q2 - Given an array of integers, print a sum triangle using recursion from it such that the first
// level has all array elements. After that, at each level the number of elements is one less than the
// previous level and elements at the level will be the Sum of consecutive two elements in the
// previous level.

// Q3 - Given an array of size n, generate and print all possible combinations of r elements in array.

// (Medium)

// (Hard)

// Sample Input: [5,4,3,2,1]
// Sample Output:
// 5, 4, 3, 2, 1
// 9, 7, 5, 3
// 16, 12, 8
// 28, 20
// 48
#include <iostream>
using namespace std;
void helper(int arr[] , int size)
{    
        if (size < 1)
        {
            return;
        }
         for (int i = 0; i < size ; i++)
        {
            if(i == size - 1)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << arr[i] << ", ";
            }
        }
        cout << endl;
        int level[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            int sum = arr[i] + arr[i + 1];
            level[i] = sum;
        }
        helper(level, size - 1);
}
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    helper(arr,n);
}



// Q3 - Given an array of size n, generate and print all possible combinations of r elements in array.

// (Medium)

// (Hard)

// Sample Input: [5,4,3,2,1]
// Sample Output:
// 5, 4, 3, 2, 1
// 9, 7, 5, 3
// 16, 12, 8
// 28, 20
// 48
// Code:
// https://pastebin.com/r3ajZp2k

// Input:
// n = 4
// {1, 2, 3, 4}
// r = 2
// Expected Output:
// {1, 2}
// {1, 3}
// {1, 4}
// {2, 3}
// {2, 4}
// {3, 4}
#include <bits/stdc++.h>
using namespace std;
void combination(int arr[], int n, int r, int index, vector<int> data, int i) {
                // Current combination is ready to be printed, print it
                if (index == r) {
                        for (int j=0; j<r; j++)
                        {
                        cout<<data[j]<<" ";
                        }
                        cout<<endl;
                        return;
                }
                // When no more elements are there to put in data[]
                if (i >= n)
                        return;
                // current is included, put next at next location
                data[index] = arr[i];
                combination(arr, n, r, index+1, data, i+1);
                // current is excluded, replace it with next (Note that i+1 is passed, but index is not changed)
                combination(arr, n, r, index, data, i+1);
}
void printCombination(int arr[], int n, int r) {
                // A temporary array to store all combination one by one
               vector<int> data(r);
                // Print all combination using temporary array 'data[]'
                combination(arr, n, r, 0, data, 0);
}
int main()
{
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;
    cout<<"Enter the elements of array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int r;
    cin>>r;
    printCombination(arr, n, r);
}

// Q4 - Given two sorted arrays A and B of length m and n respectively, generate all possible arrays
// such that the first element is taken from A then from B then from A, and so on in increasing order
// till the arrays are exhausted using recursion. The generated arrays should end with an element
// from B.
#include<bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n) {
                for (int i = 0; i < n; i++)
                {
                        cout<<arr[i]<<" ";
                }
                cout<<endl;
}
void generate(int A[], int B[], int C[], int i, int j, int m, int n, int len, bool flag){
                if (flag) {
                        // Include valid element from A
                        // Print output if there is at least one 'B' in output array 'C'
                        if (len != 0) {
                                printArr(C, len + 1);
                        }
                        // Recur for all elements of A after current index
                        for (int k = i; k < m; k++) {
                                if (len == 0) {     //this block works for the very first call to include the first element in the output array
                                        C[len] = A[k];
                                        // don't increment len as B is included
                                        generate(A, B, C, k + 1, j, m, n, len, !flag);
                                }
                                else if (A[k] > C[len]) { // include valid element from A and recur
                                        C[len + 1] = A[k];
                                        generate(A, B, C, k + 1, j, m, n, len + 1, !flag);
                                }
                        }
                }
                else {  //Include valid element from B and recur
                        for (int l = j; l < n; l++) {
                                if (B[l] > C[len]) {
                                        C[len + 1] = B[l];
                                        generate(A, B, C, i, l + 1, m, n, len + 1, !flag);
                                }
                        }
                }
        }
int main()
{
    int m,n;
    cout<<"Enter the length of both arrays : ";
    cin>>m;
    cin>>n;
    int A[m];
    int B[n];
    cout<<"Enter the elements of first array : ";
    for(int i=0;i<m;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter the elements of second array : ";
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
    }
    int C[m+n];
    generate(A, B, C, 0, 0, m, n, 0, true);
    
}

