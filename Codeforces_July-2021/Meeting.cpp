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
const int N = int(1e5 + 3);
ll a[101], b[101],c[101], n;

ll ans(ll a1, ll b1, ll a2, ll b2){
    return (a1-a2)*(a1-a2) + (b1-b2)*(b1-b2);
}
bool check(ll x, ll y){
  for (ll i = 0; i < n; i++)
  {
    if(ans(x, y, a[i], b[i])<=(c[i]*c[i])){
      return 0;
  }
    }
  return 1;
}
// void solve(){   
//    //freopen("input.txt", "r", stdin);
//    ll n, num;
//     // cin>>n;
//     // vi add;

// }
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
      //  solve();  

      ll x1, y1, x2, y2, ans =0;
      cin>>x1>>y1>>x2>>y2;
      
      cin>>n;
     for (ll i = 0; i < n; i++)
     {
       cin>>a[i]>>b[i]>>c[i];
     }
     for (ll i = min(x1, x2); i <= max(x1, x2) ; i++){
       ans += check(i, y1)+check(i,y2);
     }
     for (ll i = min(y1, y2)+1; i <max(y1, y2); i++){
       ans += check(x1, i)+ check(x2,i);
     }

     cout<<ans<<endl;
     
     return 0;
}
/*#include<bits/stdc++.h>
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
const int N = int(1e5 + 3);
bool isClose(long x1,long y1,long x2,long y2,long r){
    if((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) <= r * r){
        return 1;
        }
    return 0;
}

int main(){

    long xa(0), ya(0), xb(0), yb(0); 
    cin>>xa>>ya>>xb>>yb;

    long xmin(0), xmax(0), ymin(0), ymax(0);
    if(xa < xb){xmin = xa; xmax = xb;} else{xmin = xb; xmax = xa;}
    if(ya < yb){ymin = ya; ymax = yb;} else{ymin = yb; ymax = ya;}

    set<pair<long,long>> coldGenerals;
    set<pair<long,long>>::iterator myIter;

    for(long k = ymin; k <= ymax; k++){coldGenerals.insert(pair<long,long>(xmin,k));}
    for(long k = ymin; k <= ymax; k++){coldGenerals.insert(pair<long,long>(xmax,k));}
    for(long k = xmin; k <= xmax; k++){coldGenerals.insert(pair<long,long>(k,ymin));}
    for(long k = xmin; k <= xmax; k++){coldGenerals.insert(pair<long,long>(k,ymax));}

    vector<pair<long,long>> radiators;
    vector<long> radii;

    long numRadiators(0); scanf("%ld", &numRadiators);

    for(long k = 0; k < numRadiators; k++){
        long xtemp(0), ytemp(0), tempRadius(0); scanf("%ld %ld %ld", &xtemp, &ytemp, &tempRadius); 
        radiators.push_back(std::pair<long,long>(xtemp,ytemp));
        radii.push_back(tempRadius);
    }

    for(long k = 0; k < numRadiators; k++){
        myIter = coldGenerals.begin(); 
        while(myIter != coldGenerals.end()){
            if(isClose(myIter->first, myIter->second,radiators[k].first,radiators[k].second,radii[k])){coldGenerals.erase(myIter); myIter = coldGenerals.begin();}
            else{myIter++;}
        }
    }


    cout<< coldGenerals.size();
cout<<endl;
    return 0;
}
*/