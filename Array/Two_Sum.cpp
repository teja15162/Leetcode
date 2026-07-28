class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i=0;i<nums.size();i++) {
            mp[nums[i]] = i;
        }

        for(int i=0;i<nums.size();i++) {
            int want = target - nums[i];

            if(mp.find(want) != mp.end() && i != mp[want]) {
                return {i, mp[want]};
            }
        }

        return {-1,-1};
    }
};