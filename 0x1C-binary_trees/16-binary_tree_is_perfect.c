#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures nodes of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: nodes of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
		return(binary_tree_nodes(tree->left) +
		       binary_tree_nodes(tree->right) + 1);
	return (0);
}

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

/**
 * not_pow - not pow from math.h
 *
 * @b: base
 * @e: exponent
 *
 * Return: b^e
 */

int not_pow(int a, int b)
{
	int out = 1, i = 0;

	for ( ; i < b ; i++)
		out *= a;
	return (out);
}

/**
 * binary_tree_is_perfect - measures whether a binary tree is perfect
 *
 * @tree: tree to measure
 *
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes = 0, height = 0, perfect = 0;

	if (!tree)
		return (0);
	nodes = binary_tree_nodes(tree);
	height = binary_tree_height(tree);
	perfect = not_pow(2, (height + 1)) -1;
	if (nodes == perfect)
		return (1);
	return (0);
}
