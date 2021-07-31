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
      lln a(0), x(0), y(0);
lln solve(){  
   
lln ans =-1;
    if(y > 0 && y < a){
        if(-a < 2*x && 2*x < a){
        ans = 1;
        }
        }
    else if((y/a)%2 == 0 && y > (y/a)*a && -a < x && x < 0){
        ans = 3 * (y/a) / 2;
    }
    else if((y/a)%2 == 0 && y > (y/a)*a && x > 0 && x < a){
        ans = 3 * (y/a)/2 + 1;
        }
    else if((y/a)%2 == 1 && y > (y/a)*a && -a < 2*x && 2*x < a){
        ans = (3 * (y/a) + 1)/2;
        }

  return ans;
}
int main(){
     speed();

   //freopen("input.txt", "r", stdin);
cin>>a>>x>>y;
      cout<<solve();  
     ed
     return 0;
}