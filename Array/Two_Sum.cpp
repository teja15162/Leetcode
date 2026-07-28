class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> temp;

        for(int i=0;i<nums.size();i++) {
            temp.push_back({nums[i],i});
        }

        sort(temp.begin(),temp.end());

        int st = 0;
        int end = temp.size()-1;

        while(st < end) {
            int sum = temp[st].first + temp[end].first;

            if(sum == target) {
                return {temp[st].second, temp[end].second};
            }

            if(sum < target) {
                st++;
            } else {
                end--;
            }
        }

        return {-1,-1};
    }
};