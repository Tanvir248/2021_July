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
  // freopen("input.txt", "r", stdin);
    lln t;
    cin>>t;
    while(t--){
        bool ok_w = false, ok_b = false;
        lln n, k1, k2, w, b, b1= 0, b2 = 0;
        cin>>n>>k1>>k2>>w>>b;

        if(k1 < k2)swap(k1,k2);
        b1 = n - k1, b2 = n - k2;

        k1 -= k2;
        lln div_w = (k1 / 2);
        lln left_w = w - k2;
        if(div_w >= left_w)ok_w = true;

        if(b1 < b2)swap(b1,b2);
        b1 -= b2;
        lln div_b = (b1 / 2);
        lln left_b = b - b2;
        if(div_b >= left_b)ok_b = true;

        if(ok_w == true && ok_b == true){
     yes       }
        else{
         no
         }
    }
}
int main(){
     speed();

       solve();  
     
     return 0;
}