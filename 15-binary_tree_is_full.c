#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A tree node
 * Return: 1 if full
 *         0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (tree->left && !tree->right || tree->right && !tree->left)
		return (0);
	return (binary_tree_is_full(tree->left) && binary_tree_size(tree->right));
}
