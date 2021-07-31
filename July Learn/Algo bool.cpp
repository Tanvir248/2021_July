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
bool solve(ll n){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   ll num;
   bool flag;
   for(ll i =1; i<=n*2; i++){
       ll arr[2]={0};
       cin>>num, arr[num%2]++;
       if(arr[0]==n){
            flag =true;
            return flag;
       }else {
     flag = false;
     return flag;
       }
   }
}
int main(){
     speed();
     ll t;
     cin>>t;
     while(t--){
ll a;
cin>>a;
       if(solve(a)== true){
           yes
       }else{
           no
       } 
       } 
     
     return 0;
}