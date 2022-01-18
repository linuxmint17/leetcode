#include <iostream>
#include <vector>

using namespace std;
class Solution {
private:
    int get_index(vector<int> &nums, int num){
        int sz = nums.size();
        for (int i = 0; i < sz; i++) {
            if (num == nums[i]) {
                return i;
            }
        }
        return -1;
    }
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret; //先暴力梭哈一下
        int res = -1;
        int sz1 = nums1.size();
        int sz2 = nums2.size();
        int i, j;
        int flag;
        for (i = 0; i < sz1; i++) {
            j = get_index(nums2, nums1[i]);
            if (j != -1) { // 几乎 100% 按照题目的设定
                if (j != sz2 - 1) {
                    res = nums2[j]; // old j
                    flag = 0;
                    for ( j++; j < sz2; j++) {
                       if (nums2[j] > res) {
                           flag = 1;
                           break;
                       }
                    }
                    if (flag && j <= sz2 - 1) {
                        res = nums2[j];
                    } else {
                        res = -1;
                    }
                } else {
                    res = -1;
                }
            } else {
                res = -1;
            }
            ret.push_back(res);
        }
        return ret;
    }
};

int main()
{
    return 0;
}
