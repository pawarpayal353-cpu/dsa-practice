/*
DYNAMIC MEMORY ALLOCATION
it is a way to allocate memory to a data structure during runtime . also can be 
used to free memory during runtime.

FUNCTION
1. malloc()
2. calloc()
3. free()
4. realloc()

MALLOC() - stands for memory allocation. takes numbers of bytes to be allocated as an 
input and returns a pointer of type void
ptr = (int*)malloc(30*sizeof (int));

CALLOC() - stands for continuous allocation. It initializes each memory block with a
default value of 0
ptr = (float*)calloc(30, sizeof(float));
// allocates continuous space in memory for 30 blocks (floats) 

FREE() - used to deallocate the memory. The memory allocated using calloc() / malloc()
is not deallocated automatically.
free(ptr);// memory of ptr is released

REALLOC() - sometimes deallocated memory is insufficient or more than required. also used 
to allocate memory of new size using the previous pointer and size.
ptr = realloc (ptr , newsize);
ptr = realloc (ptr,3*sizeof(int));
*/

