#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    int maxRotateFunction(std::vector<int>& nums) {
        long long n = nums.size();
        long long total_sum = 0;
        long long curr_f = 0;
        
        for (long long i = 0; i < n; ++i) {
            total_sum += nums[i];
            curr_f += i * nums[i];
        }
        
        long long max_f = curr_f;
        
        for (long long i = 1; i < n; ++i) {
            curr_f = curr_f + total_sum - n * nums[n - i];
            max_f = std::max(max_f, curr_f);
        }
        
        return max_f;
    }
};
