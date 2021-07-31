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
   ll n, num, k;
map<int , vi>mp;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin>>num;
        mp[num].pb(i);
    }
    vector<pi>vp;
       map<ll,vector<ll>>::iterator it=mp.begin();
       while (it!=mp.E)
       {
           k = it->first;
           if(mp[k].size()==1){
            vp.push_back({k,0});
            } else
        {
            set<ll> s;
            for(ll i=1;i<mp[k].size();i++)
                s.insert(abs(mp[k][i]-mp[k][i-1]));

            set<ll>::iterator q=s.begin();
            if(s.size()==1)
            vp.push_back({k,*q});

        }
    it++;
       }
       cout<<vp.sz<<endl;
       for (ll i = 0; i < vp.sz; i++){
         cout<<vp[i].first<<" "<<vp[i].second<<endl;
         }
       

}
int main(){
     speed();

       solve();  
     
     return 0;
}