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
lln __gcd(lln a, lln b){
    if(a*b ==0)
    return a+b;
     if(a%b == 0){
        return b;
    }
    __gcd(b, a%b);
}
lln solve(lln n,lln x,lln y){
    ll a, b, up, down;
    set<pi>ps;   
    for (lln i = 0; i < n; i++)
    {
        cin>>a>>b;
        up = y-b;
        down = x -a;
        lln gd =__gcd(up, down);
        up /=gd;
        down /= gd;
        ps.insert(make_pair(up, down));
    }
    
   return ps.sz;
}
ll main(){
     speed();
lln a, b, c;
cin>>a>>b>>c;
       cout<<solve(a, b, c);  
     ed
     return 0;
}