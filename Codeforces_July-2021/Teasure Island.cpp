#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
 
const int maxx=1e6+100;
int d[][2]={{0,1},{1,0}}; 
string s[maxx];
vector<int> vis[maxx];
int n,m;

inline void dfs(int x,int y,int &flag)
{
	if(x>=n||y>=m||s[x][y]=='#'||flag) return ;
	if(x==n-1&&y==m-1)
	{
		flag=1;
		return ;
	}
	for(int i=0;i<2;i++)
	{
		int tx=x+d[i][0];
		int ty=y+d[i][1];
		if(tx==n-1&&ty==m-1) 
		{
			flag=1;
			return ;
		}
		if(tx>=n||ty>=m||vis[tx][ty]==1) continue;
		vis[tx][ty]=1;
		dfs(tx,ty,flag);
		if(flag) return ;
	}
}
int main()
{

   //freopen("input.txt", "r", stdin);
    cin>>n>>m;
	for(int i=0;i<n;i++) cin>>(s[i]);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++) 
        vis[i].push_back(0);
	}
	int flag1=0,flag2=0;
	dfs(0,1,flag1);
	dfs(1,0,flag2);
	cout<<flag1+flag2<<endl;
}