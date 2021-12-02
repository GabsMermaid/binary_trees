#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is a leaf
 *
 * @node: points node to be checked
 *
 * Return: 1 if node is a leaf or 0 otherwise and if node is NULL return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_nodes - count the nodes with at least 1 child in binary tree
 *
 * @tree: points to the root node of the tree to count the nodes in
 *
 * Note: NULL pointer is not a node
 *
 * Return: number of nodes with at least 1 child in binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (1 + left + right);
}
