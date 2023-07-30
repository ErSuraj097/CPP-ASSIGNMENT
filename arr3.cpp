//1
#include <iostream>
#include <vector>
using namespace std;
bool check(vector<vector<int>>& mat)
{
int r=mat.size();
int c=mat[0].size();
for(int i=1;i<r;i++)
{
for(int j=1;j<c;j++)
{
if(mat[i][j]!=mat[i-1][j-1])
{
return false;
}
}
}
return true;
}
int main()
{
vector<vector<int>> mat={{9,8,7,6},{5,9,8,7},{1,5,9,8}} ;
if(check(mat))
{
cout<<"true";
}else{
cout<<"false";
}
}

//2
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& s) {
vector<vector<int>> ans;
int j=0;
ans.push_back(s[0]);
for(int i=1;i<s.size();i++)
{
if(ans[j][1]>=s[i][0])
{
ans[j][1]=max(ans[j][1],s[i][1]);
}else{
j++;
ans.push_back(s[i]);
}
}
return ans;
}
int main()
{
vector<vector<int>> mat={{1,4},{2,3},{5,8},{6,9}};
vector<vector<int>> ans=merge(mat);
for(int i=0;i<ans.size();i++)
{
cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
}
}

//3
#include <vector>
using namespace std;
int merge(vector<vector<int>>& s) {
vector<vector<int>> ans;
int j=0;
ans.push_back(s[0]);
int count=0;
for(int i=1;i<s.size();i++)
{
if(ans[j][1]>s[i][0])
{
count++;
ans[j][1]=max(ans[j][1],s[i][1]);
}else{
j++;
ans.push_back(s[i]);
}
}
return count;
}
int main()
{
vector<vector<int>> mat={{1,4},{2,3},{4,5},{6,7}};

}
