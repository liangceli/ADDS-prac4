#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
using namespace std;

int main(){

string str="45689";
string str1="4634554567";

vector<int> result;

vector<string> strings;

string element;

for(size_t i = 0; i < str.size(); i++) {  
    //size_t found = s1.find(s2.substr(0, i));
    element+=str.at(i);
    strings.push_back(element);
}
for(size_t j=0; j<str1.size();j++){
    //size_t index=str1.find(strings.begin(), strings.end(), "456");
    size_t index;
    for(size_t h=0; h<strings.size();h++){
        index=str1.find(strings.at(h),j);
        if(index!= string::npos){
        result.push_back(index);
    }else{
        for(size_t r=j; r<str1.size(); r++){
            result.push_back(-1);
        }
        //return results;
    }
    //return result;
    }
}


for(size_t l=0; l<strings.size(); l++){
cout<<result.at(l)<<endl;
}
    return 0;
}