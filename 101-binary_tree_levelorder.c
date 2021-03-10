#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL ? 1 : 0);
}

/**
 * binary_tree_height - Mesures max-height of binary tree
 * @tree: root pointer to pointer
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * print_level - prints a binary tree level
 * @root: root pointer
 * @level: An int
 * @func: The function used to prin
 * Return: Nothing
 */
void print_level(const binary_tree_t *root, int level, void (*func)(int))
{
	if (root == NULL)
		return;
	if (level == 0)
		func(root->n);
	if (level > 0)
	{
		print_level(root->left, level - 1, func);
		print_level(root->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes through binary tree using level order
 * @tree: root pointer
 * @func: print function
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t tree_height;
	size_t i;

	if (tree == NULL || func == NULL)
		return;

	tree_height = binary_tree_height(tree);

	for (i = 0; i <= tree_height; i++)
		print_level(tree, i, func);
}
