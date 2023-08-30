#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to a function to apply to each node's value.
 * Return: Nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }

    // Traverse the left subtree
    binary_tree_inorder(tree->left, func);

    // Apply the function to the current node's value
    func(tree->n);

    // Traverse the right subtree
    binary_tree_inorder(tree->right, func);
}

