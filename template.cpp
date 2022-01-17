#include <iostream>
#include <vector>
#include <array>

using namespace std;

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
//    Solution s;
    return 0;
}
