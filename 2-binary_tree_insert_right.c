#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts a node as the right-cild
 * of another code
 *
 * @parent: is a pointer to the node to insert to the left-child
 * @value: is the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or if parent is
 * NULL
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_Node;

	if (parent == NULL)
		return (NULL);

	new_Node = malloc(sizeof(binary_tree_t));

	if (new_Node == NULL)
		return (NULL);

	new_Node->n = value;
	new_Node->left = NULL;
	new_Node->right = NULL;
	new_Node->parent = parent;

	if (parent->right != NULL)
	{
		new_Node->right = parent->right;
		parent->right->parent = new_Node;
	}
	parent->right = new_Node;
	return (new_Node);
}
