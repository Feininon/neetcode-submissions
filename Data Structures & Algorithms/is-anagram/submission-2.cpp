#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    string sortString(string &s)
    {
        sort(s.begin(), s.end());
        return s;
    }

    bool isAnagram(string s, string t) {
        if(sizeof(s)!=sizeof(t)){
            return false;
        }
        string sort_s;
        string sort_t;
        sort_s = sortString(s);
        sort_t = sortString(t);
        if(sort_s == sort_t){
            return true;
        }
        return false;

        
    }
};
