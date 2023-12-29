#include <iostream>
#include <unordered_set>
#include <vector>

bool hasDuplicates(const std::vector<int>& nums) {
    std::unordered_set<int> seen;

    for (int num : nums) {
        // If the number is already in the set, it's a duplicate
        if (seen.count(num) > 0) {
            return true;
        }

        // Otherwise, add it to the set
        seen.insert(num);
    }

    // No duplicates found
    return false;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 2}; // Example array with duplicates

    if (hasDuplicates(numbers)) {
        std::cout << "There are duplicates in the array." << std::endl;
    } else {
        std::cout << "There are no duplicates in the array." << std::endl;
    }

    return 0;
}
