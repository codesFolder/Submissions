Time Complexities

The time complexities of search, insert, and delete operations for `std::map` and `std::unordered_map` are as follows:

### `std::map`:

1. **Search (`find` operation):**
   - Average Case: O(log n)
   - Worst Case: O(log n)

2. **Insert:**
   - Average Case: O(log n)
   - Worst Case: O(log n)

3. **Delete:**
   - Average Case: O(log n)
   - Worst Case: O(log n)

### `std::unordered_map`:

1. **Search (`find` operation):**
   - Average Case: O(1)
   - Worst Case: O(n) (in the worst case, all keys hash to the same bucket)

2. **Insert:**
   - Average Case: O(1)
   - Worst Case: O(n) (due to rehashing when the load factor exceeds a threshold)

3. **Delete:**
   - Average Case: O(1)
   - Worst Case: O(n) (due to rehashing when the load factor exceeds a threshold)

### Note:

- The time complexities mentioned are average and worst-case scenarios.
- `std::map` is a self-balancing binary search tree, so its time complexities are logarithmic.
- `std::unordered_map` is implemented using a hash table, providing constant time complexity on average for search, insert, and delete operations. However, the worst-case scenario occurs when all keys hash to the same bucket, leading to a linear search within that bucket.

When choosing between `std::map` and `std::unordered_map`, consider the specific requirements of your use case. If you need ordered keys or if you have a small dataset with relatively few insertions and deletions, `std::map` may be a good choice. If you prioritize fast average-case performance for search, insert, and delete operations, and the order of elements is not important, `std::unordered_map` might be more suitable.


The time complexities of search, insert, and delete operations for `std::set` and `std::unordered_set` are as follows:

### `std::set`:

1. **Search (`find` operation):**
   - Average Case: O(log n)
   - Worst Case: O(log n)

2. **Insert:**
   - Average Case: O(log n)
   - Worst Case: O(log n)

3. **Delete:**
   - Average Case: O(log n)
   - Worst Case: O(log n)

### `std::unordered_set`:

1. **Search (`find` operation):**
   - Average Case: O(1)
   - Worst Case: O(n) (in the worst case, all elements hash to the same bucket)

2. **Insert:**
   - Average Case: O(1)
   - Worst Case: O(n) (due to rehashing when the load factor exceeds a threshold)

3. **Delete:**
   - Average Case: O(1)
   - Worst Case: O(n) (due to rehashing when the load factor exceeds a threshold)

### Note:

- The time complexities mentioned are average and worst-case scenarios.
- `std::set` is typically implemented as a self-balancing binary search tree, so its time complexities are logarithmic.
- `std::unordered_set` is implemented using a hash table, providing constant time complexity on average for search, insert, and delete operations. However, the worst-case scenario occurs when all elements hash to the same bucket, leading to a linear search within that bucket.

When choosing between `std::set` and `std::unordered_set`, consider the specific requirements of your use case. If you need ordered elements or if you have a small dataset with relatively few insertions and deletions, `std::set` may be a good choice. If you prioritize fast average-case performance for search, insert, and delete operations, and the order of elements is not important, `std::unordered_set` might be more suitable.



