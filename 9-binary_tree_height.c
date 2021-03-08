#include "binary_trees.h"

/**
 * binary_tree_height_rec - Mesures max-height of binary tree
 * @tree: root pointer to pointer
 * Return: height
 */
int binary_tree_height_rec(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_height - Mesures max-height of binary tree
 * @tree: root pointer to pointer
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((size_t)binary_tree_height_rec(tree));
}
