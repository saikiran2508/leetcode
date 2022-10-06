class Solution {
    public TreeNode addOneRow(TreeNode root, int v, int d) {
        if(d==1){
            TreeNode node = new TreeNode(v);
            node.left = root;
            return node;
        }
        insert(root, d, v, 1);
        return root;
    }
    
    public void insert(TreeNode node, int d, int v, int cd){
        if(node == null) return;
        if(cd == d-1){
            TreeNode temp = node.left;
            node.left = new TreeNode(v);
            node.left.left = temp;
            temp = node.right;
            node.right = new TreeNode(v);
            node.right.right = temp;
        }
        else{
            insert(node.left, d, v, cd+1);
            insert(node.right, d, v, cd+1);
        }
    }
}
