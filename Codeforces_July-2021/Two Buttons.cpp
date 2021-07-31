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
lln solve(lln n1 ,lln n2){  
     
  lln ans =0;
   if(n2<n1){
       return n1-n2;
   } else{
       
       while(n2>n1){
           if(n2%2 ==0){
               n2/=2;
               ans++;
           }else{
            n2++;  
             ans++;
               
           }
       }
   }
   return abs(ans+n1-n2);
}
int main(){
     speed();
lln a,b;
cin>>a>>b;
      cout<< solve(a, b);  
     ed
     return 0;
}