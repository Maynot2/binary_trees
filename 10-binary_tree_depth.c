#include "binary_trees.h"

/**
 * binary_tree_depth - Mesures the depth of a node in a binary tree
 * @tree: A tree node
 * Return: The depth as a size_t
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree != NULL)
	{
		while (tree->parent)
		{
			c++;
			tree = tree->parent;
		}
	}

	return (c);
}
