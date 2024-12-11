# Basic Data Structure Recap

## OUTLINE

# Learning Plan

This document outlines a structured learning plan to cover various topics in data structures and algorithms.

## Modules and Topics

### Time & Space Complexity

Understand the basics of time and space complexity, including Big-O notation and its applications in algorithm analysis.

### STL Vector

Learn the Standard Template Library (STL) for vectors, including initialization, operations, and best practices.

### Prefix Sum & Binary Search

Gain insights into the prefix sum technique and binary search algorithm, with practical examples.

### Singly Linked List

Study the implementation and operations on singly linked lists, including insertion, deletion, and traversal.

### STL List and Cycle Detection

Learn about STL list and techniques to detect cycles in linked lists.

### Stack Implementation

Understand stack data structure implementation and explore its use cases.

### Queue Implementation

Learn how to implement queues and explore STL support for queue operations.

### Binary Tree Implementation

Study the basics of binary tree implementation and operations, including traversal techniques.

### Binary Search Tree Implementation

Learn about binary search trees (BST) and their operations, including insertion, deletion, and search.

### Heap Implementation

Understand heap data structures, including max-heap and min-heap, and their applications.

### STL Priority Queue, Map, and Set

Explore STL priority queue, map, and set, focusing on their functionalities and use cases.

## Vector Built-in Functions

### Initialization

| Name                      | Details                                                                 | Time Complexity |
| ------------------------- | ----------------------------------------------------------------------- | --------------- |
| `vector<type> v;`         | Construct a vector with 0 elements.                                     | O(1)            |
| `vector<type> v(N);`      | Construct a vector with N elements.                                     | O(N)            |
| `vector<type> v(N, V);`   | Construct a vector with N elements and the value will be V.             | O(N)            |
| `vector<type> v(v2);`     | Construct a vector by copying another vector `v2`.                      | O(N)            |
| `vector<type> v(A, A+N);` | Construct a vector by copying all elements from an array `A` of size N. | O(N)            |

## Capacity

| Name           | Details                                                 | Time Complexity                                                   |
| -------------- | ------------------------------------------------------- | ----------------------------------------------------------------- |
| `v.size()`     | Returns the size of the vector.                         | O(1)                                                              |
| `v.max_size()` | Returns the maximum size that the vector can hold.      | O(1)                                                              |
| `v.capacity()` | Returns the current available capacity of the vector.   | O(1)                                                              |
| `v.clear()`    | Clears the vector elements without deleting the memory. | O(N)                                                              |
| `v.empty()`    | Returns true/false if the vector is empty or not.       | O(1)                                                              |
| `v.resize()`   | Changes the size of the vector.                         | O(K) where K is the difference between new size and current size. |

## Modifiers

| Name                                                | Details                                                                      | Time Complexity                                       |
| --------------------------------------------------- | ---------------------------------------------------------------------------- | ----------------------------------------------------- |
| `v =` or `v.assign()`                               | Assign another vector.                                                       | O(N) if sizes differ, O(1) otherwise.                 |
| `v.push_back()`                                     | Add an element to the end.                                                   | O(1)                                                  |
| `v.pop_back()`                                      | Remove the last element.                                                     | O(1)                                                  |
| `v.insert()`                                        | Insert elements at a specific position.                                      | O(N + K) where K is the number of elements to insert. |
| `v.erase()`                                         | Delete elements from a specific position.                                    | O(N + K) where K is the number of elements to delete. |
| `replace(v.begin(), v.end(), value, replace_value)` | Replace all occurrences of `value` with `replace_value`. Not under a vector. | O(N)                                                  |
| `find(v.begin(), v.end(), V)`                       | Find the value `V`. Not under a vector.                                      | O(N)                                                  |

## Element Access

| Name        | Details                   | Time Complexity |
| ----------- | ------------------------- | --------------- |
| `v[i]`      | Access the ith element.   | O(1)            |
| `v.at(i)`   | Access the ith element.   | O(1)            |
| `v.back()`  | Access the last element.  | O(1)            |
| `v.front()` | Access the first element. | O(1)            |

## Iterators

| Name        | Details                       | Time Complexity |
| ----------- | ----------------------------- | --------------- |
| `v.begin()` | Pointer to the first element. | O(1)            |
| `v.end()`   | Pointer to the last element.  | O(1)            |
