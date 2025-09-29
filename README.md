
# EXPERIMENT 07: ARRAYS AND STRINGS IN C++

## AIM
To understand and implement arrays and strings in C++ by performing basic operations such as initialization, input, output, and manipulation.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY

### ARRAYS
An **array** is a collection of elements of the same data type stored in contiguous memory locations. Arrays allow efficient access and modification of data using indices.

#### Syntax:
```cpp
datatype arrayName[size];
```

### STRINGS
In C++, **strings** are used to handle textual data and can be represented in two ways: C-style strings and C++ string class. C-style strings are character arrays ending with a null character '\0' and require manual handling using functions from the <cstring> library. In contrast, the C++ string class (from the <string> header) provides dynamic memory management and built-in functions like .length(), .substr(), and .append(), making string operations safer and easier. While C-style strings are suitable for low-level tasks, the string class is preferred for modern development due to its flexibility and simplicity.

## EXPERIMENT 07(A): INPUT AND OUTPUT OF ARRAY ELEMENTS USING FOR LOOP IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** an integer variable `arr_elements` to store the number of elements in the array.
3. **Prompt** the user to enter the size of the array and **store** it in `arr_elements`.
4. **Declare** an integer array `arr` of size `arr_eleme## CONCLUSION

In this experiment, we explored two fundamental concepts in C++: arrays and strings. Arrays were used to store and process collections of data using loops and index-based access. Both fixed-size declaration and element-wise input/output operations were practiced. For strings, we examined two approaches: C-style character arrays and the modern C++ `string` class. Through hands-on programs, we learned how to input, manipulate, and display strings efficiently. Understanding these basic data structures lays the foundation for more advanced programming, enabling efficient data storage, retrieval, and text processing in real-world applications.
nts` (using Variable Length Array - VLA).
5. **Use a for loop** to iterate from `0` to `arr_elements - 1`:
   - In each iteration, prompt the user to **input an element**.
   - **Store** the input in the corresponding index of the array.
6. **Use another for loop** to iterate from `0` to `arr_elements - 1`:
   - **Print** each element of the array separated by a tab (`\t`).
7. **End** the program.

## EXPERIMENT 07(B): LINEAR SEARCH IN AN ARRAY USING FOR LOOP IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** an integer variable `arr_elements` to store the size of the array.
3. **Prompt** the user to enter the size and store it in `arr_elements`.
4. **Declare** an array `arr` of size `arr_elements`.
5. **Use a `for` loop** to input all elements from the user and store them in the array.
6. **Prompt** the user to enter the element to be searched and store it in `usr_element`.
7. **Use another `for` loop** to traverse the array:
   - If the current element matches `usr_element`, print the index (position) where the element is found.
8. **End** the program.

## EXPERIMENT 07(H): INPUT AND DISPLAY OF A STRING USING C-STYLE CHARACTER ARRAY IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** a character array `str` with a sufficient size (e.g., 100).
3. **Prompt** the user to enter a string.
4. Use `cin.getline(str, 100)` to read the entire line of input, including spaces.
5. **Display** the entered string using `cout`.
6. **End** the program.

## EXPERIMENT 07(I): STRING CONCATENATION USING C++ `string` CLASS

### ALGORITHM

1. **Start** the program.
2. **Declare** two string variables `str_1` and `str_2`.
3. **Prompt** the user to enter the first string and read it using `getline()`.
4. **Prompt** the user to enter the second string and read it using `getline()`.
5. **Concatenate** the two strings using the `+` operator.
6. **Display** the concatenated result using `cout`.
7. **End** the program.

## CONCLUSION

In this experiment, I explored two fundamental concepts in C++: arrays and strings. Arrays were used to store and process collections of data using loops and index-based access. Both fixed-size declaration and element-wise input/output operations were practiced. For strings, I examined two approaches: C-style character arrays and the modern C++ `string` class. Through hands-on programs, I learned how to input, manipulate, and display strings efficiently. Understanding these basic data structures lays the foundation for more advanced programming, enabling efficient data storage, retrieval, and text processing in real-world applications.
# Experiment_7
