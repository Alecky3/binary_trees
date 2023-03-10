#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of the newly created node
 * @value: value of the new node
 * Return: the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	newNode->n = value;

	return (newNode);
}
