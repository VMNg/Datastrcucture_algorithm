#include <iostream>
using namespace std;
#include <string>
#include"math.h"

class Solution {
public:
    bool isPalindrome(string s) {
        string s1; 
        string s2;
        for(int i=0; i<=s.size(); i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
             s[i]=s[i]+32;
            }
            if(s[i]>=32 && s[i]<=64)
            {
            s.erase(s.begin()+i);
            }
        }
        for(int i=0; i<=round((s.size()-1)/2); i++)
        {
            s1[i]= s[i];
        }
        for(int i =(s.back()-i); i>=round((s.size()-1)/2); i--)
        {
            s2[i]= s[i];
        }
            if(s1==s2)
            return true;
        else return false;
    }
};

int main(){
    string s = "race a car";
    Solution sol;
    cout << sol.isPalindrome(s);
}