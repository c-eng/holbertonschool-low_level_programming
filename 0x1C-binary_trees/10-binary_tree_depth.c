#include "binary_trees.h"

/**
 * binary_tree_depth - Measures depth of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int deep = 1;
	binary_tree_t *strider = NULL;

	if (!tree)
		return (0);
	if (!(tree->parent))
		return (0);
	strider = tree->parent;
	while (strider->parent)
	{
		strider = strider->parent;
		deep += 1;
	}
	return (deep);
}
