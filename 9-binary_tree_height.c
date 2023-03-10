#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of the tree
 * Return: height of the tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
