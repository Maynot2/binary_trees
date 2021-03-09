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
	const binary_tree_t *ancestar;

	ancestor = first;
	ancestar = second;
	while (ancestor)
	{
		while (ancestar)
		{
			if (ancestor == ancestar)
				return ((binary_tree_t *)ancestar);
			ancestar = ancestar->parent;
		}
		ancestor = ancestor->parent;
	}
	
	ancestor = second;
	ancestar = first;
	while (ancestor)
	{
		while (ancestar)
		{
			if (ancestor == ancestar)
				return ((binary_tree_t *)ancestar);
			ancestar = ancestar->parent;
		}
		ancestor = ancestor->parent;
	}
	
	return (NULL);
}
