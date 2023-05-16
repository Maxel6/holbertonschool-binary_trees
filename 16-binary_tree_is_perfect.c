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
	int leftDepth;
	int rightDepth;

	if (!tree)
		return (0);
	leftDepth = find_left(tree->left);
	rightDepth = find_left(tree->right);

	if (leftDepth > rightDepth)
		return (leftDepth + 1);
	else
		return (rightDepth + 1);
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

	if (!tree)
	{
		return (find == 0);
	}
	if (!tree->left && !tree->right)
	{
		return (find == 1);
	}
	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	leftLeaf = isPerfect(tree->left, find) - 1;
	rightLeaf = isPerfect(tree->right, find) - 1;

	return (leftLeaf && rightLeaf);
}
