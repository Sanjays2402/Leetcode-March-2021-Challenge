class Solution {
public:
    int removePalindromeSub(string s) {
        if(s == "")
            return 0;
        if(s == string(s.rbegin(), s.rend()) || set(s.begin(), s.end()).size() == 1)
            return 1;
        return 2;
    }
};
