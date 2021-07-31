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
long int x,l,r,n,m,mx,mn,sum,val,ans,arr[100001];   
lln solve(){   
   
   
        ans=0;
        for(ll i=0; i<(1<<n); i++)
        {
            mx=-1;
           mn=1000000;
            sum=0;
            for(ll j=0; j<n; j++)
            {
                if(i&(1<<j))
                {
                    sum+=arr[j];
                    mx=max(mx,arr[j]);
                    mn=min(mn,arr[j]);
                }
            }
            if(l<=sum && sum<=r && (mx-mn)>=x)
                ans++;
        }
        return ans;
}
int main(){
     speed();
//freopen("input.txt", "r", stdin);
cin>>n>>l>>r>>x;
        for(ll i=0; i<n; i++)
        {
            cin>>arr[i];
        }
       cout<<solve();  
     ed
     return 0;
}