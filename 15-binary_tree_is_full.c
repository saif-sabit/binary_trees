#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * A binary tree is full if each node has either two or zero children.
 * @tree: Pointer to the root of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full = 0, right_is_full = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			/* Recursively check if both subtrees are full */
			left_is_full = binary_tree_is_full(tree->left);
			right_is_full = binary_tree_is_full(tree->right);

			/* Return 0 if either of the subtrees is not full*/
			if (left_is_full == 0 || right_is_full == 0)
			{
				return (0);
			}

			return (1);
		}

		else if (!tree->left && !tree->right)
		/* Return 1 if the current node has no children */
			return (1);
		else
			return (0);
	}
}
