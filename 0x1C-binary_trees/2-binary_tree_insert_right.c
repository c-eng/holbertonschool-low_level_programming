#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of a node
 *
 * @parent: node to insert right-child on
 * @value: value of right-child node
 *
 * Return: address of new node or null
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	new->right = parent->right;
	if (parent->right)
		(new->right)->parent = new;
	parent->right = new;
	return (new);
}
