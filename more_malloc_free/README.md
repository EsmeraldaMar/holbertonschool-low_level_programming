C - More malloc, free
0) it allocates memory using malloc, if malloc fails malloc_checked function should cause normal process termination with a status value of 98 else it returns pointer to allocated memory.
1) it concatenates two strings and returns to pointer pointing to newly allocated space in memory containing s1 then s2 then null byte.
2)it allocates memory for an array using malloc, memory is set to zero;If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL and the function allocated meory for an array nmemb elements of size bytes each and returns a pointer to the allocated memory.
3) it creates an array of integers, arranged from min to max and must contain all values from min to max. It returns pointer to newly created array. if min > max , returns NULL, if malloc failes return NULL.
