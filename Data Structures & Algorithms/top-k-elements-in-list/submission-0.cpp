class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> amount;
        vector<vector<int>> buckets(nums.size() + 1);

        for (int n : nums){
            amount[n]++;
        }

        for (auto& pairs : amount){
            buckets[pairs.second].push_back(pairs.first);

        }
        vector<int> result;
        for (int i = buckets.size() - 1; i >= 0; i--) {
            for (int n : buckets[i]) {
            result.push_back(n);
             if (result.size() == k) return result;
            }
        }
        return{};
    }
};