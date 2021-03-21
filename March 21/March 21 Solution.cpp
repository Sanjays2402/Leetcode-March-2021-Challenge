class Solution {
public:
    bool reorderedPowerOf2(int N) {
        
        unordered_map<string, int> hash;
        
        for(int i=0; pow(2, i) < pow(10, 9); i++)
        {
            int a = pow(2, i);
            string s = to_string(a);
            sort(s.begin(), s.end());
            hash[s] = 1;
        }
        
        string p = to_string(N);
        sort(p.begin(), p.end());
        
        return hash[p];
    }
};
