// 283. 移动零
// 给定一个数组 nums，编写一个函数将所有 0 移动到数组的末尾，同时保持非零元素的相对顺序。
/* 
示例:
  输入: [0,1,0,3,12]
  输出: [1,3,12,0,0] 
说明:
  1.必须在原数组上操作，不能拷贝额外的数组。
  2.尽量减少操作次数 
*/

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        size_t sz = nums.size();
        size_t j = 0;
        size_t i;
        if (sz == 2) {
            if (nums[0] == 0) {
                nums[0] = nums[1];
                nums[1] = 0;
            }
            return;
        }
        for (i = 0; i < sz; i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (i = j; i < sz ; i++) {
            nums[i] = 0;
        }
    }
};

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
    vector<int> arr = { 0, 1, 0, 3, 12 };
    Solution s;
    cout << "input is: " << endl;
    print_array(arr);
    
    s.moveZeroes(arr);
    cout << "output is: " << endl;
    print_array(arr);
    return 0;
}
