class Solution {
    public int minDepth(TreeNode root) {
        //  层序遍历
        if(root==null) return 0;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        int depth = 1;
        while(!q.isEmpty()){
            int len = q.size();
            for(int i=0;i<len;i++) {
                TreeNode node = q.poll();
                if(node.left==null&&node.right==null) {
                    return depth;
                }
                if(node.left!=null) {
                    q.offer(node.left);
                }
                if(node.right!=null) {
                    q.offer(node.right);
                }
            }
            depth++;
        }
        return depth;
    }
}