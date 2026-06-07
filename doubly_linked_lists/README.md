# Doubly Linked Lists

This project focuses on implementing and working with doubly linked lists in C. A doubly linked list is a linear data structure where each node contains data and two pointers: one pointing to the next node and one pointing to the previous node.

## Learning Objectives

At the end of this project, you should be able to:

- Understand what a doubly linked list is
- Know how to create and manipulate nodes
- Traverse a doubly linked list in both directions
- Print all elements of a doubly linked list
- Manage memory allocation and deallocation in linked structures

## Data Structure

```c
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
