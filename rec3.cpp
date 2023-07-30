//1
#include <iostream>
using namespace std;
void rec(int n,int m,bool flag)
{
               cout<<m<<" ";
                // If we are moving back towards n and we have reached there, then we are done
                if (flag == false && n == m)
                        return;
 
                // If we are moving towards 0 or negative.
                if (flag) {
                        // If m is greater, then 5, recur with true flag
                        if (m - 5 > 0)
                                rec(n, m - 5, true);
 
                        else // recur with false flag
                                rec(n, m - 5, false);
                }
 
                else // If flag is false.
                        rec(n, m + 5, false);
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    rec(n,n,true);
}


//2

#include <iostream>
using namespace std;
int sumofn(int n){
    int ans = 0;
    if(n == 1){
        ans++;
        return ans;
    }
    ans += n + sumofn(n-1);
    return ans;
}
int rec(int n, int m) {
        if (m == 1)
        {
            return sumofn(n);
        }
        int sum = rec(n, m - 1);
        return sumofn(sum);
}
 
int main()
{
    int n,m;
    cout<<"Enter the number n and m : ";
    cin>>n;
    cin>>m;
    cout<<rec(n,m);
}
//3
#include<iostream>
using namespace std;
int count(int n,int val)
{
    int ans = 0;
    if (n == 1 && val >=0) //base case
        return 1;
 
    // iterate the loop till equal the val
    for (int i = 0;i <= val; i++){
        ans += count(n-1, val-i);
    }
     
    // return the total no possible solution
    return ans;
}
int main()
{
    int n,val;
    cout<<"Enter n and val : ";
    cin>>n;
    cin>>val;
    cout<<count(n,val);
}
