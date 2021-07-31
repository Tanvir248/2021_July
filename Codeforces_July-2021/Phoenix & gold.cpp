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
const int N = int(1e5 + 3);
void solve(){   
  
	ll n,x;
  ll arr[101];
  cin>>n>>x;
     ll sum=0;
      for (int i=0;i<n;i++){
         cin>>arr[i];
       sum+=arr[i];
              }

  if (sum==x){
    no
	return;
  }
  yes
  for (int i=0;i<n;i++){
    if (x==arr[i]){
		swap(arr[i],arr[i+1]);
    }
    cout<<arr[i]<<' ';
    x-=arr[i];
  }
  cout<<endl;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
		  // freopen("input.txt", "r", stdin);
   ll t;
   cin>>t; 
     while(t--){
		
	 solve();
	 }
     return 0;
}