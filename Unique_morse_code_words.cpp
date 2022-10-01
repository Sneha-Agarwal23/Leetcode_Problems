class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        vector<string> morsecode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(auto i : words)
        {
            string x = "";
            for(auto ch : i)
            {
                x += morsecode[ch - 'a'];
            }
            s.insert(x);
        }
        return s.size();
        
    }
};