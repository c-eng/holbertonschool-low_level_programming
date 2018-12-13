#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of a node
 *
 * @parent: node to insert left-child on
 * @value: value of left-child node
 *
 * Return: address of new node or null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	new->left = parent->left;
	if (parent->left)
		(new->left)->parent = new;
	parent->left = new;
	return (new);
}
