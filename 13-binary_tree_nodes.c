#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least 1 child in a
 * binary tree
 * @tree: A tree node
 * Return: The number of nodes as a size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	binary_tree_t *tl;
	binary_tree_t *tr;

	if (tree == NULL)
		return (0);

	tl = tree->left;
	tr = tree->right;

	if (tl != NULL || tr != NULL)
		return (binary_tree_nodes(tl) + 1 + binary_tree_nodes(tr));
	return (binary_tree_nodes(tl) + binary_tree_nodes(tr));
}
