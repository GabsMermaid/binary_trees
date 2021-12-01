#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node_2 - create binary tree node
 *
 * @parent: parent of node to create
 * @value: value to store new node
 *
 * Return: pointer of new node
 */

binary_tree_t *binary_tree_node_2(binary_tree_t *parent, int value)
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
 * binary_tree_insert_right - insert node as right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Description: If parent already has right-child, new node must take its
 * place and old right-child must be set right-child of the new node
 *
 * Return: pointer to created node or NULL if fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node_2(parent, value);

	if (right_child == NULL)
		return (NULL);
	right_child->right = parent->right;

	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;

	return (right_child);
}
