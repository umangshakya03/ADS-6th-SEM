#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> v={"abcd","efgh","ijkl","mnop","qrst","uvwx"};
    for(int i=0;i<v.size();i+=2){
        cout<<v[i]<<" ";
    }
    for(int i=v.size()-1;i>=0;i-=2){
        cout<<v[i]<<" ";
    }

    return 0;
}
