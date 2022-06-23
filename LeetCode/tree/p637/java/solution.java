class Solution {
    public List<Double> averageOfLevels(TreeNode root) {
        if(root==null) return null;
        Queue<TreeNode> q = new LinkedList<>();
        List<Double> l = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()) {
            int len = q.size();
            double ans = 0;
            for(int i=0;i<len;i++) {
                TreeNode node = q.poll();
                double val = node.val;
                ans += val;
                if(node.left!=null) {
                    q.offer(node.left);
                }
                if(node.right!=null) {
                    q.offer(node.right);
                }
            }
            ans /= len*1.0;
            l.add(ans);
        }
        return l;
    }
}