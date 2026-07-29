class Solution {
public:
    bool check(vector<int>& nums) {
        list<int> l1;

        for(int x : nums) {
            l1.push_back(x);
        }

        list<int> temp = l1;

        temp.sort();

        if(temp == l1) {
            return true;
        }

        for(int i=0;i<temp.size();i++) {
            temp.push_front(temp.back());

            temp.pop_back();

            if(temp == l1) {
                return true;
            }
        }

        return false;
    }
};