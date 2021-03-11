#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates a binary tree to the left
 * @tree: root pointer
 * Return: The new root node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *parent;
	binary_tree_t *right_node;

	if (tree == NULL)
		return (NULL);

	parent = tree->parent;
	right_node = tree->right;
	tree->right = right_node->left;
	if (right_node->left != NULL)
		right_node->left->parent = tree;
	right_node->left = tree;
	tree->parent = right_node;
	right_node->parent = parent;
	return (right_node);
}
