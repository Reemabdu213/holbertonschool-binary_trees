 #include "binary_trees.h"

/**
 * height - measures the height of a binary tree (by nodes)
 * @tree: pointer to the root node
 * Return: height or 0 if tree is NULL
 */
static size_t height(const binary_tree_t *tree)
{
    size_t left_h, right_h;

    if (tree == NULL)
        return (0);

    left_h = height(tree->left);
    right_h = height(tree->right);

    if (left_h >= right_h)
        return (left_h + 1);
    else
        return (right_h + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_h, right_h;

    if (tree == NULL)
        return (0);

    left_h = (int)height(tree->left);
    right_h = (int)height(tree->right);

    return (left_h - right_h);
