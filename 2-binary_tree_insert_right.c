#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts
 * a node as the right child of a parent node.
 * If the parent already has a right child, the new node takes its place.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 * Return: Pointer to the new node on success, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	/* Create a new node with the given value and the provided parent */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* If the parent already has a right child */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
