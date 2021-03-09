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

	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	
	ancestor = second;
	while (ancestor->parent != NULL)
	{
		ancestor = ancestor->parent;
		if (ancestor->n == first->parent->n)
			return ((binary_tree_t *)ancestor);
	}
	
	ancestor = first;
	while (ancestor->parent != NULL)
	{
		ancestor = ancestor->parent;
		if (ancestor->n == second->parent->n)
			return ((binary_tree_t *)ancestor);
	}
	
	return (NULL);
}
