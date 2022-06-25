class Solution {
    ListNode left;
    public boolean isPalindrome(ListNode head) {
        left = head;
        return charge(head);
    }
    public boolean charge(ListNode right) {
        if(right==null) return true;
        boolean ans = charge(right.next);
        ans = ans && left.val==right.val;
        left = left.next;
        return ans;
    }
}