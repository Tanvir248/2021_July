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

char a[1005],b[1005];
ll lena,lenb;
 
bool  automaton(){
    int i=0,j=0,flag=0;
    while(a[i]!='\0')
    {
        if(a[i]==b[j])
        {
            i++;
            j++;
            flag++;
        }
        else
        {
            i++;
        }
    }
    if(flag==lenb) return true;
    return false;
}
 
 
int main()
{
  // freopen("input.txt", "r", stdin);
    int i,j;
    int c[500],d[500];
    cin>>a;
    cin>>b;
    lena=strlen(a);
    lenb=strlen(b);
    if(lenb>lena)
    {
        printf("need tree\n");
        return 0;
    }
    if(lena==lenb)
    {
        memset(c,0,sizeof c);
        memset(d,0,sizeof d);
        for(i=0;i<lena;i++)
            c[a[i]]++;
        for(i=0;i<lenb;i++)
            d[b[i]]++;
        ll ans=0;
        for(i='a';i<='z';i++)
            if(c[i]==d[i])
            ans++;
        if(ans==26)
        {
            printf("array\n");
            return 0;
        }
    }
    else if(automaton())
    {
        cout<<"automaton";
        ed
        return 0;
    }
        memset(c,0,sizeof c);
        memset(d,0,sizeof d);
        ll anss=0;
        for(i=0;i<lenb;i++)
            d[b[i]]++;
        for(i=0;i<lena;i++)
            c[a[i]]++;
            for(i='a';i<='z';i++)
                if(d[i]!=0)
                anss++;
        int an=0;
        for(i='a';i<='z';i++)
            if(c[i]>=d[i]&&d[i]!=0)
                an++;
        //cout<<an<<" "<<anss<<endl;
        if(an==anss)
        {
            cout<<"both";
            ed
            return 0;
        }
        cout<<"need tree";
        ed 
    return 0;
}

