#include<set>
#include <vector>
using namespace std;
class Solution {
public:
    // 如果任一值在数组中出现 至少两次  数学命题中的 至少 类 属于 非全称命题
    bool containsDuplicate(vector<int>& nums) {
        // 直接暴力法 超时失败
        #if 0
        bool flag = false;
        auto itj = nums.begin();
        for (auto iti = nums.begin();  iti != nums.end(); iti++) {
                for ( itj = nums.begin();  itj != nums.end(); itj++) {
                    if (iti != itj && *itj == *iti) {
                        flag = true;
                        break;
                    }
                }
                if (flag) {
                    break;
                }
        }
        return flag;
        #endif
        // 使用新的数组 或者 map set 迭代插入，入股有则置入false ,次数减少了，跟哈希的思想一样
        bool flag = false;
        set<int> hashtable;
        for (auto it = nums.begin(); it != nums.end(); it++) {
            if (!hashtable.insert(*it).second) { // 插入失败，说明有重复元素
                flag = true;
            }
        }
        return flag;
    }
};
int main()
{
     return 0;
}
