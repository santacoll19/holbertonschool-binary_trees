#include "binary_trees.h"
/**
 * binary_tree_preorder - funciton that goes throught a binary tree usign
 * pre-order traversal
 *
 * @tree: is a pointer to the root node
 * @func: is a pointer to a funciton to call for each node
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	(func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
