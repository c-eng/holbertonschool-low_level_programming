#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of a binary tree
 *
 * @tree: Tree to measure
 *
 * Return: height or 1 on NULL tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int r = 0, l = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l < r)
		return (r + 1);
	return (l + 1);
}


/**
 * binary_tree_balance - Measures the balance of a binary tree
 *
 * @tree: Tree to measure
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && tree->right)
			return (binary_tree_height(tree->right) * -1);
		return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
	}
	return (0);
}
