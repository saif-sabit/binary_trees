#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle node of a given node.
 * @node: Pointer to the node to find the uncle for.
 * Return: Pointer to the uncle node, or NULL if no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/**
	 * Check if the node, its parent,
	 * or its grandparent is NULL
	 */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	/**
	 * If the parent's parent's left child is the parent,
	 * return the right child of the parent's parent
	 */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
