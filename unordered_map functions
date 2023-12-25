`std::unordered_map` is a versatile container in C++ that provides a set of functions for various operations. Here are some of the useful member functions of `std::unordered_map`:

1. **`insert`:**
   - Inserts an element or a range of elements into the unordered_map.

   ```cpp
   std::unordered_map<int, std::string> myMap;
   myMap.insert({1, "One"});
   ```

2. **`emplace`:**
   - Constructs and inserts an element into the unordered_map.

   ```cpp
   myMap.emplace(2, "Two");
   ```

3. **`find`:**
   - Searches for an element with a specific key and returns an iterator to it.

   ```cpp
   auto it = myMap.find(1);
   if (it != myMap.end()) {
       // Element found
   }
   ```

4. **`erase`:**
   - Removes an element or a range of elements from the unordered_map.

   ```cpp
   myMap.erase(2);
   ```

5. **`size`:**
   - Returns the number of elements in the unordered_map.

   ```cpp
   std::cout << "Size: " << myMap.size() << std::endl;
   ```

6. **`empty`:**
   - Checks if the unordered_map is empty.

   ```cpp
   if (myMap.empty()) {
       // Map is empty
   }
   ```

7. **`clear`:**
   - Removes all elements from the unordered_map.

   ```cpp
   myMap.clear();
   ```

8. **`at`:**
   - Accesses the element with a specific key, throwing an exception if the key is not found.

   ```cpp
   try {
       std::cout << "Value at key 1: " << myMap.at(1) << std::endl;
   } catch (const std::out_of_range& e) {
       std::cout << "Key not found" << std::endl;
   }
   ```

9. **`count`:**
   - Returns the number of elements with a specific key (1 or 0).

   ```cpp
   if (myMap.count(1) > 0) {
       // Key 1 exists
   }
   ```

10. **`bucket_count`:**
    - Returns the number of buckets in the underlying hash table.

    ```cpp
    size_t buckets = myMap.bucket_count();
    ```

11. **`bucket`:**
    - Returns the bucket number where the element with a specific key is located.

    ```cpp
    size_t bucketNumber = myMap.bucket(1);
    ```

12. **`begin` and `end`:**
    - Provide iterators pointing to the beginning and end of the unordered_map.

    ```cpp
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        // Iterate through the map
    }
    ```

These are just a few of the many member functions provided by `std::unordered_map`. Depending on your use case, you may find additional functions in the C++ standard library documentation that suit your needs.
