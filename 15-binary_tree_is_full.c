#include "binary_trees.h"

/**
 * binary_tree_is_full_rec - Checks if a binary tree is full
 * @tree: A tree node
 * Return: 1 if full
 *         0 otherwise
 */
int binary_tree_is_full_rec(const binary_tree_t *tree)
{
	binary_tree_t *tl;
	binary_tree_t *tr;

	if (tree == NULL)
		return (1);

	tl = tree->left;
	tr = tree->right;

	if ((tl && !tr) || (tr && !tl))
		return (0);

	return (binary_tree_is_full_rec(tl) && binary_tree_is_full_rec(tr));
}

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: A tree node
 * Return: 1 if full
 *         0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_is_full_rec(tree));
}
