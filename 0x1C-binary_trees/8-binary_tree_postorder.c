#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal
 *
 * @tree: tree to traverse
 * @func: pointer to function to run
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
