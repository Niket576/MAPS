#include<iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<string,int> m;
    // pair<string,int> p1;
    // p1.first = "Manav";
    // p1.second = 76;
    // pair<string,int> p2;
    // p2.first = "Davan";
    // p2.second = 33;
    // pair<string,int> p3;
    // p3.first = "Asur";
    // p3.second = 77;
    // m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);
    // for(pair<string,int> p: m) {    // for(auto p: m)
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    m["Manav"] = 36;
    m["Danav"] = 55;
    m["Asur"] = 99;
    for(auto p : m) {
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<m.size()<<endl;
    m.erase("Manav");
    cout<<m.size()<<endl;

    return 0;
}