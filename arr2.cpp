#include <iostream>
#include <climits>
using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int mat[m][n];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>mat[i][j];
}
}
int val=INT_MIN;
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(mat[i][j]>val)
{
val=mat[i][j];
}
}
}
cout<<val;
return 0;
}

//2

#include <vector>
using namespace std;
int main()
{
int n;
cin>>n;
int mat[n][n];
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>mat[i][j];
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<i;j++)
{
swap(mat[i][j],mat[j][i]);
}
}
//swap diagonal elements
for(int i=0;i<n;i++)
{
for(int j=0;j<n/2;j++)
{
swap(mat[i][j],mat[i][n-j-1]);
}
}
cout<<endl;
//printing the mat
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cout<<mat[i][j]<<" ";
}
cout<<endl;
}
}

//3
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
int main()
{
int m,n;
cin>>m>>n;
int mat[m][n];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cin>>mat[i][j];
}
}
vector<pair<int,int>> ans; // we are storing all the cells which have value 0
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
if(mat[i][j]==0)
{
ans.push_back({i,j});
}
}
}
for(int i=0;i<ans.size();i++) //traversing the ans vector and making row and column of
that
{ //call to 0
int x=ans[i].first;
int y=ans[i].second;
int row=0;
int col=0;
while(row<m)
{
mat[row][y]=0;
row++;
}
while(col<n)
{
mat[x][col]=0;
col++;
}
}
cout<<endl;
//printing the updated matrix
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
cout<<mat[i][j]<<" ";
}
cout<<endl;
}
}
