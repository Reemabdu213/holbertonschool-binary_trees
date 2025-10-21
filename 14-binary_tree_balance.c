 #include "binary_trees.h"

/**
 * height_nodes - Measures the height of a binary tree by nodes.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: The height (in nodes). If tree is NULL, returns 0.
 */
static size_t height_nodes(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL)
		return (0);

	lh = height_nodes(tree->left);
	rh = height_nodes(tree->right);

	return ((lh >= rh ? lh : rh) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: The balance factor (left height - right height).
 *         If tree is NULL, returns 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h, right_h;

	if (tree == NULL)
		return (0);

	left_h = (int)height_nodes(tree->left);
	right_h = (int)height_nodes(tree->right);

	return (left_h - right_h);
}
