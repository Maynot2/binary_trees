#include "binary_trees.h"

/**
 * binary_tree_height_rec - Mesures max-height of binary tree
 * @tree: root pointer to pointer
 * Return: height
 */
int binary_tree_height2(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height2(tree->left);
	right_height = binary_tree_height2(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

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
	int tree_height;
	int i;

	if (tree == NULL || func == NULL)
		return;

	tree_height = binary_tree_height2(tree);

	for (i = 0; i <= tree_height; i++)
		print_level(tree, i, func);
}
