class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        multiset<int>s;

        for(auto u:nums){
            s.insert(u);
            if(s.count(u)>1) return true;
        }
        return false;
        
    }
};