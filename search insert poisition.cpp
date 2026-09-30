#include <iostream>
#include <vector>

int main() {
    // Example test case: [1, 3, 5, 6], Target: 2
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    int low = 0;
    int high = nums.size() - 1;
    int result_index = 0;

    // Binary search logic
    while (low <= high) {
        // Safe midpoint calculation to prevent integer overflow
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result_index = mid; // Target found
            break;
        } else if (nums[mid] < target) {
            low = mid + 1;      // Target must be in the right half
        } else {
            high = mid - 1;     // Target must be in the left half
        }
    }

    // If the loop finishes without finding the target (break not hit),
    // the 'low' pointer holds the exact index where it should be inserted.
    if (low > high) {
        result_index = low;
    }

    // Output the calculated index
    std::cout << "The index is: " << result_index << std::endl;

    return 0;
}
