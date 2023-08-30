#include "binary_trees.h"

/**
 * binary_tree_size - Computes the size of a binary tree.
 * @tree: Pointer to the root of the tree to calculate the size.
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0, left_size = 0, right_size = 0;

    if (tree == NULL)
    {
        return (0);
    }
    else
    {
        // Recursively calculate the size of the left and right subtrees
        left_size = binary_tree_size(tree->left);
        right_size = binary_tree_size(tree->right);

        // The size of the tree is the sum of sizes of left and right subtrees plus 1 for the current node
        size = left_size + right_size + 1;
    }
    return (size);
}

