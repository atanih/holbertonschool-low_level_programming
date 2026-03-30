# C - Singly Linked Lists

## Description

This project explores the concept of *singly linked lists* in C — a fundamental data structure in computer science. Unlike arrays, linked lists are made up of individual nodes, each containing a value and a pointer to the next node in the sequence.

Through this project, we implement core operations on linked lists from scratch, using only allowed C standard library functions (malloc, free, exit) and a custom _putchar function.

## Data Structure

All tasks use the following node structure:

c
typedef struct list_s
{
    char *str;            /* string - (malloc'ed string) */
    unsigned int len;     /* length of the string */
    struct list_s *next;  /* points to the next node */
} list_t;


## Tasks

|#|Task               |Description                              |
|-|-------------------|-----------------------------------------|
|0|Print list         |Print all elements of a list_t list    |
|1|List length        |Return the number of elements in a list  |
|2|Add node           |Add a new node at the beginning of a list|
|3|Add node at the end|Add a new node at the end of a list      |
|4|Free list          |Free all memory of a list_t list       |

## Requirements

- Compiled on Ubuntu 20.04 LTS using gcc with flags: -Wall -Werror -Wextra -pedantic -std=gnu89
- Code follows the *Betty* style guide
- No global variables allowed
- No more than 5 functions per file
- All prototypes must be included in lists.h (with include guards)

## Author

- *Antonio Torres ALvarado
