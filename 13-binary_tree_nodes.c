#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with children in a binary tree.
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
        // Increment nodes_with_children if the current node has at least one child
        nodes_with_children += ((tree->left || tree->right) ? 1 : 0);

        // Recursively calculate the number of nodes with children in the left and right subtrees
        nodes_with_children += binary_tree_nodes(tree->left);
        nodes_with_children += binary_tree_nodes(tree->right);

        return (nodes_with_children);
    }
}

