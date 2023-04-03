#include "Finder.h"
using namespace std;
vector<int> Finder::findSubstrings(string s1, string s2) {

vector<int> result;

vector<string> strings;

string element;

for(size_t i = 0; i < s2.size(); i++) {  
    element+=s2.at(i);
    strings.push_back(element);
}

for(size_t j=0; j<s1.size();j++){
    size_t index;
    for(size_t h=0; h<strings.size();h++){
        index=s1.find(strings.at(h),j);
        if(index!= string::npos){
        result.push_back(index);
    }else{
        for(size_t r=j; r<s1.size(); r++){
            result.push_back(-1);
        }
        return result;
    }
    }
    return result;
}
return result;
}