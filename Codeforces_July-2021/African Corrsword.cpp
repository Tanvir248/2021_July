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
void solve(){   
   //freopen("input.txt", "r", stdin);
    ll n, k,m, i , j , y, x;
    cin>>n>>m;
    ls s[n], s2[n];
    for ( i = 0; i < n; i++)
    {
      cin>>s[i];
      s2[i]=s[i];
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            x=0;
            for(k=0;k<m;k++)
            {
                if(s[i][j]==s[i][k] && j!=k)
                    s2[i][k]='@',x++;
            }

            for(k=0;k<n;k++)
            {
                if(s[i][j]==s[k][j] && i!=k)
                    s2[k][j]='@',x++;
            }

            if(x)
                s2[i][j]='@';
        }
    }
    for ( i = 0; i <n; i++)
    {
      for (j = 0; j < m; j++)
      {
        if(s2[i][j]!='@'){
            cout<<s2[i][j];
        }
      }
      
    }ed
    
}
int main(){
     speed();

       solve();  
     
     return 0;
}