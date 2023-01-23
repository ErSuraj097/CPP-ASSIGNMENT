
/*
//............question 1
#include <iostream>
using namespace std;

int main()
{
int length,breadth;
cout<<"Enter length: "<<endl;
cin>>length;
cout<<"Enter breadth: "<<endl;
cin>>breadth;

if(length==breadth)
{
cout<<"It is a square"<<endl;
}
else
{
cout<<"It is a rectangle"<<endl;
}

return 0;
}

//............question 2

#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter a number"<<endl;
cin>>x;
if(x<0)
{
x = x*(-1);
}
cout<<"Absolute value is "<<x<<endl;
return 0;
}


//............question 3
#include <iostream>
using namespace std;
int main()
{
int CP,SP, amt; //Input cost price and selling price of a product
cout<<"Enter cost price: ";
cin>>CP;
cout<<"Enter selling price: ";
cin>>SP;
if(SP > CP)
{
amt = SP - CP; //Calculate Profit
cout<<"Profit = "<<amt;
}
else if(CP > SP)
{
amt = CP - SP; //Calculate Loss
cout<<"Loss = "<<amt;
}
else
{
cout<<"No Profit No Loss."; // Neither profit nor loss
}
return 0;
}

//............question 4
#include <iostream>
using namespace std;
int main() {
int number;
cout << "Enter an integer: ";
cin >> number; // checks if the number is positive
if (number > 0)
cout << "You entered a positive integer: " << number << endl;
else
cout << "The number is negative and skipped ";
return 0;
}


//............question 5
#include <iostream>
using namespace std;
int main() {
char op;
float num1, num2;
cout << "Enter an operator (+, -, *, /): ";
cin >> op;
cout << "Enter two numbers: " << endl;
cin >> num1 >> num2;
switch (op) {
case '+':
cout << num1 << " + " << num2 << " = " << num1 + num2;
break;
case '-':
cout << num1 << " - " << num2 << " = " << num1 - num2;
break;
case '*':
cout << num1 << " * " << num2 << " = " << num1 * num2;
break;
case '/':
cout << num1 << " / " << num2 << " = " << num1 / num2;
break;
default:
cout << "Error! The operator is not correct";
// operator doesn't match with any case constant (+, -, *, /)
break;
}
return 0;
}

//............question 6
#include <iostream>
using namespace std;
int main(){
int marks;
cout<<"Enter Your Marks: ";
cin>>marks;
if (marks >= 90){
cout<<"Your Grade is A+";
}
else if (marks >= 80){
cout<<"Your Grade is A";
}
else if (marks >= 70){
cout<<"Your Grade is B+";
}
else if (marks >= 60){
cout<<"Your Grade is B";
}
else if (marks >= 50){
cout<<"Your Grade is C";
}
else if (marks >= 40){
cout<<"Your Grade is D";
}
else if (marks >= 30){
cout<<"Your Grade is E";
}
else if (marks <= 30){
cout<<"Your Grade is F";
}
else{
cout<<"Enter Valid Marks";
}
return 0;
}
*/