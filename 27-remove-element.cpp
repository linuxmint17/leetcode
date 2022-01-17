// 27. 移除元素
/*
 * 给你一个数组 nums 和一个值 val，你需要 原地 移除所有数值等于 val 的元素，并返回移除后数组的新长度。

* 不要使用额外的数组空间，你必须仅使用 O(1) 额外空间并 原地 修改输入数组。

* 元素的顺序可以改变。你不需要考虑数组中超出新长度后面的元素。


// demo
// 输入：nums = [3,2,2,3], val = 3
输出：2, nums = [2,2]
解释：函数应该返回新的长度 2, 并且 nums 中的前两个元素均为 2。你不需要考虑数组中超出新长度后面的元素。例如，函数返回的新长度为 2 ，而 nums = [2,2,3,3] 或 nums = [2,2,0,0]，也会被视作正确答案。


提示：
0 <= nums.length <= 100
0 <= nums[i] <= 50
0 <= val <= 100
 *
 */
#include <iostream>
#include <vector>
#include <array>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto iter = nums.begin();
        auto end = nums.end();
        int ix = 0;
        for ( ; iter != end; iter++) {
            if (*iter != val) {
                nums[ix++] = *iter;
            }
        }
        return ix--;
    }
};

void print_array(vector<int>& arr, int sz) {
    int i;
    for (i = 0; i < sz; i++) {
        cout << arr[i] << ' ';
        if ( i + 1 % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

void print_array(vector<int>& arr) {
    int cnt = 0;
    for (auto it = arr.begin(); it != arr.end(); it++) {
        cout << *it << ' ';
        cnt++;
        if (cnt % 10 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int main()
{
    Solution s;
    vector<int> arr = { 3, 2, 2, 3 };
    int sz = s.removeElement(arr, 2);
    print_array(arr, sz);

    return 0;
}
