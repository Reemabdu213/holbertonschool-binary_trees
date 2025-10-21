#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* احذف اليسار أولاً */
	binary_tree_delete(tree->left);
	/* ثم احذف اليمين */
	binary_tree_delete(tree->right);
	/* ثم احذف العقدة نفسها */
	free(tree);
}
