#include "binary_trees.h"

/**
 * binary_tree_is_root - checks that given node is a root
 *
 * @node: pointer to node to be checked
 *
 * Return: 1 if node is a root or 0 otherwise. If node is NULL return 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);

	return (0);
}
