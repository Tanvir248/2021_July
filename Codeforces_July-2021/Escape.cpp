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
ll solve(ll vp,ll vd,ll t,ll f,ll c){   
   //freopen("input.txt", "r", stdin);
   ll ans =0;
   if(vp>=vd){
       return ans;
   }else{
       ld st =  vp*t*1.0;
           ll ss = vd-vp;
       while (true)
       {
            ld tx = st/ss;
               st+=tx*vp;
           if(st>=c){
              break;
              }
               else{
                   ans++;
                   st+=(f+tx)*vp;
               }
           }
       }
       return ans;
   }
int main(){
     speed();
ll a, b, c, d, e;
    cin>>a>>b>>c>>d>>e;
       cout<<solve(a, b, c, d, e);  
     end
     return 0;
}