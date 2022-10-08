/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int sizeCnt(struct TreeNode* root)
{
    if (root)
        return 1 + sizeCnt(root->left) + sizeCnt(root->right);
    return 0;
}

void recursive(struct TreeNode* root, int** res) {

    if (root) {

        recursive(root->left, res);
        *((*res)++) = root->val;
        recursive(root->right, res);
    }
}

// Note: The returned array must be malloced, assume caller calls free()
int* inorderTraversal(struct TreeNode* root, int* returnSize) {

    *returnSize = sizeCnt(root);
    int* res = (int*)malloc(((*returnSize)) * sizeof(int));
    memset(res, 0, (*returnSize) * sizeof(int));
    int* res_ptr = res;
    
    recursive(root, &res_ptr);
    return res;
}