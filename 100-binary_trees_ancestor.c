#include "binary_trees.h"

/*
 * is_child - Checks if a node is a child of another node
 * @parent: the parent node
 * @child: the tentative child node
 * Return: 1 if node is a child
 *         0 otherwise
 */
int is_child(const binary_tree_t *parent, const binary_tree_t *child)
{
	while (child)
	{
		if (child == parent)
			return (1);
		child = child->parent;
	}
	return (0);
}

/*
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: pointer to the lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	while (first)
	{
		if (is_child(first, second))
			return ((binary_tree_t *)first);
		first = first->parent;
	}
	return (NULL);
}
