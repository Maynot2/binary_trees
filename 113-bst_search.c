#include "binary_trees.h"

/**
 * bst_search - searches for a value in a BST
 * @tree: The rood node
 * @value: The value of the node we are looking for
 * Return: First element in the array
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL || tree->n == value)
		return ((bst_t *)tree);
	if (value < tree->n)
		return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
}
