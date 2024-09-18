# Linked List Data Structure

A linked list is a fundamental data structure in computer science. It mainly allows efficient insertion and deletion operations compared to arrays.

A linked list is a linear data structure that consists of a series of nodes connected by pointers (in C++). Each node contains data and a pointer to the next node in the list. Linked lists allow for efficient `insertion` or `removal` of elements from any position in the list, as the nodes are not stored **contiguously** in memory.

**Quick comparison:**

- **Contiguous Memory:**
  - Example: Arrays.
  - Memory addresses: Sequential, like `1000`, `1004`, `1008`, etc.
  - Access: Fast, because you can directly calculate the location of any element.

- **Non-Contiguous Memory:**
  - Example: Linked lists.
  - Memory addresses: Could be anywhere, like `1000`, `5000`, `2000`, etc.
  - Access: Requires traversing the structure (following the pointers) to reach a specific element.


