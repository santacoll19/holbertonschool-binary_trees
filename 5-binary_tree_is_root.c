#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    if (node == NULL)
        return (0); // If the node is NULL, it cannot be a root

    // Check if the node has no parent (i.e., is not linked to a parent node)
    if (node->parent == NULL)
        return (1); // If it has no parent, it's a root

    return (0); // If it has a parent, it's not a root
}
