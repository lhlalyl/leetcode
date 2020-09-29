#include<iostream>
#include<string>

using namespace std;

int main() {
	string num1 = "123";
	string num2 = "2341";
    int flag = 0;
    if (num1.size() > num2.size()) {
        string s1(num1.size() - num2.size(), '0');
        num2 = s1 + num2;
    }
    else if (num1.size() < num2.size()) {
        string s1(num2.size() - num1.size(), '0');
        num1 = s1 + num1;
    }
    string res;
    for (int i = num1.size() - 1; i >= 0; --i) {
        int num = ((int)(num1[i] - '0')) + ((int)(num2[i] - '0'));
        res.push_back((num + flag) % 10+'0');
        flag = (num + flag) / 10;
    }
    if(flag>0)
        res.push_back(flag + '0');
    string ans;
    for (int i = res.size() - 1; i >= 0; --i) {
        ans.push_back(res[i]);
    }
    cout << ans;
}

class Solution {
public:
    string addStrings(string num1, string num2) {
        int flag = 0;
        if (num1.size() > num2.size()) {
            string s1(num1.size() - num2.size(), '0');
            num2 = s1 + num2;
        }
        else if (num1.size() < num2.size()) {
            string s1(num2.size() - num1.size(), '0');
            num1 = s1 + num1;
        }
        string res;
        for (int i = num1.size() - 1; i >= 0; --i) {
            int num = ((int)(num1[i] - '0')) + ((int)(num2[i] - '0'));
            res.push_back((num + flag) % 10 + '0');
            flag = (num + flag) / 10;
        }
        if (flag > 0)
            res.push_back(flag + '0');
        string ans;
        for (int i = res.size() - 1; i >= 0; --i) {
            ans.push_back(res[i]);
        }
        return ans;
    }
};