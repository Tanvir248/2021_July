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
lln BigMod(lln value, lln power, lln modu){   
    if(power ==0){
        return 1;
    }else if(power%2==1){
        lln a = value%modu;
        lln b = BigMod(a, power-1, modu);

        return (a*b)% modu;
    }else if(power% 2==0){
        lln val = BigMod(value, power/2, modu);
        return (val*val)%modu;
    }
}
int main(){
     speed();
lln a, b, c;
 cin>>a>>b>>c;
       cout<<BigMod(a, b, c);  
     ed
     return 0;
}