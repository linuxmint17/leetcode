
// 485.最大连续 1 的个数
// 给定一个二进制数组， 计算其中最大连续 1 的个数
// 输入：[1,1,0,1,1,1]
//输出：3
//解释：开头的两位和最后的三位都是连续 1 ，所以最大连续 1 的个数是 3.
//输入的数组只包含 0 和 1 。
//输入数组的长度是正整数，且不超过 10,000。

#include <vector>
#include <array>
#include <iostream>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        size_t cnt = 0;
        size_t len = nums.size();
        size_t i;
        array<int, 10000> res = { 0 };
        int ref = 0;
        for (i = 0; i < len; i++) {
            if (nums[i]) {
                res[ref]++;
            } else {
                ref++;
            }
        }
        cnt = res[0];
        for (int i = 1; i < res.size(); i++) {
            if (res[i] > cnt) {
                cnt = res[i];
            }
        }
        return cnt;
    }
};

int main()
{
    vector<int> arr= {1,1,0,1,1,1};
    Solution s;
    cout << s.findMaxConsecutiveOnes(arr) << endl;
    return 0;
}
