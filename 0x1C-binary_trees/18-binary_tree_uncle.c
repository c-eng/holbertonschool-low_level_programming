#include "binary_trees.h"

/**
 * binary_tree_uncle - finds node uncle
 *
 * @node: node to find uncle of
 *
 * Return: pointer to uncle or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *strider = NULL;

	if (!node)
		return (NULL);
	if (!(node->parent))
		return (NULL);
	if (!((node->parent)->parent))
		return (NULL);
	strider = (node->parent)->parent;
	if (strider->left == node->parent)
		return (strider->right);
	if (strider->right == node->parent)
		return (strider->left);
	return (NULL);

}
