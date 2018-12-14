#include "binary_trees.h"

/**
 * binary_tree_is_full - Measures if a binary tree is full
 *
 * @tree: tree to measure
 *
 * Return: 1 or 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lfull = 0, rfull = 0;

	if (!tree)
		return (0);
	lfull = binary_tree_is_full(tree->left);
	rfull = binary_tree_is_full(tree->right);
	if (lfull == rfull)
		return (1);
	return (0);
}
