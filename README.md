# Circular-Queue-in-C-
A C++ implementation of a circular queue (ring buffer) data structure that provides efficient FIFO (First-In-First-Out) operations with constant time complexity.

Features

    Fixed Capacity: Pre-allocated memory for predictable performance

    Efficient Operations: O(1) time complexity for enqueue and dequeue

    Memory Management: Proper allocation and deallocation

    Bounds Checking: Prevents buffer overflow/underflow

    Visualization: Print method to display queue contents

Implementation Details

The circular queue uses a fixed-size array and maintains two pointers:

    p (front): Points to the first element in the queue

    u (rear): Points to the next available position for insertion

When the queue reaches the end of the array, it wraps around to the beginning using modulo arithmetic, efficiently utilizing the allocated memory.
Class Interface
Constructor
cpp

FilaCircular(int tamanho)

Creates a circular queue with the specified capacity.
Destructor
cpp

~FilaCircular()

Properly deallocates the dynamically allocated array.
Methods

    void inserirInicio(int valor): Adds an element to the rear of the queue

    int removerInicio(): Removes and returns the element from the front of the queue

    void print(): Displays the current contents of the queue

Error Handling

The implementation includes error checking for:

    Queue Overflow: Attempting to insert into a full queue

    Queue Underflow: Attempting to remove from an empty queue

Error conditions are handled by printing error messages and returning appropriate values.
Memory Management

The class properly manages memory by:

    Allocating the array in the constructor

    Deallocating the array in the destructor

    Using smart pointer arithmetic to avoid memory leaks

Performance Characteristics

    Time Complexity:

        Insertion: O(1)

        Removal: O(1)

        Access: O(1) for front element

    Space Complexity: O(n) where n is the queue capacity

Limitations

    Fixed size (cannot dynamically resize)

    Returns -1 when removing from empty queue (consider using exceptions for better error handling)

    Integer-specific implementation (could be templatized for generic use)

Potential Improvements

    Make the class template-based to support any data type

    Use exceptions instead of error messages and return values

    Add iterator support for easier traversal

    Implement copy constructor and assignment operator for proper deep copying
