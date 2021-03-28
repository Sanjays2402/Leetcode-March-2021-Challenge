class Solution {
public:
    string originalDigits(string s) {
        
        //vector<string> word = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        string res = "";
        unordered_map<char, int> hash;
        vector<int> count(10, 0);
        for(char i: s)
            hash[i]++;
        
        count[0] = hash['z'];
        count[2] = hash['w'];
        count[4] = hash['u'];
        count[6] = hash['x'];
        count[8] = hash['g'];
        
        count[1] = hash['o'] - count[0] - count[2] - count[4];
        count[3] = hash['r'] - count[4] - count[0];
        count[5] = hash['f'] - count[4];
        count[7] = hash['v'] - count[5];
        count[9] = hash['i'] - count[5] - count[6] - count[8];
        
        for(int i=0; i<10; i++)
        {
            if(count[i] != 0)
                res += string(count[i], i+'0');
        }
        return res;
    }
};
