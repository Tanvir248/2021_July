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
}ll a, b;
ll solve(){   
   //freopen("input.txt", "r", stdin);
   
   ll arr[3]={2, 3, 5};
    ll cnta[3]={0}, cntb[3]={0};
   cin>>a>>b;
    if(a==b){
   return 0;
    }
    for (ll i = 0; i < 3; i++)
    {
       while (a%arr[i]== 0)
       {

           cnta[i]++;
           a/=arr[i];
       }
       while (b%arr[i]== 0)
       {
           cntb[i]++;
           b/=arr[i];
       }
    }
    if(a!=b){
        return -1;
    }else{
        ll ans =0;
        for (ll i = 0; i < 3; i++)
        {
            ans+=abs(cntb[i]-cnta[i]);
        }
        return ans;
    }

    }
int main(){
     speed();

     cout<<  solve();  
     ed
     return 0;
}