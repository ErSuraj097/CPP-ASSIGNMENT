//1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    int *ptr = (a + k - 1);
    cout << *ptr;
    return 0;
}

//2
#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int a[n];
    int *ptr = a;
    for(int i = 0; i < n; ++i) {
        cin >> *ptr;
        ptr++;
    }
    ptr = a;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }
    cout << sum;
 
    return 0;
}

//3
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int *ptr = &a[n - 1];
    while (1)
    {
        cout << *ptr << ' ';
        if (ptr == a)
            break;
        ptr--;
    }
    return 0;
}
//4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> a[i][j];
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(*(a + i) + i);
    cout << sum;
    return 0;
}
