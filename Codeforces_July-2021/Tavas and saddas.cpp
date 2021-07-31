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
ll solve(ll sum){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
    lln l,i,x,find;
    string s;
    while(cin>>s){
        l=s.size();x=1;
        for(i=l-1;i>=0;i--){
            if(s[i]=='7')
                find=pow(2,x);
            else
                find=pow(2,x)-pow(2,x-1);

                x++;
                sum+=find;
        }
       return sum;
       }
}
int main(){
     speed();

ll ans =0;
      cout<< solve(ans);  
     ed
     return 0;
}