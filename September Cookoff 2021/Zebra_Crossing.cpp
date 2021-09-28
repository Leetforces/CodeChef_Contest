/*
    Author: Manish Kumar
    Username: manicodebits
  Created: 21:51:35 19-09-2021
*/


#include <bits/stdc++.h>
using namespace std;
#define int long long
#define PI 3.141592653589
#define MOD 1000000007
#define FAST_IO ios_base::sync_with_stdio(false), cin.tie(0)
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] " 
template <typename A, typename B>
ostream &operator<<(ostream &out, const pair<A, B> &a)
{
  out << "(" << a.first << "," << a.second << ")";
  return out;
}
template <typename T>
ostream &operator<<(ostream &out, const vector<T> &a)
{
  out << "[";
  bool first = true;
  for (auto &v : a)
  {
    out << (first ? "" : ", ");
    out << v;
    first = 0;
  }
  out << "]";
  return out;
}
template <typename T, class Cmp>
ostream &operator<<(ostream &out, const set<T, Cmp> &a)
{
  out << "{";
  bool first = true;
  for (auto &v : a)
  {
    out << (first ? "" : ", ");
    out << v;
    first = 0;
  }
  out << "}";
  return out;
}
template <typename T, class Cmp>
ostream &operator<<(ostream &out, const unordered_set<T, Cmp> &a)
{
  out << "{";
  bool first = true;
  for (auto &v : a)
  {
    out << (first ? "" : ", ");
    out << v;
    first = 0;
  }
  out << "}";
  return out;
}
template <typename U, typename T, class Cmp>
ostream &operator<<(ostream &out, const map<U, T, Cmp> &a)
{
  out << "{";
  bool first = true;
  for (auto &p : a)
  {
    out << (first ? "" : ", ");
    out << p.first << ":" << p.second;
    first = 0;
  }
  out << "}";
  return out;
}
template <typename U, typename T, class Cmp>
ostream &operator<<(ostream &out, const unordered_map<U, T, Cmp> &a)
{
  out << "{";
  bool first = true;
  for (auto &p : a)
  {
    out << (first ? "" : ", ");
    out << p.first << ":" << p.second;
    first = 0;
  }
  out << "}";
  return out;
}
template <typename U, typename T, class Cmp>
ostream &operator<<(ostream &out, const multimap<U, T, Cmp> &a)
{
  out << "{";
  bool first = true;
  for (auto &p : a)
  {
    out << (first ? "" : ", ");
    out << p.first << ":" << p.second;
    first = 0;
  }
  out << "}";
  return out;
}
#ifndef LOCAL
#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define debug(...) 17
#endif
template <typename Arg1>
void __f(const char *name, Arg1 &&arg1)
{
   cerr << name << ": " << arg1 <<"\n";
}
template <typename Arg1, typename... Args>
void __f(const char *names, Arg1 &&arg1, Args &&...args)
{
  const char *comma = strchr(names + 1, ',');
  cerr.write(names, comma - names) << ": " << arg1 << " | ";
  __f(comma + 1, args...);
}



void solve(){ 
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    
    vector<int> one,zero;
    for(int i=0;i<n;i++){
        if(s[i]=='1')
        one.push_back(i+1);
        else 
        zero.push_back(i+1);
    }
    
    int cnt=0;
    char curr=s[0];

    for(int i=1;i<n;i++){
        if(s[i]!=curr){
            cnt++;
            curr=s[i];
        }
    }
    if(one.size()==0 || zero.size()==0 || cnt<k){
        cout<<"-1\n";
        return;
    }
    if(s[0]=='1'){
        if(k&1){
            cout<<zero.back()<<"\n";
        }
        else{
            cout<<one.back()<<"\n";
        }
    }
    else{
        if(k&1){
            cout<<one.back()<<"\n";
        }
        else{
            cout<<zero.back()<<"\n";
        }
    }

    // debug(one,zero);

}


signed main(){
FAST_IO;
int t=1;
cin>>t;
while(t--)
solve();
return 0;
}
