#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.length();
    int intval;
    vector <int> v;
    for(int i=0;i<n;i++){
        if(str[i] == '+')
        continue;
        else{
        intval = str[i]-'0';
        v.push_back(intval);
        }

    }

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(i==v.size()-1)
        cout << v[i];
        else
        cout << v[i]<<'+';
    }
}