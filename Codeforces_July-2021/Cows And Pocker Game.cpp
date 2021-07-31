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
ll num;
ll solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  char arr[num];
  for (ll i = 0; i <num; i++)
  {
    cin>>arr[i];
  }
  ll A = count(arr, arr+num, 'A');
  ll F = count(arr, arr+num, 'F');

  ll I = count(arr, arr+num, 'I');
  if(I==1){
    return 1;
  }else if(I==0){
    return A;
  }else {
    return 0;
  }
}
int main(){
     speed();
cin>>num;
      cout<< solve();  
     ed
     return 0;
}