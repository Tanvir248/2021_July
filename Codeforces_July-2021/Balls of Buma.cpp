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
ll a[N], loc[N];
void solve(){   
 //freopen("input.txt", "r", stdin);
   int num=0;
    cin>>s;
    s+='a';
    int len=s.length()-1;
    int t=0;
    for(int i=0;i<len;i++){
        a[i]=++t;
        if(s[i]!=s[i+1]){
            t=0;
            loc[++num]=i;
        }
    }
    if(!num%2){
        cout<<0<<endl;
        return;
    }
    for(int i=1;i<=num/2+1;i++){
        if(s[loc[i]]!=s[loc[num+1-i]]||a[loc[i]]+a[loc[num+1-i]]<3){
            cout<<0<<endl;
            return;
        }
    }
    cout<<a[loc[num/2+1]]+1<<endl;  
}
int main(){
     speed();

       solve();  
     
     return 0;
}