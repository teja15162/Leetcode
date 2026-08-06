class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cad = 0;
        int vote = 0;

        for(int x : nums) {
            if(vote == 0) {
                cad = x;
            }

            if(x == cad) {
                vote++;
            } else {
                vote--;
            }
        }

        return cad;
    }
};