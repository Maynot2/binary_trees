#include "binary_trees.h"

/**
 * binary_tree_size - Mesures the number of a nodes from a given node
 * @tree: A tree node
 * Return: The size of the tree as a size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
