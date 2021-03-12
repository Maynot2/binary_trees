#include "binary_trees.h"

/**
 * array_to_bst - builds a BST from an array
 * @array: A pointer to an array of int
 * @size: The size of the array
 * Return: First element in the array
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);
	return (root);
}
