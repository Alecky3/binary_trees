#include "binary_trees.h"
/**
 * findDepth - depth of node
 * @node: pointer to the node to find depth
 * Return: depth of the leftmost leaf node
 */
int findDepth(const binary_tree_t *node)
{
	int d = (0);

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
/**
 * isPerfect - test is a binary tree is perfect
 * @node: pointer to the root node
 * @d: depth of the node
 * @level: level of the node
 * Return: 1 if perfect, 0 otherwise
 */

int isPerfect(const binary_tree_t *node, int d, int level)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (d == level + 1);
	if (node->left == NULL || node->right == NULL)
		return (0);
	return (isPerfect(node->left, d, level + 1) &&
		isPerfect(node->right, d, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = findDepth(tree);

	return (isPerfect(tree, d, 0));
}
