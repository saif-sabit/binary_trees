#include "binary_trees.h"

/**
 * binary_tree_postorder - Perform a post-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to a function to apply to each node's value.
 * Return: Nothing.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }

    binary_tree_postorder(tree->left, func);
    binary_tree_postorder(tree->right, func);
    func(tree->n);
}

