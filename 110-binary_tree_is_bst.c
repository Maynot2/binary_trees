#include "binary_trees.h"

int is_valid_bst(const binary_tree_t *tree, int max, int min)
{
	if (tree == NULL)
		return (1);
	if (tree->n >= max || tree->n <= min)
		return (0);
	return (is_valid_bst(tree->left, tree->n, min) &&
			is_valid_bst(tree->right, max, tree->n))
}
/**
 * binary_tree_rotate_right - rotates a binary tree to the right
 * @tree: root pointer
 * Return: The new root node
 */

int binary_tree_is_bst(const binary_tree_t *tree);
{
	if (tree == NULL)
		return (0);
	return (is_valid_bst(tree, INT_MAX, INT_MIN));
}
