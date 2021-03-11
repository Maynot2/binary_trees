#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotates a binary tree to the right
 * @tree: root pointer
 * Return: The new root node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *parent;
	binary_tree_t *left_node;

	parent = tree->parent;
	left_node = tree->left;
	tree->left = left_node->right;
	if (left_node->right != NULL)
		left_node->right->parent = tree;
	left_node->right = tree;
	tree->parent = left_node;
	left_node->parent = parent;
	return (left_node);
}
