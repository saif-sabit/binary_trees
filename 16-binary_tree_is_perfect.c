#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a tree is perfect.
 * A tree is perfect if it has the same number of levels on both sides
 * and each node has either two children or none.
 * @tree: Pointer to the root of the tree to check.
 * Return: The level of height if the tree is perfect, otherwise 0.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
    int left_height = 0, right_height = 0;

    if (tree->left && tree->right)
    {
        // Recursively calculate the height of the left and right subtrees
        left_height = 1 + tree_is_perfect(tree->left);
        right_height = 1 + tree_is_perfect(tree->right);

        // Check if the heights are the same and not zero
        if (right_height == left_height && right_height != 0 && left_height != 0)
            return (right_height);

        return (0);
    }
    else if (!tree->left && !tree->right)
    {
        // Return 1 if the current node has no children
        return (1);
    }
    else
    {
        // Return 0 if one child is missing and the other is present
        return (0);
    }
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * A binary tree is perfect if it is a perfect tree.
 * @tree: Pointer to the root of the tree to check.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int result = 0;

    if (tree == NULL)
    {
        return (0);
    }
    else
    {
        result = tree_is_perfect(tree);
        
        // Return 1 if tree_is_perfect returns a non-zero result, indicating a perfect tree
        if (result != 0)
        {
            return (1);
        }
        
        return (0);
    }
}

