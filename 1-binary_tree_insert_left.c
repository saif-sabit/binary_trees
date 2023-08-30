#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node.
 * If the parent already has a left child, the new node takes its place.
 * @parent: Pointer to the parent node.
 * @value: Value to be assigned to the new node.
 * Return: Pointer to the new node on success, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    // Check if the parent is NULL
    if (parent == NULL)
    {
        return (NULL);
    }

    // Create a new node with the given value and the provided parent
    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
    {
        return (NULL); // Return NULL if memory allocation fails
    }

    // If the parent already has a left child
    if (parent->left != NULL)
    {
        // Move the existing left child down one level
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    // Set the new node as the left child of the parent
    parent->left = new_node;

    return (new_node); // Return the new node
}

