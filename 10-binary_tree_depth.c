#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in binary tree
 *
 * @node: pointer to node to be measured
 *
 * Return: depth of node in binary tree or if node is NULL, return 0
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t count = 0;

	if (node == NULL)
		return (count);

	while (node->parent != NULL)
	{
		count++;
		node = node->parent;
	}

	return (count);
}
