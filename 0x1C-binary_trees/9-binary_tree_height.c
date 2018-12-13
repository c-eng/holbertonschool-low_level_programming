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
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l < r)
		return (r + 1);
	return (l + 1);
}
