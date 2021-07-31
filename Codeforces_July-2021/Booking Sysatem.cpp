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

int n,k;

struct node{
    int id;
    int c,p;
    int table_id;
    bool operator <(const node &a) const {
        return p > a.p;
    }
};

struct table{
    int id;
    int num;
    bool operator <(const table &a) const {
        return num < a.num;
    }
};

bool comp(node &a,node &b){
    return a.id<b.id;
}

node a[1005];
multiset<table> t;
set<table>::iterator it;
ll sum = 0,acc=0;

int main(){
  // freopen("input.txt", "r", stdin);
  cin>>n;
    for(int i=1;i<=n;i++){
        a[i].id = i;
       cin>>a[i].c>>a[i].p;
       }
 cin>>k;
    table temp;
    for(int i=1;i<=k;i++){
        temp.id = i;
        cin>>temp.num;
        t.insert(temp);
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++){
        temp.num = a[i].c;
        it =  t.lower_bound(temp);
        if(it==t.end()){
            a[i].table_id = -1;
        }else{
            a[i].table_id = (*it).id;
            t.erase(it);
            sum+=a[i].p;
            acc++;
        }
    }
    cout<<acc<<" "<<sum<<endl;
    sort(a+1,a+1+n,comp);
    for(int i=1;i<=n;i++){
        if(a[i].table_id!=-1)
        cout<<i<<" "<<a[i].table_id<<endl;
    } 
    return 0;
} 