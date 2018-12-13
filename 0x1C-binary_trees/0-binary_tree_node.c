#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a node of a binary tree
 *
 * @parent: parent of binary tree node
 * @value: value of binary tree node
 *
 * Return: address of new node or null
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
