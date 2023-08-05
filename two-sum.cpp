#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    static vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hashMap;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hashMap.find(complement) != hashMap.end()) {
                result.push_back(hashMap[complement]);
                result.push_back(i);
                return result;
            }
            hashMap[nums[i]] = i;
        }

        return result;
    }
};


int main() {
    vector<int>nums = {2, 7, 11, 15};
    cout << Solution::twoSum(nums, 9);
    if (indices.size() == 2) {
        cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
}