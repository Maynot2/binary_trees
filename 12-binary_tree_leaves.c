#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: A tree node
 * Return: The number of leaves as a size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *tl;
	binary_tree_t *tr;

	if (tree == NULL)
		return (0);

	tl = tree->left;
	tr = tree->right;

	if (tl == NULL && tr == NULL)
	{
		return (binary_tree_leaves(tl) + 1 + binary_tree_leaves(tr));
	}
	else
		return (binary_tree_leaves(tl) + binary_tree_leaves(tr));
}
