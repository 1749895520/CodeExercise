class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        if(head==null) return null;
        ListNode left = head,right = head;
        for(int i=0;i<k;i++) {
            if(right==null) {
                return head;
            }
            right = right.next;
        }
        ListNode newHead = reverse(left,right);
        left.next = reverseKGroup(right,k);
        return newHead;
    }
    public ListNode reverse(ListNode head,ListNode tail) {
        ListNode next = head,now = head,prev = null;
        while(now!=tail) {
            next = now.next;
            now.next = prev;
            prev = now;
            now = next;
        }
        return prev;
    }
}