//Q1- Write a program to calculate factorial of a number.
#include <iostream>
using namespace std;
int main()
{
int j,number;
cout << "Enter number" << "\n";
cin >> number;
int fact = 1;
for (j=1;j<=number;j++){
fact = fact*j;

}
cout << "Factorial is:" <<fact << "\n";
return 0;
}

// Q2- Write a program to print all Armstrong numbers between 100 to 500.

#include<iostream>
using namespace std;
int main()
{
cout<<"Armstrong numbers in the range of 100 to 500 are :"<<endl;
for(int i=0;i<500;i++)
{
int sum = 0;
int t = i;
while(t!=0)
{
sum = sum+((t%10)*(t%10)*(t%10));
t = t/10;
}
if(sum == i)
{
cout << i <<"\n";
}
}
return 0;
}

// Q3- Write a program to find the sum of n natural number.

#include <iostream>
using namespace std;
int main() {
int num, sum;
sum = 0;
cout << "Enter a positive integer: ";
cin >> num;
for (int i = 1; i <= num; ++i) {
sum += i;
}
cout << "Sum = " << sum << endl;
return 0;
}

// Q4 - Write a program to reverse a given integer number.

#include<iostream>
using namespace std;
int main()
{
int n,t,r,rev=0;
cout<<"Enter any number : ";
cin>>n;
t=n;
while(t>0)
{

r=t%10;
t=t/10;
rev=rev*10+r;

}
cout<<"Reverse of number "<<n<<" is "<<rev;
return 0;
}

// Q6- Write a program to print alphabet diamond pattern:

#include <iostream>
using namespace std;
int main() {
int size = 5;
int alpha = 65;
int num = 0;
// upside pyramid
for (int i = 1; i <= size; i++) {
// printing spaces
for (int j = size; j > i; j--) {
cout << " ";
}
// printing alphabets
for (int k = 0; k < i * 2 - 1; k++) {
cout << ((char)(alpha+num++));
}
// set the number to 0
num = 0;
cout << "\n";
}
// downside pyramid
for (int i = 1; i <= size - 1; i++) {
// printing spaces
for (int j = 0; j < i; j++) {
cout << " ";
}
// printing alphabets
for (int k = (size - i) * 2 - 1; k > 0; k--) {
cout << ((char)(alpha+num++));
}
// set num to 0
num = 0;
cout << "\n";
}
return 0;
}

// //Q7- Write a program to print + pattern given below :
// *
// *
// *****
// *
// *

// Q7- Write a program to print + pattern given below :
// *
// *
// *****
// *
// *