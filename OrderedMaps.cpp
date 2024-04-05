#include<iostream>
#include<map>
using namespace std;

int main() {
    // map<int,int> m;
    // m[2] = 20;
    // m[1] = 30;
    // m[3] = 10;
    // for(auto x : m) {
    //     cout<<x.first<<" ";
    //     cout<<x.second<<" ";
    // }

    map<string,int> m;
    m["Ragav"] = 76;
    m["Harsh"] = 10;
    m["Sanket"] = 52;
    for(auto x : m) {
        cout<<x.first<<" ";
        cout<<x.second<<" ";
    }

    return 0;
}