#include "binary_trees.h"
/**
 * recursive_size - returns the height of the tree recursively.
 * @tree: pointer to the root node
 * Return: height of the tree
 */

size_t recursive_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	left = recursive_size(tree->left);
	right = recursive_size(tree->right);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_height - calls recursive_height to return the height
 * of a binary tree
 *
 * @tree: tree root
 * Return: height of the tree or 0 if tree is NULL;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (recursive_size(tree) - 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor;
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
