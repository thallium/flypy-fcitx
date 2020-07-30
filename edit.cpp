#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); ++i)
#define for1(i, n) for (int i = 1; i <= int(n); ++i)
#define F first
#define S second
#define all(x) (x).begin(),(x).end()
#define sz(x) int(x.size())
#define pb push_back

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("flypy.txt","r",stdin);
    freopen("flypy_phone.txt","w",stdout);
    string s;
    regex regexp("[a-z]+"); 
    regex reg("[a-z]+\t"); 
    bool find_data=false;
    while(getline(cin,s)){
        if(s=="[Data]"){
            find_data=true;
            continue;
        }
        if(!find_data) continue;
        smatch match;
        regex_search(s,match,regexp);
        assert(match.size()==1);
        cout<<regex_replace(s,reg,"")+'\t'+string(match[0].F,match[0].S)<<endl;
    }
    return 0;
}

