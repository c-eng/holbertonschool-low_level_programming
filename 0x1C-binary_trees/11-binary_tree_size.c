#include "binary_trees.h"

/**
 * binary_tree_size - Measures size of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
	}
	return (0);
}
