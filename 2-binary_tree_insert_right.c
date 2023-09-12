#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	// Allocate memory for the new node
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL); // Return NULL on memory allocation failure


	if (parent == NULL)
		return (NULL); // Return NULL if the parent is NULL

	// If parent already has a right child, move it to the new node's right
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	// Set the new node as the parent's right child
	parent->right = new_node;

	return (new_node);
}

/**
 * binary_tree_print - Prints a binary tree using in-order traversal
 *
 * @tree: Pointer to the root node of the tree to print
 */
void binary_tree_print(const binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	printf("(");
	printf("%d", tree->n);

	binary_tree_print(tree->left);
	binary_tree_print(tree->right);

	printf(")");
}

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);

	printf("Original Tree:\n");
	binary_tree_print(root);
	printf("\n");

	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);

	printf("Modified Tree:\n");
	binary_tree_print(root);
	printf("\n");

	return (0);
}
