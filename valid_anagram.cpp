#include<iostream>
#include<string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) { 
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t; 
    }
};

int main(){
    Solution a;
    string s = "hello123";
    string t = "hello123";
    cout << a.isAnagram(s,t);
    //true is 1 and faulse 0 
}