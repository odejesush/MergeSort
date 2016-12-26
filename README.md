# MergeSort
This repository will contain my C++ implementation of the merge sort algorithm for educational purposes.

# Compile Instructions
In the terminal, run the following:
```
make all
```

# Execution Instructions
To run the test file, run the ```test.bin``` file produced by the compiler.

# Algorithm Details
The algorithm is implemented as follows. The MergeSort.h file contains a single function named ```merge_sort```
that accepts any one dimensional vector of any type (as long as the type has a less than or equal to operator).
The algorithm first divides the given vector in half and recursively calls the ```merge_sort``` function.
Once the subvectors are equal to 1 element in size, the single element is returned. The next step in the algorithm
is to sort the two halves of the subvectors by iterating through each of them and inserting the elements
into a new sorted vector in order from least to greatest. Once the sorting is finished, the sorted vector is 
returned.