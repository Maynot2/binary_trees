#include "binary_trees.h"

/**
 * binary_tree_is_complete_rec - checks if a binary tree is complete
 * @tree: root pointer
 * @i: The index of the node
 * @size: The number of node in the tree
 * Return: 1 if complete, otherwise 0
 */

int binary_tree_is_complete_rec(binary_tree_t *tree, int i, int size)
{
	if (tree == NULL)
		return (0);

	if (index >= number_nodes)
		return (0);

	return (binary_tree_is_complete_rec(tree->left, 2 * i + 1, size) &&
			binary_tree_is_complete_rec(tree->right, 2 * i + 2, size));
}

/**
 * tree_size - Mesures the number of a nodes from a given node
 * @tree: A tree node
 * Return: The size of the tree as an int
 */
int  tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: root pointer
 * Return: 1 if complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	return (binary_tree_is_complete_rec(tree, 0, tree_size(tree)));
}
