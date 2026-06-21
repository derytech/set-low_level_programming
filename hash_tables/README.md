# 0x1A. C - Hash tables

## Description
This project covers the implementation of a Hash Table data structure in the C programming language. It focuses on understanding hash functions, managing memory allocations (`malloc`, `free`), handling collisions using **Chaining** (linked lists), and analyzing time complexity.

The initial phase focuses on creating the foundational hash table structure.

---

## Data Structures

The project utilizes the following structures defined in `hash_tables.h`:

```c
/**
 * struct hash_node_s - Node of a hash table
 * @key: The string, the key (unique in the HashTable)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size pointing to the first node of a linked list
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;
