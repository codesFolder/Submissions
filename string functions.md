`std::string` in C++ is a versatile class that provides various member functions for working with strings. Here are some commonly used and useful functions of `std::string`:

1. **`size` and `length`:**
   - Return the number of characters in the string.

   ```cpp
   std::string myString = "Hello, World!";
   std::cout << "Size: " << myString.size() << std::endl;
   ```

2. **`empty`:**
   - Checks if the string is empty.

   ```cpp
   if (myString.empty()) {
       // String is empty
   }
   ```

3. **`clear`:**
   - Removes all characters from the string.

   ```cpp
   myString.clear();
   ```

4. **`resize`:**
   - Changes the size of the string.

   ```cpp
   myString.resize(10);  // Resize to 10 characters
   ```

5. **`substr`:**
   - Returns a substring of the string.

   ```cpp
   std::string substring = myString.substr(7, 5);  // Starting from index 7, take 5 characters
   ```

6. **`find`:**
   - Finds the position of a substring within the string.

   ```cpp
   size_t position = myString.find("World");
   ```

7. **`replace`:**
   - Replaces a portion of the string with another string.

   ```cpp
   myString.replace(7, 5, "Universe");  // Replace "World" with "Universe"
   ```

8. **`append` and `+=`:**
   - Appends characters or another string to the end of the string.

   ```cpp
   myString.append("!");
   myString += " Welcome";
   ```

9. **`insert`:**
   - Inserts characters or another string at a specified position.

   ```cpp
   myString.insert(5, " there");
   ```

10. **`erase`:**
    - Erases a portion of the string.

    ```cpp
    myString.erase(5, 6);  // Erase 6 characters starting from index 5
    ```

11. **`compare`:**
    - Compares two strings.

    ```cpp
    if (myString.compare("Hello") == 0) {
        // Strings are equal
    }
    ```

12. **`c_str`:**
    - Returns a pointer to a null-terminated character array.

    ```cpp
    const char* cString = myString.c_str();
    ```

13. **`substr`:**
    - Returns a substring of the string.

    ```cpp
    std::string substring = myString.substr(7, 5);  // Starting from index 7, take 5 characters
    ```

14. **`find_first_of` and `find_last_of`:**
    - Find the first or last occurrence of any character from a set of characters.

    ```cpp
    size_t first = myString.find_first_of("aeiou");
    size_t last = myString.find_last_of("aeiou");
    ```

15. **`getline`:**
    - Reads a line from an input stream into the string.

    ```cpp
    std::getline(std::cin, myString);
    ```

These functions cover many common operations with strings, and there are more functions available. The C++ standard library documentation is a great resource for exploring additional functionality and details.
