#include "binary_trees.h"
#include <limits.h>

/**
 * is_valid_bst - checks if binary tree is bst
 * @tree: root pointer
 * @max: The max int
 * @min: The min int
 * Return: 1 if true 0 otherwise
 */

int is_valid_bst(const binary_tree_t *tree, int max, int min)
{
	if (tree == NULL)
		return (1);
	if (tree->n >= max || tree->n <= min)
		return (0);
	return (is_valid_bst(tree->left, tree->n, min) &&
			is_valid_bst(tree->right, max, tree->n));
}
/**
 * binary_tree_is_bst - checks if binary tree is bst
 * @tree: root pointer
 * Return: 1 if true 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_valid_bst(tree, INT_MAX, INT_MIN));
}
