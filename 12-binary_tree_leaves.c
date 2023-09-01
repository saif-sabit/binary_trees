#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree.
 * @tree: Pointer to the root of the tree to check.
 * Return: Number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		/* Recursively calculate the number of leaves in the subtrees */
		left_leaves = binary_tree_leaves(tree->left);
		right_leaves = binary_tree_leaves(tree->right);

		leaves = left_leaves + right_leaves;
		return ((!left_leaves && !right_leaves) ? leaves + 1 : leaves);
	}
}
