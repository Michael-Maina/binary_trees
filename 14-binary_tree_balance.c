#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of binary tree
 *
 * @tree: pointer to the root node
 * Return: the balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 1, r_height = 1;

	if (!tree)
		return (0);

	l_height += binary_tree_balance(tree->left);
	r_height += binary_tree_balance(tree->right);

	printf("Parent: %d, Left: %d, Right: %d\n",tree->n, l_height, r_height);
	return (l_height - r_height);

}
