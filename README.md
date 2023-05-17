# holbertonschool-binary_trees

## General

- What is a binary tree
- What is the difference between a binary tree and a Binary Search Tree
- What is the possible gain in terms of time complexity compared to linked lists
- What are the depth, the height, the size of a binary tree
- What are the different traversal methods to go through a binary tree
- What is a complete, a full, a perfect, a balanced binary tree

# More Info
### Data structures
#### Please use the following data structures and types for binary trees. Don’t forget to include them in your header file.

### Basic Binary Tree

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

# Print function
To match the examples in the tasks, you are given [this function](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/binary_tree_print.c)<br/>

| TITILE  | DESCRIPTION |
| ------------- | ------------- |
| [0. New node]()  |  function that creates a binary tree node  |
| [1. Insert left]()  |  function that inserts a node as the left-child of another node  |
| [2. Insert right]()  |  function that inserts a node as the right-child of another node  |
| [3. Delete]()  |  function that deletes an entire binary tree  |
| [4. Is leaf]()  |  function that checks if a node is a leaf  |
| [5. Is root]()  |  function that checks if a given node is a root  |
| [6. Pre-order traversal]()  |  function that goes through a binary tree using pre-order traversal  |
| [7. In-order traversal]()  |  function that goes through a binary tree using in-order traversal  |
| [8. Post-order traversal]()  |  function that goes through a binary tree using post-order traversal  |
| [9. Height]()  |  function that measures the height of a binary tree  |
| [10. Depth]()  |  function that measures the depth of a node in a binary tree  |
| [11. Size]()  |  function that measures the size of a binary tree  |
| [12. Leaves]()  |  function that counts the leaves in a binary tree  |
| [13. Nodes]()  |  function that counts the nodes with at least 1 child in a binary tree  |
| [14. Balance factor]()  |  function that measures the balance factor of a binary tree  |
| [15. Is full]()  |  function that checks if a binary tree is full  |
| [16. Is perfect]()  |  function that checks if a binary tree is perfect  |
| [17. Sibling]()  |  function that finds the sibling of a node  |
| [18. Uncle]()  |  function that finds the uncle of a node  |
