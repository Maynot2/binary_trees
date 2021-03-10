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
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: A tree node
 * Return: The number of leaves as a size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *tl;
	binary_tree_t *tr;

	if (tree == NULL)
		return (0);

	tl = tree->left;
	tr = tree->right;

	if (tl == NULL && tr == NULL)
		return (binary_tree_leaves(tl) + 1 + binary_tree_leaves(tr));
	return (binary_tree_leaves(tl) + binary_tree_leaves(tr));
}

/**
 * power - power func
 * @num: num to pow
 * @exp: exponant
 * Return: power
 */
size_t power(size_t num, size_t exp)
{
	size_t res = 1;
	size_t i;

	if (exp == 0)
		return (1);

	for (i = 0; i < exp; i++)
		res *= num;

	return (res);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root pointer
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t power_height;
	size_t num_leaves;

	if (tree == NULL)
		return (0);

	power_height = power(2, binary_tree_height(tree));
	num_leaves = binary_tree_leaves(tree);

	if (power_height == num_leaves)
		return (1);
	return (0);
}
