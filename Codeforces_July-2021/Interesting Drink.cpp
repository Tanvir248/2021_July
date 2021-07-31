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
} lln number_of_shop;
  lln number_of_day;

 void print(vi print){

 }
void dp( lln y[], lln num){
     vi add;
     ll cnt =0;
          cnt=upper_bound(y, y+number_of_shop, num)-y;

     add.pb(cnt);
     cnt=0;
          for (ll i = 0; i <add.sz; i++)
          {
               cout<<add[i]<<endl;
          }


}
void solve(){   
   freopen("input.txt", "r", stdin);
 cin>>number_of_shop;
  lln arr[number_of_shop];
  for (ll i = 0; i < number_of_shop; i++)
  {
       cin>>arr[i];
  }
  sort(arr, arr+number_of_shop);
  cin>>number_of_day;
 lln day[number_of_day];
 for (ll i = 0; i < number_of_day; i++)
 {   lln num;
 cin>>num;
 dp(arr,num);
      
 }
 
}
int main(){
     speed();

       solve();  
     
     return 0;
}