#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int num;
    cin >> num;
    cout << &num;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int *ptr = &num1, *ptr2 = &num2;
    int product = *ptr * *ptr2;
    cout << product;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int largestAndSmallest(int num1, int num2, int num3, int *largest)
{
    *largest = max(num1, max(num2, num3));
    return min(num1, min(num2, num3));
}
 
int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int largest;
    int smallest = largestAndSmallest(num1, num2, num3, &largest);
    cout << largest << ' ' << smallest;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
 
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    swap(num1, num2);
    cout << num1 << ' ' << num2;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int fun(string s, char *first, char *last)
{
    *first = s[0];
    *last = s[s.size() - 1];
    int cnt = 0;
    for (auto &ch : s)
        if (ch == 't')
            cnt++;
    return cnt;
}
 
int main()
{
    string s;
    cin >> s;
    char first, last;
    int count = fun(s, &first, &last);
    cout << first << ' ' << last << ' ' << count;
    return 0;
}
 
 
