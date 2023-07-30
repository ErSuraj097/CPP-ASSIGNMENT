using namespace std;
#include<iostream>
 void fun(int a,int b)
 {
    int c;
    c=a+b;
    cout <<"Addition (A+b) :"<<c;

 }

 int main(){
    int a,b;
    cin>>a;
    cin>>b;
    fun(a,b);
    return 0;
 }