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
#define mi map<char, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}  ls s1, s2;
ls solve(){   
   //freopen("input.txt", "r", stdin);
    ll i;
  
    getline(cin, s1);
    getline(cin, s2);
  mi mp;
  mi::iterator it;
  for (i = 0; i < s1.sz; i++)
  {
      mp[s1[i]]+=1;
  }
  bool flag = false;
  // for(auto&x: mp){
  //   cout<<x.first<<" "<<x.second<<endl;
  // }
  
  for ( i = 0; i < s2.sz; i++)
  {
    if(mp[s2[i]]>0 || s2[i]==' '){
        mp[s2[i]]--;
        continue;
    }else {
      flag = true;
   break;
    }
  }
  if(flag==false){
    return "YES";
  }else return "NO";
  }
int main(){
     speed();

       cout<<solve();  
     ed
     return 0;
}