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
 #define end cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void solve(){   
  //freopen("input.txt", "r", stdin);
  ll n;
 cin>>n;
      ll a[N];
        memset(a,0,sizeof(a));
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        int flag=false;
        for(int i=1;i<=n;i++)
        {
            int x,y;
            x=a[i];
            y=a[x];
           if(a[y]==i&&x!=i&&x!=y&&i!=y)
            flag=true;
            if(flag==1)
                break;
        }
        if(flag)
            yes
        else
        no
    
}
int main(){
     speed();

       solve();  
     
     return 0;
}