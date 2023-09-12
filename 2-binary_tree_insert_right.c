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
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL); // Return NULL on memory allocation failure


	if (parent == NULL)
		return (NULL); // Return NULL if the parent is NULL

	new_node->n = value;
	new_node->parent =parent;
	new_node->left = NULL;

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
