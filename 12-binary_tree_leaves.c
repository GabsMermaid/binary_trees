#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks that node is a leaf
 *
 * @node: pointer to node to be checked
 *
 * Return: 1 if node a leaf or 0 otherwise and if node is NULL return 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

/**
 * binary_tree_leaves - counts leaves in the binary tree
 *
 * @tree: pointer to root node of tree to count the leaves in
 *
 * Description: NULL pointer is NOT a leaf
 *
 * Return: number of leaves in binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
