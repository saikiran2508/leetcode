/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean hasPathSum(TreeNode root, int t) {
        if(root == null && t == 0 || root == null && t != 0) return false;
        if(root.left == null && root.right == null && t-root.val == 0) return true;
        return hasPathSum(root.left, t-root.val) | hasPathSum(root.right, t-root.val);
    }
}
