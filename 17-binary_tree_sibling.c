#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: base node
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (node == parent->right)
		return (parent->left);
	return (parent->right);
}
