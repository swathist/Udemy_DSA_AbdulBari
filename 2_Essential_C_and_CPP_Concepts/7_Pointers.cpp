/* Pointer is an addressing variable used to store the address of the data.
 * The program can directly acces code section and stack section but not the heap section.
 *
 * Accessing Heap
 * Accessing resources
 * Parameter passing
 *
 * How to declare : int *p;
 * Initialization : p = &a;
 * Derederencing  : printf("Value of a: %d\n",*p);
 *
 * Accessing heap using malloc() - 5 integers
 * p = (int *)malloc(5 * sizeof(int));
 *
 * Same thing in C++??
 * p = new int[5];
 */
