#include<bits/stdc++.h>
#define ed cout<<endl;
#define ll int
using ld = double;
using namespace std;
ld extraday2(ll a, ll b, ll c){
    ld ans =(ld)a*30.4167+(ld)b;
    if(a>1){
        ans-=2;
    }
    if(c%4==0 || c%100 ==0){
        ans+=1;
    }
    cout<<ans;
    ed
    return ans;
}
ld extraday1(ll a, ll b, ll c){
     ld ans =(12-(ld)a*30.4167)+(30-(ld)b);
    if(a>1){
        ans-=2;
    }
    if(c%4==0 || c%100 ==0){
        ans+=1;
    }
    //cout<<ans;
    return 356-ans;
}
int main(){
    ll y1, y2, m1,m2, d1, d2; 
    cout<<"Enter Year 1: ";
    cin>>y1;
   ed
    cout<<"Enter Month 1: ";
    cin>>m1;
    ed
    cout<<"Enter Day 1: ";
    cin>>d1;
    ed
      cout<<"Enter Year 2: ";
       cin>>y2;
   ed
    cout<<"Enter Month 2: ";
    cin>>m2;
    ed
    cout<<"Enter Day 2: ";
    cin>>d2;
    ed
      ld extraday =  extraday2(m2, d2, y2)+extraday1(m1, d1, y1);
     // cout<<extraday;
     // ed
    ll cnt=0;
    for (ll i = y1+1; i <= y2; i++)
    {
        if(i%4==0 || i%100==0){
            cnt++;
        }
    }
    ll x = y1+1;
    ll day = (y2-x)*365;
    day+=cnt;
    //cout<<day;
  //  ed
    ll n = day+extraday;
    cout<<"Total Age is: "<<n/365<<endl;
        ll a, b, c, ansd;
        a = n%365;
        //cout<<a<<endl;
        b = a/30;
       cout<<"Total Month is: "<<b<<endl;
        c = a%30;
    cout<<"Total Day is: "<<c<<endl;
    }