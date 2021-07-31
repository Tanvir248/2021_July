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
lln solve(lln b, lln p,lln m){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   if(p == 0){
       return 1;
   }else if(p%2 !=0){
       lln a = b%m;
       lln b = solve(a, p-1,m);
       return (a*b)%m;
   }else if(p%2==0){
        lln value = solve(b, p/2, m);
        return (value*value)%m;
   }
   
}
int main(){
     speed();
 lln a, b, c;
 while(cin>>a>>b>>c){
       cout<<solve(a, b, c);  
     ed
     }
     return 0;
}