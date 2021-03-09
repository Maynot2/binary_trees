#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: base node
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	parent = node->parent;
	
	if (node == NULL || parent == NULL)
		return (NULL);

	if (node->n > parent->left->n)
		return (parent->left);
	else
		return (parent->right);
}
