#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures the height of a balanced binary tree.
 * @tree: Pointer to the root of the tree to measure.
 * Return: Height of the tree.
 */
size_t binary_tree_height_b(const binary_tree_t *tree)
{
    size_t left_height = 0;
    size_t right_height = 0;

    if (tree == NULL)
    {
        return (0);
    }
    else
    {
        if (tree)
        {
            // Calculate the height of the left and right subtrees
            left_height = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
            right_height = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
        }
        // Return the greater of the two subtree heights
        return ((left_height > right_height) ? left_height : right_height);
    }
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root of the tree to measure.
 * Return: Balance factor (difference between left and right subtree heights).
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int right_height = 0, left_height = 0, balance_factor = 0;

    if (tree)
    {
        // Calculate the height of the left and right subtrees
        left_height = (int)binary_tree_height_b(tree->left);
        right_height = (int)binary_tree_height_b(tree->right);

        // Calculate the balance factor (difference in heights)
        balance_factor = left_height - right_height;
    }

    return (balance_factor);
}

