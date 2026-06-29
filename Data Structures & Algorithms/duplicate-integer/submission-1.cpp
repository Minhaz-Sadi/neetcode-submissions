class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int>s;

        for(auto u:nums){
            if(s.count(u)) return true;
            else s.insert(u);
        }
        return false;
        
    }
};