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
 const int N = int(1e5 + 3);
#define SIZE 100
void solve(){   
  freopen("input.txt", "r", stdin);
   lln n1, num1,n2,num2 ;
    cin>>n1;
    ll arr[N];
    for (ll i = 0; i < n1; i++) {
        cin>>num1;
        arr[num1] = i + 1;
    }   
 
    lln sum1 = 0, sum2 = 0;
    cin>>n2;
    //arr[n2];    
    for (int i = 0; i < n2; i++) {
        cin>>num2;
        sum1 += arr[num2];
        sum2 += n1 - arr[num2] + 1;             
    }

  cout<<sum1<<" "<<sum2<<endl;
 
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
       solve();  
     
     return 0;
}