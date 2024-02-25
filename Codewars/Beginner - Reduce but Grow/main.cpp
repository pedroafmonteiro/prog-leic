#include <iostream>
#include <vector>

int grow(std::vector<int> nums) {
    int result = 1;
    for (int i = 0; i < nums.size(); i++) {
        result *= nums[i];
    }
    return result;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    int result = grow(nums);
    std::cout << "Result: " << result << std::endl;
    return 0;
}
