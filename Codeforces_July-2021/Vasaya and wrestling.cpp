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
void solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   ll t;
   cin>>t;
   ll arr[t];
   vi add1,add2;
   lln sump=0, summ =0, comp;
   for(ll i =0; i<t; i++){
       cin>>arr[i];
       comp = arr[t-1];
       if(arr[i]>0){
           sump+=arr[i];
           add1.pb(arr[i]);
       }else if(arr[i]<0){
           add2.pb(-(arr[i]));

           summ+=abs(arr[i]);
        
       }
   }
   //cout<<sump<<" "<<summ;
   if(sump>summ){
       cout<<"first";
ed  
return; 
}else if(summ>sump){
    cout<<"second";
    ed
return;
}else{
    for(ll i =0; i<min(add1.sz, add2.sz);i++){
        if(add1[i]>add2[i]){
            cout<<"first";
            ed
            return;
        }else if(add2[i]>add1[i]){
            cout<<"second";ed
            return;
        }
    }
}
if(add1.sz>add2.sz){
            cout<<"first";ed
            return;
}else if(add2.sz>add1.sz){
     cout<<"second";ed
            return;
}
if(sump == summ && comp >0){
    cout<<"first";ed
            //return;
}else if(sump == summ && comp <0)
     cout<<"second";ed
            //return;
}
int main(){
     speed();

       solve();  
     
     return 0;
}