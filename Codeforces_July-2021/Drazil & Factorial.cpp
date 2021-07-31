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
   //freopen("input.txt", "r", stdin);
   ll n, v;
    cin >> n;
    mi counts;
    char c;

    for (int i = 0 ; i < n ; i++)
    {
        cin >> c;
        v = c - '0';
        if (v == 2)
            counts[2]++;
        else if (v == 3)
            counts[3]++;
        else if (v == 4)
            counts[2] += 2, counts[3]++;
        else if (v == 5)
            counts[5]++;
        else if (v == 6)
            counts[3]++, counts[5]++;
        else if (v == 7)
            counts[7]++;
        else if (v == 8)
            counts[2] += 3, counts[7]++;
        else if (v == 9)
            counts[2] += 1, counts[3] += 2, counts[7]++;
    }

    for (int i = 9; i >= 2; i--)
    {
        while (counts[i])
        {
            cout << i;
            counts[i]--;
        }
    }
    ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}