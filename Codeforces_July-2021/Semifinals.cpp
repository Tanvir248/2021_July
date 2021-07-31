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
const int N = int(1e6 + 100);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}

int n, i, x, y, a[N], b[N];
void solve(){   
  // freopen("input.txt", "r", stdin);
   cin>>n;
   for ( i = 0; i < n; i++)
   {
        cin>>a[i]>>b[i];
        (a[x]<b[y]?x:y)++;
   }
   for ( i = 0; i <n; i++)
   {
        cout<<(i < max(x, n / 2) ? '1' : '0');
   }ed
    for ( i = 0; i <n; i++)
   {
        cout<<(i < max(y, n / 2) ? '1' : '0');
   }
   ed   
}
int main(){
     speed();

       solve();  
     
     return 0;
}