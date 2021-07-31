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
ls s;
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void ans(bool flag, ll len){
    if(flag){
        for(ll i = 0; i < len; i++){
            if(s[i] == '?'){
                s[i] = 'A';
            }
        }
        cout << s << endl;
    }
    else{
        cout << "-1" << endl;
    }
}
ls solve(ll n){  
     if(n<26)
     return "-1";
}

int main(){
     speed();
     
 ll i, j, k, l, a[30];
    bool flag1, flag2;
    cin >> s;
    l = s.sz;
    if(l<26){
    cout<<solve(l);
    ed
    return 0;
    }
    flag2 = false;
    for(i = 0; i < l - 25; i++){
        memset(a, 0, sizeof(a));
        flag1 = true;
        for(j = i; j < i + 26; j++){
            if(s[j] == '?'){
                continue;
            }
            else{
                a[s[j] - 'A']++;
            }
            if(a[s[j] - 'A'] >= 2){
                flag1 = false;
                break;
            }
        }
        if(flag1){
            flag2 = true;
            for(j = i; j < i + 26; j++){
                if(s[j] == '?'){
                    for(k = 0; k < 26; k++){
                        if(a[k] == 0){
                            s[j] = 'A' + k;
                            a[k]++;
                            break;
                        }
                    }
                }
            }
            if(flag2){
                break;
            }
        }
    }

    ans(flag2, l);
    
     return 0;
}