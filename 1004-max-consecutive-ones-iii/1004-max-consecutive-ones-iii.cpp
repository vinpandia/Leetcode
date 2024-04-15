#include <vector>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0;
        int r = 0;
        int count = 0;
        int n = nums.size();
        int maxlen = 0;

        while (r < n) {
            if (nums[r] == 0) count++;
       
            while (count > k) {
                if (nums[l] == 0) {
                    count--;
                }
                l++;
            }

            int le = r - l + 1;
            maxlen = max(maxlen, le);
            
            r++;
        }
        return maxlen;
    }
};
