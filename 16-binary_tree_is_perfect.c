#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
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
 * binary_tree_height - measures the height of binary tree
 *
 * @tree: points to root node of tree to be measured  of
 *
 * Return: height of the tree and if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (1 + left);

	return (1 + right);
}

/**
 * binary_tree_is_perfect - checks a binary tree is perfect
 *
 * @tree: points to root node of tree to be checked
 *
 * Return: 1 if perfect or 0 otherwise and if tree is NULL return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *l, *r;

	if (tree == NULL)
		return (0);
	l = tree->left;
	r = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (l == NULL || r == NULL)
		return (0);

	if (binary_tree_height(l) == binary_tree_height(r))
	{
		if (binary_tree_is_perfect(l) && binary_tree_is_perfect(r))
			return (1);
	}

	return (0);
}
