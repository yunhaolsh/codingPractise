#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
class Solution {
public:
    char firstUniqChar(string s) {
    vector<char>mem;
    for (int i = 0; i < s.length(); ++i)
       {
           char c = s[i];
           if (find(mem.begin(), mem.end(), c) == mem.end())
           {
               int cnt = 0;
                for (int j = 0; j < s.length(); ++j)
                {
                    if(c == s[j]) ++cnt;
                }
                if (cnt == 1) return c;
                mem.push_back(c);
            }
        }
        return ' ';
    }
};

#include <unordered_map>
class solution {
public:
    char firstUniqChar(string s) {
        unordered_map<char, bool>mem;
        // for (auto c : s)
        // {
        //     bool alreadyHas;
        //     if (mem.find(c) == mem.end())
        //     {
        //         alreadyHas = false;
        //     }
        //     else alreadyHas = true; 
        //     mem[c] = alreadyHas;
        // }
        for (auto c : s)
        {
            mem[c] = !(mem.find(c) == mem.end());
        }

        for (char c : s)
        {
            if (!mem[c])
                return c;
        }
        return ' ';
    }
};

class Solution{
public:
    char firstUniqChar(string s) {
        if (s == "") return ' ';
        vector<int>mem(26, 0);
        for (int i = 0; i < s.length(); ++i)
        {
            int tmp = s[i] - 'a';
            mem[tmp]++;
        }
        for (int i = 0; i <s.length(); ++i)
        {
            if (mem[s[i] - 'a'] == 1)
                return s[i];
        }
        return ' ';
    }
};