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
lln n, m;
bool val(ll x, ll y){
   return x>0 && x<=n && y>0 && y<=m; 
}
void solve(){   
 //freopen("input.txt", "r", stdin);
     lln n,m;
    lln x,y;
    lln k;
    cin>>n>>m;
    cin>>x>>y;
    cin>>k;
    lln steps = 0;
    lln dx,dy;
    for(lln i=0;i<k;i++)
    {
        lln fac1,fac2;
        cin>>dx>>dy;
        if(dx>0)
        {
            fac1 = (n-x)/dx;
        } 
        else if(dx<0)
        {
            fac1 = (x-1)/(-1*dx);
        }
        else
        {
            fac1=INT_MAX;
        }
        if(dy>0)
        {
            fac2 = (m-y)/dy;
        } 
        else if(dy<0)
        {
            fac2 = (y-1)/(-1*dy);
        }
        else
        {
            fac2=INT_MAX;
        }
        lln ans = min(fac1,fac2);    
        x += dx*ans;
        y += dy*ans;
        steps += ans;
        
    }
    cout<<steps<<endl;
    }
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}