#include <iostream>
#include <vector>

int main() {

    std::vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    int low = 0;
    int high = nums.size() - 1;
    int result_index = 0;

   
    while (low <= high) {
       
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result_index = mid; 
            break;
        } else if (nums[mid] < target) {
            low = mid + 1;      
        } else {
            high = mid - 1;     
        }
    }


    if (low > high) {
        result_index = low;
    }

    d ind
    std::cout << "The index is: " << result_index << std::endl;

    return 0;
}
