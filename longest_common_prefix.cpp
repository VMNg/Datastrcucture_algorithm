#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Solution {
public:
string longestCommonPrefix(vector<string>& strs) {
int k=0,i;
string first;
string store;
first=strs[0];
for(i=0; i<first.size(); i++)
{

    for(int j=1; j<strs.size(); j++)
    {
        if(first[i]==strs[j][i])
        {
            k++;
        }
        else goto Not_equal_soEnd;

    }
    
    if(k==strs.size()-1)
    {
        store.push_back(first[i]);
    }
    k=0;

}
    Not_equal_soEnd:
if(store.length()==0)
    return "";
else
    return store;
}
};

int main(){
    Solution a;
    vector<string> strs = {"hello", "hi", "help"};
    cout << a.longestCommonPrefix(strs);
    return 0;
}
