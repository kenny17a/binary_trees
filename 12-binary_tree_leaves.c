#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the number of leaves in a binary tree.
 *
 * @tree: Pointer to a binary tree.
 *
 * Return: The number of leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree && !tree->left && !tree->right)
		return (1);
	else if (tree)
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (0);
}
