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
ls multi(string s, int k){
    ls ans ="";
    while (k--)
    {
        ans+=s;
    }
    return ans;
};

string solve(ls s1, ls s2){   
   //freopen("input.txt", "r", stdin);
   ll L1 = s1.sz;
   ll L2 = s2.sz;
    ll gd =__gcd(L1, L2);
    if(multi(s1, L2/gd)==multi(s2, L1/gd) ){
        return multi(s1, L2/gd);
    }else return "-1";
}
int main(){
     speed();
    ll t;
    cin>>t;
    while(t--){
       ls a,b;
       cin>>a>>b;
      cout<< solve(a, b);
      ed 
       }

     
     return 0;
}