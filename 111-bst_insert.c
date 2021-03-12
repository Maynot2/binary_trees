#include "binary_trees.h"

/**
 * bst_insert - inserts node into binary tree
 * @tree: pointer to pointer to tree root
 * @value: The value of the node to be added
 * Return: The added node
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL || *tree == NULL)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	if ((*tree)->n > value)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = (binary_tree_node(*tree, value));
			return ((*tree)->left);
		}
		return (bst_insert(&(*tree)->left, value));
	}

	if ((*tree)->n < value)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = (binary_tree_node(*tree, value));
			return ((*tree)->right);
		}
		return (bst_insert(&(*tree)->right, value));
	}
	return (NULL);
}
