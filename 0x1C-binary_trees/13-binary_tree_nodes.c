#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures non-leaf nodes of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: non-leaf nodes of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left || tree->right)
			return(binary_tree_nodes(tree->left) +
			       binary_tree_nodes(tree->right) + 1);
	}
	return (0);
}
