# Linked List Implementation in C

This project implements a simple singly linked list in C. It provides core operations for manipulating a linked list such as adding and removing elements at different positions.

## 📁 Project Structure

- `linked_list.h` – Header file containing the definition of the `Node_t` struct and function declarations.
- `linked_list.c` – Source file implementing the linked list functions.
- `main.c` – Contains the `main()` function demonstrating usage of the linked list operations.
- `liblinked_list.a` – Static library compiled from `linked_list.c`.
- `obj.o` – Object file (compiled output).
- `run.exe` – Compiled executable.

## 🔧 Features

- `creatNode(int data)` – Create a new node.
- `pushHead(Node_t** head, int val)` – Add a node at the head.
- `pushAt(Node_t* head, int data, int pos)` – Insert node at given position.
- `pushTail(Node_t* head, int data)` – Add a node at the tail.
- `removeHead(Node_t** head)` – Remove the first node.
- `removeTail(Node_t* head)` – Remove the last node.
- `removeNodeAt(Node_t* head, int pos)` – Remove node at specific position.

## ▶️ How to Compile

If you want to compile the project manually (without using the pre-built `run.exe`), use:

```bash
gcc main.c linked_list.c -o run.exe
```

Or using the static library:

```bash
gcc main.c -L. -llinked_list -o run.exe
```

## ▶️ How to Run

Once compiled, run the executable:

```bash
./run.exe
```

It will display the linked list after a series of insert and delete operations.

## 📝 Sample Output

```
Data: 5
Data: 4
Data: 2
Data: 3
Data: 6
Data: 9
```

## 📌 Notes

- The list starts with value `4`, then multiple elements are added at the head, tail, and specific positions.
- The output reflects the state of the list after performing `push` and `remove` operations.

## 📤 Author

This project was written for educational purposes as a basic data structure practice in C.
