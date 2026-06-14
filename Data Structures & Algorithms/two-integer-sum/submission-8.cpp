class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> idxnum;

        for(int i = 0; i < nums.size(); i++){
            int key = target - nums[i];
            if(idxnum.count(key) > 0) {
                return {idxnum[key], i};
            }
            idxnum[nums[i]] = i;
        }

    }

};
