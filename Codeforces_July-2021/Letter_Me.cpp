

#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
  // freopen("input.txt", "r", stdin);
        ll j,k;
        bool f1=true;
        set<string>st1, st2;
      //  map<char,int> mp::iterator it;
        string s1,s2, ans;

        getline(cin,s1);
        getline(cin,s2);

    if(s2.size()==1|| s1.size()==1){
bool flag = false;
           for (ll i = 0; i < s1.size(); i++)
            {
                for(ll j = 0; j<s2.size(); j++){
                        if(s1[i]==s2[j]){
                    flag =true;                            
                                }
                }
            }
            if(flag ==true){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
            return 0;
    }
        for(ll i=0;i<s1.length();i++)
        {
            if(!isspace(s1[i])){
                ans.push_back(s1[i]);
            }
            if(isspace(s1[i])){
                if(ans.size() !=1)
                st1.insert(ans);
                ans.clear();
            }
            if(i == s1.size()-1 ){
                if(ans.size() !=1)
                st1.insert(ans);
                ans.clear();
            }
            }
        for (ll i = 0; i < s2.size(); i++)
            {
                 if(!isspace(s2[i])){
                ans.push_back(s2[i]);
            }
            
            if(isspace(s2[i])){
                if(ans.size() !=1){
                st2.insert(ans);
                }
                ans.clear();
            }
            if(i == s2.size()-1 ){
                if(ans.size() !=1)
                st2.insert(ans);

                ans.clear();
            }
        
            }
            if(st1.size()==0|| st2.size()==0){
                cout<<"YES"<<endl;
                return 0;
            }

  vector<string> v;
	merge(st1.begin(), st1.end(), st2.begin(), st2.end(), back_inserter(v));    
           bool flag = false;
           sort(v.begin(), v.end());
          for (ll i = 0; i < v.size(); i++)
          {
            //  cout<<v[i]<<" "<<v[i+1]<<" ";
              if(v[i]==v[i+1]){
                  flag = true;
                 // cout<<1<<" ";
                  break;
              }
          }
          if(flag==true){
             cout<<"YES";
          }else{
              cout<<"NO";
          }cout<<endl;
          
           }