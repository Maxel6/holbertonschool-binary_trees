#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree)
	{
		if (tree->left)
			height++;
		if (tree->right)
			height++;
	}
	return (height);
}
