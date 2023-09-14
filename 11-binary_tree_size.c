#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root or the tree.
 * Return: Size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
