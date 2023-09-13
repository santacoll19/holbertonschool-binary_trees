#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the node of the tree to measure the height.
 *
 * Return: Return 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		leftHeight = binary_tree_height(tree->left) + 1;

	if (tree->right != NULL)
		rightHeight = binary_tree_height(tree->right) + 1;

	if (leftHeight > rightHeight)
		return (leftHeight);
	else
		return (rightHeight);
}
