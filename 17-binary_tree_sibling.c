#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of the node
 *
 * @node: points node to find the sibling of
 *
 * Return: pointer to sibling node or NULL if no sibling exists
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
