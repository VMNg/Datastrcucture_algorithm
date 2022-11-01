#include <iostream>
#include <math.h>
#include <string>
using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int sum = 0, sum1 = 0, sum2 = 0;
        int n = a.size();
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                sum1 += pow(2, ((n - 1) - i));
            }
        }
        int m = b.size();
        for (int i = 0; i < m; i++)
        {
            if (b[i] == '1')
            {
                sum2 += pow(2, ((m - 1) - i));
            }
        }
        sum = sum1 + sum2;
        int rem, temp = 1;
        string res = "";
        while (sum != 0)
        {
            rem = sum % 2;
            sum = sum / 2;
            res += to_string(rem);
        }
        string res_rev = "";
        for (int i = res.size() - 1; i >= 0; i--)
        {
            res_rev += res[i];
        }
        return res_rev;
    }
};

int main()
{
    Solution d;
    string a = "1001";
    string b = "101";
    cout << "result: " << d.addBinary(a,b);
    return 0;
}