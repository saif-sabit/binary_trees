#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes in a binary tree.
 * @tree: Pointer to the root of the tree to check.
 * Return: Number of nodes with children in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_with_children = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		nodes_with_children += ((tree->left || tree->right) ? 1 : 0);

		/* Calculate the number of nodes with children in the subtrees */
		nodes_with_children += binary_tree_nodes(tree->left);
		nodes_with_children += binary_tree_nodes(tree->right);

		return (nodes_with_children);
	}
}
