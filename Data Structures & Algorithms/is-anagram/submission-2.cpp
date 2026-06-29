class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char, int>ctS;
        unordered_map<char, int>ctT;

        for(int i=0; i<s.size(); i++){
            ctS[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            ctT[t[i]]++;
        }

        for(int i =0 ; i <s.size(); i++){
            if(ctS[s[i]] != ctT[s[i]]) return false;
        }
        for(int i =0 ; i <t.size(); i++){
            if(ctS[t[i]] != ctT[t[i]]) return false;
        }
        return true;
    }
};
