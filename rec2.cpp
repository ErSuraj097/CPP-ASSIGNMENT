// Q1 - Given two numbers x and y find a product using recursion. (Easy)
// Input s m = 5, y = 2
// Expected Output s 10
// ExplanatiWnr
// V If m is lUss than y, swap thU two variablUs valuT
// V RUcursivUly find y timUs thU sum of l
// V If any of thUm bUcomU zUro, rUturn 0

#include <iostream>
using namespace std;
int product(int x, int y) {
    // if x is less than y swap the numbers
    if (x < y)
    {
       return product(y, x);
    }
    // iteratively calculate y times sum of x
    else if (y != 0)
    {
        return (x + product(x, y - 1));
    }
    // if any of the two numbers is zero return zero
    else
    {
        return 0;
    }
}
int main()
{
   int x,y;
   cout<<"Enter the numbers : ";
   cin>>x;
   cin>>y;
   cout<<"The product is : ";
   cout<<product(x,y);
}

// Q2 - Given a number n, check whether it's a prime number or not using recursion. (Easy)
// Input s n = 11
// Output s YUs

#include <iostream>
using namespace std;
bool isPrime(int n, int i)
{
    if (n <= 2)
        return (n == 2) ? true : false;
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    // Check for next divisor
    return isPrime(n, i + 1);
}
 
int main()
{
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   if(isPrime(n,2))
   {
       cout<<"Yes";
   }else{
       cout<<"No";
   }
}

// Q3 - Given a decimal number as input, we need to write a program to convert the given decimal
// number into its equivalent binary number.

// (Easy)

// Inputx| 7
// ExpectedxOutputx| 111

#include <iostream>
using namespace std;
int find(int decimal_number)
{
     if (decimal_number == 0)
        return 0;
     else
        return (decimal_number % 2 + 10 * find(decimal_number / 2));
}
int main()
{
   int n;
   cout<<"Enter the number : ";
   cin>>n;
   cout<<find(n);
}

// Q4 - Given the Binary code of a number as a decimal number, we need to convert this into its
// equivalent Gray Code. In gray code, only one bit is changed in 2 consecutive numbers.

// (Medium)

// Input 1001
// Expectem Output 1101

#include <bits/stdc++.h>
using namespace std;
int binary_to_gray(int n,int i) 
{
    int a,b;
    int result = 0;
    if (n!=0) 
    {
    // Taking last digit
        a = n % 10;
        n = n / 10;
    // Taking second last digit
        b = n % 10;
        if ((a & ~b) == 1 || (~a & b) == 1) {
            result = (int)(result + pow(10, i));
        }
        return binary_to_gray(n, ++i) + result;
    }
    return 0;
}
int main()
{
   int n;
   cout<<"Enter the binary number : ";
   cin>>n;
   cout<<binary_to_gray(n,0);
}
