`std::vector` is a dynamic array implementation in C++ and provides a variety of member functions for efficient manipulation of elements. Here are some commonly used and useful functions of `std::vector`:

1. **`push_back`:**
   - Adds an element to the end of the vector.

   ```cpp
   std::vector<int> myVector;
   myVector.push_back(42);
   ```

2. **`pop_back`:**
   - Removes the last element from the vector.

   ```cpp
   myVector.pop_back();
   ```

3. **`emplace_back`:**
   - Constructs and adds an element to the end of the vector.

   ```cpp
   myVector.emplace_back(13);
   ```

4. **`size`:**
   - Returns the number of elements in the vector.

   ```cpp
   std::cout << "Size: " << myVector.size() << std::endl;
   ```

5. **`empty`:**
   - Checks if the vector is empty.

   ```cpp
   if (myVector.empty()) {
       // Vector is empty
   }
   ```

6. **`clear`:**
   - Removes all elements from the vector.

   ```cpp
   myVector.clear();
   ```

7. **`resize`:**
   - Changes the size of the vector. If the new size is greater than the current size, additional elements are default-inserted.

   ```cpp
   myVector.resize(10);  // Resize to 10 elements
   ```

8. **`reserve`:**
   - Requests that the vector capacity be at least enough to contain a specified number of elements without reallocation.

   ```cpp
   myVector.reserve(100);  // Reserve space for at least 100 elements
   ```

9. **`at`:**
   - Accesses the element at a specified position with bounds checking.

   ```cpp
   int value = myVector.at(3);
   ```

10. **`operator[]`:**
    - Accesses the element at a specified position without bounds checking.

    ```cpp
    int value = myVector[3];
    ```

11. **`front` and `back`:**
    - Access the first and last elements of the vector.

    ```cpp
    int firstElement = myVector.front();
    int lastElement = myVector.back();
    ```

12. **`begin` and `end`:**
    - Provide iterators pointing to the beginning and end of the vector.

    ```cpp
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        // Iterate through the vector
    }
    ```

13. **`erase`:**
    - Removes elements from the vector by specifying a range or a specific position.

    ```cpp
    myVector.erase(myVector.begin() + 2);  // Erase element at index 2
    ```

14. **`insert`:**
    - Inserts elements at a specified position.

    ```cpp
    myVector.insert(myVector.begin() + 2, 99);  // Insert 99 at index 2
    ```

These functions cover many common operations with vectors, and there are more functions available. The C++ standard library documentation is a great resource for exploring additional functionality and details.
