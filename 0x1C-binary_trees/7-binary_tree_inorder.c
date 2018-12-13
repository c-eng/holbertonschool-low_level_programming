#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal
 *
 * @tree: tree to traverse
 * @func: pointer to function to run
 *
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
