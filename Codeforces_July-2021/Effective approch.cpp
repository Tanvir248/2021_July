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
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){   
   //freopen("input.txt", "r", stdin);
   ll n1, n2, num,x;
    cin>>n1;
    vi add1, add2,ans;
    for (ll i = 0; i < n1; i++)
    {
        cin>>num;
        add1.eb(num);
    }
    cin>>n2;
    for (ll i = 0; i < n2; i++)
    {
        cin>>x;
        add2.eb(x);
    }
    ll m=0, m1=0;
    if(n1>n2){
        m = n1;
        m1 = n2;
    }else{
      m=n2;
      m1 = n1;
      }
      //cout<<m1<<" "<<m;
    ll cnt1=0, cnt2=0;
    for (ll i = 0; i < m1; i++){
        if(add1[i]==add2[i]){
            ans.eb(add1[i]);
        }else{
            cnt1+=add1[i];
            cnt2+=add2[i];
        }
    }
    ll sum =0;
    //cout<<ans.sz;
    if(ans.sz !=0){
    for (ll i = 0; i < ans.sz; i++)
    {
        sum+= ans[i];
    }
      cout<<sum<<" ";
    }
    if(cnt1>cnt2){
        cout<<cnt1<<" ";
    }else if(cnt2>cnt1){
        cout<<cnt2<<" ";
    }
    if(cnt1==cnt2 && (cnt1 !=0 || cnt2 !=0)){
    cout<<cnt1<<" ";
    cout<<cnt2<<endl;
    return;
    }
    ll a = 0;
    //cout<<add1.sz<<" "<<add2.sz; 
    if(add1.sz>add2.sz){
         
        for (ll i = add2.sz; i < add1.sz; i++)
        {
            a+=add1[i];
        }
        cout<<a<<" ";
    }else if(add2.sz>add1.sz){
         
        for (ll i = add1.sz; i < add2.sz; i++)
        {
            a+=add2[i];
        }
       cout<<a<<" ";
    }
    cout<<endl;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
       solve();  
     
     return 0;
}