#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	ancestor = first;
	while (ancestor)
	{
		if (ancestor == second->parent)
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}
	
	ancestor = second;
	while (ancestor)
	{
		if (ancestor == first->parent)
			return ((binary_tree_t *)ancestor);
		ancestor = ancestor->parent;
	}
	
		return (NULL);
}
