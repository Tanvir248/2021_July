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
#define pi pair<int, char>
#define yes cout<<"Yes"<<endl;
 #define no cout<<"No"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
bool vis[51][51];
char graph[51][51];
ll dx[] = {1, -1, 0, 0};
ll dy[] = {0, 0, 1, -1};
ll m,n;
bool ok=false;

void dfs(int i,int j,int frmi,int frmj,char co)
{
    if(i<1||j<1||i>m||j>n) return;

    if(graph[i][j]!=co) return;

    if(vis[i][j]) {ok=true; return ;}

    vis[i][j]=true;

    for(int y=0;y<4;y++)
    {
        int nxti=i+dx[y];
        int nxtj=j+dy[y];

        if(nxti==frmi && nxtj==frmj)
            continue;
         dfs(nxti,nxtj,i,j,co);
    }
}


int main()

{
   speed();

   //freopen("input.txt", "r", stdin);
    memset(vis,false,sizeof(vis));
    ll x,y,u,v;
    char c;
    cin>>m>>n;
    for(int i=1;i<=m;i++)

    {
        for(int j=1;j<=n;j++)

        {
            cin>>graph[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
       for(int j=1;j<=n;j++)
       {
           char z=graph[i][j];
           //cout<<z<<endl;
           if(!vis[i][j])
           {
               dfs(i,j,-1,-1,z);
               if(ok)
               {
                   yes
                    return 0;
               }
           }
       }
    }
no
return 0;
}