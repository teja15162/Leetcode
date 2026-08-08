class Solution {
public:
    int maxArea(vector<int>& height) {
        int st = 0;
        int end = height.size()-1;
        int ar = 0;

        while(st<=end) {
            int ht = min(height[st],height[end]);   // red6d5cdd6d rtd tdtrd trdtrdestdr fydrt y drd tfrd5uftfr
            int wd = end - st;

            ar = max(ar,ht*wd);

            if(height[st] < height[end]) {
                st++;
            } else {
                end--;
            }
        }

        return ar;
    }
};