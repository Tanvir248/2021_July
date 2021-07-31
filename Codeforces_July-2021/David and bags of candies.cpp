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
ll arr[4];
ls solve(){   
   //freopen("input.txt", "r", stdin);
   sort(arr, arr+4);
	if(arr[0]+arr[1]+arr[2]== arr[3]){
		return "YES";
	}else if(arr[0]+arr[1]==arr[2]+arr[3]){
		return "YES";
	}else if(arr[0]+arr[2]==arr[3]+arr[1]){
		return "YES";
	}else if(arr[2]+arr[1]==arr[0]+arr[3]){
		return "YES";
	}
	return "NO";
}
int main(){
     speed();
for (ll i = 0; i < 4; i++)
{
	cin>>arr[i];
}

       cout<<solve();  
     ed
     return 0;
}