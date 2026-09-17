#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (seen.count(complement)) {
                return {seen[complement], i};
            }

            seen[nums[i]] = i;
        }

        return{};
    }
};
/*
In my answer i used a hash map to store the elements algorithm already seen.
As algorithm goes trough the array, it calculates which number it needs to reach the target using needed = target - current scheme.
Then it checks if it has already seen the number. If yes, two numbers are found and can be return their indicates.
Unordered map is here because checking if numbe exists in it is O(1) on average.
In main opinion main part of the solution to achive O(n) is the use of the hash map, beacuse algorithm does not need to recheck same elements again.
https://leetcode.com/problems/two-sum/submissions/2144829003
*/