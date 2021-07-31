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
   ll n, m, arr[1000];
void solve(){   
   //freopen("input.txt", "r", stdin);
   
    for (int i = 0; i < m; ++i)
    {
        cin >> arr[i];
    }

    sort(arr, arr + m);
    int minimum=0, num=arr[0], k=0;
    for (int i = 0; i < n; ++i)
    {
        minimum += num;
        num -= 1;
        if (num == 0)
        {
            num = arr[++k];
        }
    }

    sort(arr, arr + m, greater<int>());
    int maximum=0;
    while (n--)
    {
        maximum += arr[0];
        arr[0] -= 1;
        for (int i = 1; i < m; ++i)
        {
            if (arr[i] <= arr[i-1])
            {
                break;
            }
            swap(arr[i], arr[i-1]);
        }
    }

    cout << maximum << " " << minimum << endl;

}
int main(){
     speed();
 cin >> n >> m;
       solve();  
     
     return 0;
}