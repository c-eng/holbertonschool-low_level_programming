#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: node to check
 *
 * Return: 1 if yes, 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!node->left)
		{
			if (!node->right)
				return (1);
		}
	}
	return (0);
}
