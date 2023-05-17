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
# Table of all Functions
| TITILE  | DESCRIPTION |
| ------------- | ------------- |
| [0. New node](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/0-binary_tree_node.c)  |  function that creates a binary tree node  |
| [1. Insert left](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/1-binary_tree_insert_left.c)  |  function that inserts a node as the left-child of another node  |
| [2. Insert right](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/2-binary_tree_insert_right.c)  |  function that inserts a node as the right-child of another node  |
| [3. Delete](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/3-binary_tree_delete.c)  |  function that deletes an entire binary tree  |
| [4. Is leaf](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/4-binary_tree_is_leaf.c)  |  function that checks if a node is a leaf  |
| [5. Is root](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/5-binary_tree_is_root.c)  |  function that checks if a given node is a root  |
| [6. Pre-order traversal](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/6-binary_tree_preorder.c)  |  function that goes through a binary tree using pre-order traversal  |
| [7. In-order traversal](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/7-binary_tree_inorder.c)  |  function that goes through a binary tree using in-order traversal  |
| [8. Post-order traversal](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/8-binary_tree_postorder.c)  |  function that goes through a binary tree using post-order traversal  |
| [9. Height](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/9-binary_tree_height.c)  |  function that measures the height of a binary tree  |
| [10. Depth](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/10-binary_tree_depth.c)  |  function that measures the depth of a node in a binary tree  |
| [11. Size](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/11-binary_tree_size.c)  |  function that measures the size of a binary tree  |
| [12. Leaves](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/12-binary_tree_leaves.c)  |  function that counts the leaves in a binary tree  |
| [13. Nodes](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/13-binary_tree_nodes.c)  |  function that counts the nodes with at least 1 child in a binary tree  |
| [14. Balance factor](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/14-binary_tree_balance.c)  |  function that measures the balance factor of a binary tree  |
| [15. Is full](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/15-binary_tree_is_full.c)  |  function that checks if a binary tree is full  |
| [16. Is perfect](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/16-binary_tree_is_perfect.c)  |  function that checks if a binary tree is perfect  |
| [17. Sibling](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/17-binary_tree_sibling.c)  |  function that finds the sibling of a node  |
| [18. Uncle](https://github.com/Maxel6/holbertonschool-binary_trees/blob/main/18-binary_tree_uncle.c)  |  function that finds the uncle of a node  |
# author
[Axel Malka](https://github.com/Maxel6)<br/>
[Samir Zidani](https://github.com/samdaphbynet)<br/>
[Natnael Deboch](https://github.com/Natnael04)
