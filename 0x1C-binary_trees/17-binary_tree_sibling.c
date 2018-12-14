#include "binary_trees.h"

/**
 * binary_tree_sibling - finds node sibling
 *
 * @node: node to find sibling of
 *
 * Return: pointer to sibling or null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *strider = NULL;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	strider = node->parent;
	if (strider->left == node)
		return (strider->right);
	if (strider->right == node)
		return (strider->left);
	return (NULL);

}
