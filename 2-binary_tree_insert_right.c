#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node to parents right
 * @parent: the parent of the new node
 * @value: value of the new node
 * Return: new node, or NULL if it faile
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->right = parent->right;
	newNode->left = NULL;

	if (parent->right != NULL)
	{
		parent->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}

