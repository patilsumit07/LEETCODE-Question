#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Hash map to store the value of the element and its corresponding index
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (numMap.find(complement) != numMap.end()) {
                // If found, return the index of the complement and the current index
                return {numMap[complement], i};
            }
            
            // Otherwise, store the current number and its index in the map
            numMap[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (guaranteed not to happen per LeetCode constraints)
        return {};
    }
};
