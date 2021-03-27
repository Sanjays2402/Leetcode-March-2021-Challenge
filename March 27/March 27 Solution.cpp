class Solution {
public:
    int countSubstrings(string s) {
        
        int n = s.size(), ct = n;
        vector<vector<int>> a(n, vector<int> (n, 0));
        for(int i=0; i<n; i++)
            a[i][i] = 1;
        
        for(int i=0; i<n-1; i++)
        {
            if(s[i] == s[i+1])
                a[i][i+1] = 1, ct++;
        }
        for(int i=2; i<n; i++)
        {
            for(int j=0; j<n-i; j++)
            {
                if(a[j+1][j+i-1] && s[j] == s[j+i])
                    a[j][j+i] = 1, ct++;
            }
        }
        return ct;
    }
};
