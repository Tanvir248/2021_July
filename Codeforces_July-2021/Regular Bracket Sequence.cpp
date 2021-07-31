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
ls s;
ll solve(){   
   //freopen("input.txt", "r", stdin);
    cin>>s;
    ll cnt1=0, cnt2=s.sz;
    for (ll i = 0; i < s.sz; i++)
    {
        if(s[i]=='('){
            cnt1++;
        }else if(s[i]==')'){
            cnt1--;
            if(cnt1<0){
                cnt2--;
                cnt1=0;
            }
        }        
    }

    return cnt2-cnt1;
}
int main(){
     speed();

      cout<< solve();  
     ed
     return 0;
}