C - Doubly linked lists

A doubly linked list is a type of linked list in which each node contains 3 parts, a data part and two addresses, one points to the previous node and one for the next node. It differs from the singly linked list as it has an extra pointer called previous that points to the previous node, allowing the traversal in both forward and backward directions.

Doubly Linked List Representation in C

A doubly linked list is represented in C as the pointer to the head (i.e. first node) in the list. Each node in a doubly linked list contains three components:

Data: data is the actual information stored in the node.
Next: next is a pointer that links to the next node in the list.
Prev: previous is a pointer that links to the previous node in the list.

Basic Operations on C Doubly Linked List
We can perform the following basic operations in a doubly-linked list:

Insertion
Deletion
Traversal

Requirements

General

Allowed editors: vi, vim, emacs

All your files will be interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)

All your files should end with a new line

A README.md file, at the root of the folder of the project is mandatory

Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

You are not allowed to use global variables

No more than 5 functions per file

The only C standard library functions allowed are malloc, free, printf and exit

In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don't have to push them to your repo (if you do we won't take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples

The prototypes of all your functions should be included in your header file called lists.h

Don't forget to push your header file

All your header files should be include guarded
