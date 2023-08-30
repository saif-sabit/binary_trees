#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a specified node from the root.
 * @tree: Pointer to the node to check the depth.
 * Return: 0 if the node is the root, otherwise the depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    // If the tree is valid and has a parent, calculate the depth
    return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

