#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is  leaf
 *
 * @node: points node to check
 *
 * Return: 1 if node is leaf or 0 otherwise. If node NULL, return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
