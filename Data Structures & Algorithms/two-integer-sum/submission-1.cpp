class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

    unordered_map<int, int>m;

    vector<int>ans;

    for(auto u:nums) m[u]++;
    for(int i=0; i<nums.size(); i++){
        int x = target - nums[i];
        if(x == nums[i] && m[x]>1){
            ans.push_back(i);
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] == x){
                    ans.push_back(j);
                    break;
                }
            }
            break;
        }
        if(m[x] >= 1 && x != nums[i]){
            ans.push_back(i);
            for(int j=i+1; j<nums.size(); j++){
                if(nums[j] == x){
                    ans.push_back(j);
                    break;
                }
            }
            break;
        }
    }
    return ans;

        
}
};
