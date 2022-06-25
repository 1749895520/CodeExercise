class Solution {
    ListNode tail = null;
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(left == 1) {
            return reverse(head,right);
        }
        head.next = reverseBetween(head.next,left-1,right-1);
        return head;
    }
    public ListNode reverse(ListNode head,int n) {
        if(n==1) {
            tail = head.next;
            return head;
        }
        ListNode last = reverse(head.next,n-1);
        head.next.next = head;
        head.next = tail;
        return last;
    }
}