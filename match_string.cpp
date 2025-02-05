// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    string a="string";
    string str="tr";
    for(int i=0;i<a.size()-str.size()+1;i++){
        int ind=0;
        int ind1=i;
        while(ind<str.size()){
            if(a[ind1]!=str[ind]){
                break;
            }
            else{
                ind++;
                ind1++;
            }
        }
        if(ind==str.size()){
            cout<<true;
            return 0;
        }
    }
    cout<<false;

    return 0;
}
