#include<iostream>
#include<string>
#include"Finder.h"
#include<vector>
using namespace std;

int main(){
    Finder fff;
    vector<int>ints=fff.findSubstrings("4634554567","45689");
    for(int i=0; i<ints.size(); i++){
        cout<<ints.at(i);
    }
    return 0;
}

