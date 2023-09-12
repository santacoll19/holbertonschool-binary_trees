#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0); // If the node is NULL, it's not a leaf

    // Check if the node has no left or right children
    if (node->left == NULL && node->right == NULL)
        return (1); // If both left and right children are NULL, it's a leaf

    return (0); // If it has at least one child, it's not a leaf
}
