
// Q1 - Write a function to print squares of the first 5 natural numbers.
// Sample Output: 1 4 9 16 25
#include <iostream>
using namespace std;
int square(int num)
{
int sq=num*num;
return sq;
}
int main()
{
for(int i=1;i<=5;i++)
{
cout<<square(i)<<" ";
}
}

// Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.
// Sample Input: r=3
// Sample Output: Area : 28.26
// // Circumference : 18.84

#include <iostream>
using namespace std;
double circum(int r)
{
double cir=2*3.14*r;
return cir;
}
double area(int r)
{
double ar=3.14*r*r;
return ar;
}
int main()
{
cout<<"Enter the radius : ";
int r;
cin>>r;
cout<<"Area : "<<area(r)<<endl;
cout<<"Circumference : "<<circum(r);
}

// Q3 - Given the age of a person, write a function to check if the person is eligible to vote or not.
// Sample Input: 19
// Sample Output: Yes
// Sample Input: 17
// Sample Output: No

#include <iostream>
using namespace std;
bool vote(int age)
{
if(age>=18)
{
return true;
}
return false;
}
int main()
{
cout<<"Enter the age : ";
int age;
cin>>age;
if(vote(age)==true)
{
cout<<"Yes";
}else{
cout<<"No";
}

}

// Q4 - Given two numbers a and b, write a program using functions to print all the odd numbers
// between them.
// Sample Input: 1 10
// Sample Output: 1 3 5 7 9

#include <iostream>
using namespace std;
bool prime(int num)
{
for(int i=2;i<num;i++)
{
if(num%i==0)
{
return false;
}
}
return true;
}
int main()
{
int a;
int b;
cout<<"Enter the two numbers : ";
cin>>a>>b;
for(int i=a;i<=b;i++)
{
if(prime(i)){
cout<<i<<" ";
}
}}

// Q5 - Given two numbers a and b, write a program to print all the prime numbers present between
// a and b.
// Sample Input: 2 10
// Sample Output: 2 3 5 7

#include <iostream>
using namespace std;
bool odd(int num)
{
if(num%2!=0)
{
return true;
}
return false;
}
int main()
{
int a;
int b;
cout<<"Enter the two numbers : ";
cin>>a>>b;
for(int i=a;i<=b;i++)
{
if(odd(i))
{
cout<<i<<" ";
}
}
}