#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node.
 * If the parent already has a left child, the new node takes its place.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 * Return: Pointer to the new node on success, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}

	/* If the parent already has a left child */
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
