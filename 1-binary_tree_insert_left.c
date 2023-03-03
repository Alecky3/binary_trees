#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node as a parents
 * left child
 * @parent: the parent node
 * @value: value of the new node
 * Return: the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = parent->left;

	if (parent->left != NULL)
		parent->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}
