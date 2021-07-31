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
const int N = int(1e5 + 3);
void solve(){   
  // freopen("input.txt", "r", stdin);
    int p, q, l, r, a, b, t[2010], c[2010], d[2010], ans=0;
    cin>>p>>q>>l>>r;
    for(int i=0;i<2010;++i)t[i]=0;
    for(int i=0;i<p;++i){
        cin>>a>>b;
        for(int j=a;j<=b;++j)
            t[j]=1;
    }
    for(int i=0;i<q;++i)
        cin>>c[i]>>d[i];
    for(int i=l;i<=r;++i)
    {
        bool flag=true;
        for(int j=0;j<q&&flag;++j)
        {
            for(int k=c[j]+i;k<=d[j]+i;++k)
                if(t[k])
                {
                    flag=false;
                    break;
                }
        }
        if(!flag)ans++;
    }
    cout<<ans<<endl;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}