#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int findLeft;
	int correct;

	findLeft = find_left(tree);
	correct = isPerfect(tree, findLeft);
	return (correct);
}

/**
 * find_left - find the leaf in binary tree
 * @tree: pointer to the node the left
 * Return: the depth of the node
 */

int find_left(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (1 + find_left(tree->left));
}

/**
 * isPerfect - function that check if is perfect
 * @tree: pointer to the node of checked is perfect
 * @find: expected depth from the left most leaf
 * Return: 1 is perfect, 0 is not perfect
 */

int isPerfect(const binary_tree_t *tree, int find)
{
	int leftLeaf = 0;
	int rightLeaf = 0;
	int tmp;
	int com;

	if (!tree)
	{
		tmp = (0 == find);
		return (tmp);
	}
	if (!tree->left != !tree->right)
	{
		return (0);
	}
	leftLeaf = isPerfect(tree->left, find) - 1;
	rightLeaf = isPerfect(tree->right, find) - 1;
	com = (find >= 0);
	return (com && leftLeaf && rightLeaf);
}
