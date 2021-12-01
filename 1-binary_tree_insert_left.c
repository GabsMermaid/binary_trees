#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node_1 - create binary tree node
 *
 * @parent: parent of node to create
 * @value: value to store new node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_node_1(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;

	new_node->n = value;

	new_node->left = new_node->right = NULL;

	return (new_node);
}

/**
 * binary_tree_insert_left - insert node as left-child of other node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Description: If parent has left-child, the new node must take its
 * place, and old left-child must be set as left-child of new node.
 *
 * Return: pointer to created node or NULL if fails
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);
	left_child = binary_tree_node_1(parent, value);

	if (left_child == NULL)
		return (NULL);
	left_child->left = parent->left;

	if (left_child->left != NULL)
		left_child->left->parent = left_child;
	parent->left = left_child;

	return (left_child);
}
