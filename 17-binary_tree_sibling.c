#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling node of a given node.
 * @node: Pointer to the node to find the sibling for.
 * Return: Pointer to the sibling node, or NULL if no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    // Check if the node or its parent is NULL
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }
    
    // If the node is the left child, return the right child of the parent
    if (node->parent->left == node)
        return (node->parent->right);
    
    // Otherwise, return the left child of the parent
    return (node->parent->left);
}

