# CodeExercise：

## 简介：

记录从大一暑假开始的刷题之旅。

**PS：这个代码库保存了我从大一入学所刷的所有算法题，只是从2022年6月21日开始整理。**

---

## 日常刷题：

### 2022.6.21——数组

*周二——雷阵雨转阴——35℃/22℃*

*今天开始刷LeetCode中的《初涉算法》篇，先从数组开始：*

#### [26. 删除有序数组中的重复项](https://leetcode.cn/problems/remove-duplicates-from-sorted-array/)

**类型：** 数组	双指针

```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int fast = 0,slow = 0;
        while(fast<nums.size()) {
            if(nums[fast++]!=nums[slow]) {
                nums[++slow] = nums[fast-1];
            }
        }
        return slow+1;
    }
};
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(1)

使用了**fast**和**slow**两个快慢指针进行判断，每次循环快指针都会向前走一位，通过快指针指向的位置和慢指针比较，若和慢指针所指向的数不同则慢指针走一位并将快指针所对应的值赋给慢指针指向的位置。

最后慢指针所指向的位置则为数组长度-1，所以返回**slow+1**即可。

详情参考：[双指针技巧秒杀七道数组题目 :: labuladong的算法小抄](https://labuladong.github.io/algo/2/18/21/)

*由上一题可延伸：*

#### [83. 删除排序链表中的重复元素](https://leetcode.cn/problems/remove-duplicates-from-sorted-list/)

**类型：**	链表

```cpp
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return nullptr;
        ListNode *slow = head,*fast = head;
        while(fast->next!=nullptr) {
            fast = fast->next;
            if(fast->val!=slow->val) {
                slow = slow->next;
                slow->val = fast->val;
            }
        }
        slow->next = nullptr;
        return head;
    }
};
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(1)

同样使用快慢指针，详情见上文。

#### [27. 移除元素](https://leetcode.cn/problems/remove-element/)

**类型：**	数组		双指针

```cpp
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slow = 0,fast = 0;
        while(fast!=nums.size()) {
            if(nums[fast++]!=val) {
                nums[slow++] = nums[fast-1];
            }
        }
        return slow;
    }
};
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(1)

同样利用双指针，将重复的元素覆盖，最后返回数组长度为slow的值。

#### [283. 移动零](https://leetcode.cn/problems/move-zeroes/)

**类型：**	数组		双指针

```cpp
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0,fast = 0;
        while(fast!=nums.size()) {
            if(nums[fast++]!=0) {
                nums[slow++] = nums[fast-1];
            }
        }
        while(slow!=nums.size()) {
            nums[slow++] = 0;
        }
    }
};
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(1)

利用上一题的做法最后在将**slow**指针往后的多余数替换为0。

#### [167. 两数之和 II - 输入有序数组](https://leetcode.cn/problems/two-sum-ii-input-array-is-sorted/)

**类型：**	数组		双指针	二分查找

```cpp
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0,right = numbers.size()-1;
        while(left<right) {
            int sum = numbers[left] + numbers[right];
            if(sum == target) {
                return {left+1,right+1};
            } else if(sum < target) {
                left++;
            } else {
                right--;
            }
        }
        return {0,0};
    }
};
```

**时间复杂度：**	O(n log n)	**空间复杂度：**	O(1)

通过二分查找的方法先从数组的两端的和开始比较，若**sum**比**target**小，则**left+1**；若**sum**比**target**大，则**right-1。**

#### [344. 反转字符串](https://leetcode.cn/problems/reverse-string/)

**类型：**	递归		双指针	字符串

```cpp
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0,right = s.size() - 1;
        while(left<right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;right--;
        }
    }
};
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(1)

通过双指针从头和尾同时进行。

#### [5. 最长回文子串](https://leetcode.cn/problems/longest-palindromic-substring/)

**类型：**	字符串	动态规划

```cpp
class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++) {
            string s1 = charge(s,i,i);
            string s2 = charge(s,i,i+1);
            ans = ans.length() > s1.length() ? ans : s1;
            ans = ans.length() > s2.length() ? ans : s2;
        }
        return ans;
    }
    string charge(string s,int left,int right) {
        while(left>=0 && right < s.length() && s[left]==s[right]) {
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
};
```

**时间复杂度：**	O(n²)	**空间复杂度：**	O(1)

先确定中心点的位置，计算回文字符串长度分别为奇数和偶数的情况，利用双指针求出每一个回文字符串，并通过比较实时更新最长回文字符串。

### 2022.6.22——二叉树

周三——雷阵雨转阴——32℃/26℃

今天决定通过labuladong的算法教程来学习数据结构和算法并刷题，详情见：[东哥带你刷二叉树（纲领篇） :: labuladong的算法小抄](https://labuladong.github.io/algo/1/4/)

#### [104. 二叉树的最大深度](https://leetcode.cn/problems/maximum-depth-of-binary-tree/)

**类型：**	树	深度优先搜索	广度优先搜索	二叉树

1.遍历法

```java
class Solution {
    int depth = 0,ans = 0;
    public int maxDepth(TreeNode root) {
        traverse(root);
        return ans;
    }
    public void traverse(TreeNode root) {
        if(root==null) return;
        depth++;
        if(root.left==null&&root.right==null) {
            ans = Math.max(ans,depth);
        }
        traverse(root.left);
        traverse(root.right);
        depth--;
    }
}
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)

遍历二叉树计算法通过前序计算最大深度，后序深度-1来模拟深度。

2.分解问题法

```java
class Solution {
    public int maxDepth(TreeNode root) {
        if(root==null) return 0;
        int leftNode = maxDepth(root.left);
        int rightNode = maxDepth(root.right);
        int ans = Math.max(leftNode,rightNode) + 1;
        return ans;
    }
}
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)

通过直接从子树的最大深度来求。

#### [144. 二叉树的前序遍历](https://leetcode.cn/problems/binary-tree-preorder-traversal/)

**类型：**	栈	树	深度优先搜索	二叉树

1.遍历法

```java
class Solution {
    List<Integer> ans = new LinkedList<>();
    public List<Integer> preorderTraversal(TreeNode root) {
        traverse(root);
        return ans;
    }
    public void traverse(TreeNode root) {
        if(root==null) return;
        ans.add(root.val);
        traverse(root.left);
        traverse(root.right);
    }
}
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)

2.分解问题法

```java
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> ans = new LinkedList<>();
        if(root==null) return ans;
        ans.add(root.val);
        ans.addAll(preorderTraversal(root.left));
        ans.addAll(preorderTraversal(root.right));
        return ans;
    }
}
```

**时间复杂度：**	O(n²)	**空间复杂度：**	O(N)

并不常用，仅仅针对java。

#### [543. 二叉树的直径](https://leetcode.cn/problems/diameter-of-binary-tree/)

**类型：**	树	深度优先搜索	二叉树

1.前序遍历法

```java
class Solution {
    int maxDiameter = 0;
    public int diameterOfBinaryTree(TreeNode root) {
        traverse(root);
        return maxDiameter;
    }
    public void traverse(TreeNode root) {
        if(root==null) return;
  
        int leftDiameter = maxDepth(root.left);
        int rightDiameter = maxDepth(root.right);
  
        maxDiameter = Math.max(maxDiameter,leftDiameter+rightDiameter);

        traverse(root.left);
        traverse(root.right);
    }
    public int maxDepth(TreeNode root) {
        if(root==null) return 0;

        int leftMax = maxDepth(root.left);
        int rightMax = maxDepth(root.right);

        return Math.max(leftMax,rightMax) + 1;
    }
}
```

**时间复杂度：**	O(n²)	**空间复杂度：**	O(N)

先用后序遍历求出每个节点左右的最大深度，再求出每个节点的最大直径。

2.后序遍历法

```java
class Solution {
    int maxDiameter = 0;
    public int diameterOfBinaryTree(TreeNode root) {
        maxDepth(root);
        return maxDiameter;
    }
    public int maxDepth(TreeNode root) {
        if(root==null) return 0;

        int leftMax = maxDepth(root.left);
        int rightMax = maxDepth(root.right);

        maxDiameter = Math.max(maxDiameter,leftMax+rightMax);

        return Math.max(leftMax,rightMax) + 1;
    }
}
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)

将两种计算全部用后序遍历的方法计算，可以将时间复杂度降到O(N)。



### 2022.6.23——二叉树

周四——小雨转大雨——33℃/26℃

今天继续练习二叉树的题目。


#### [100. 相同的树](https://leetcode.cn/problems/same-tree/)

**类型：**	树	深度优先搜索	广度优先搜索	二叉树

```java
class Solution {
    public boolean isSameTree(TreeNode p, TreeNode q) {
        if(p==null && q==null) {
            return true;
        }
        if(p==null || q==null) {
            return false;
        }
        if(p.val!=q.val) {
            return false;
        }
        return isSameTree(p.left,q.left) && isSameTree(p.right,q.right);
    }
}
```

**时间复杂度：**	O(min(m,n))	**空间复杂度：**	O(min(m,n))


#### [111. 二叉树的最小深度](https://leetcode.cn/problems/minimum-depth-of-binary-tree/)

**类型：**	树	深度优先搜索	广度优先搜索	二叉树

```java
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
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)


#### [637. 二叉树的层平均值](https://leetcode.cn/problems/average-of-levels-in-binary-tree/)

**类型：**	树	深度优先搜索	广度优先搜索	二叉树

```java
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
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)


#### [102. 二叉树的层序遍历](https://leetcode.cn/problems/binary-tree-level-order-traversal/)

**类型：**	树	广度优先搜索	二叉树

```java
class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new LinkedList<>();
        if(root==null) return ans;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()) {
            int len = q.size();
            List<Integer> l = new LinkedList<>();
            for(int i=0;i<len;i++) {   
                TreeNode node = q.poll();
                l.add(node.val);
                if(node.left!=null) {
                    q.offer(node.left);
                }
                if(node.right!=null) {
                    q.offer(node.right);
                }
            }
            ans.add(l);
        }
        return ans;
    }
}
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)


#### [107. 二叉树的层序遍历 II](https://leetcode.cn/problems/binary-tree-level-order-traversal-ii/)

**类型：**	树	广度优先搜索	二叉树

```java
class Solution {
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        LinkedList<List<Integer>> ans = new LinkedList<>();
        if(root==null) return ans;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        while(!q.isEmpty()) {
            int len = q.size();
            List<Integer> l = new LinkedList<>();
            for(int i=0;i<len;i++) {
                TreeNode node = q.poll();
                l.add(node.val);
                if(node.left!=null) {
                    q.offer(node.left);
                }
                if(node.right!=null) {
                    q.offer(node.right);
                }
            }
            ans.addFirst(l);
        }
        return ans;
    }
}
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)


#### [103. 二叉树的锯齿形层序遍历](https://leetcode.cn/problems/binary-tree-zigzag-level-order-traversal/)

**类型：**	树	广度优先搜索	二叉树

```java
class Solution {
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> ans = new LinkedList<>();
        if(root==null) return ans;
        Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        boolean flag = true;
        while(!q.isEmpty()) {
            int len = q.size();
            LinkedList<Integer> l = new LinkedList<>();
            for(int i=0;i<len;i++) {
                TreeNode node = q.poll();
                if(flag) {
                    l.add(node.val);
                } else {
                    l.addFirst(node.val);
                }
                if(node.left!=null) {
                    q.offer(node.left);
                }
                if(node.right!=null) {
                    q.offer(node.right);
                }
            }
            flag = !flag;
            ans.add(l);
        }
        return ans;
    }
}
```

**时间复杂度：**	O(N)	**空间复杂度：**	O(N)

---

## 学习笔记

### 2022.6.23——二叉树笔记

#### 1.二叉树遍历框架

```java
void traverse(TreeNode root) {
    if (root == null) {
        return;
    }
    // 前序位置
    traverse(root.left);
    // 中序位置
    traverse(root.right);
    // 后序位置
}
```

#### 2.数组&链表的二叉树遍历法

```java
/* 迭代遍历数组 */
void traverse(int[] arr) {
    for (int i = 0; i < arr.length; i++) {

    }
}

/* 递归遍历数组 */
void traverse(int[] arr, int i) {
    if (i == arr.length) {
        return;
    }
    // 前序位置
    traverse(arr, i + 1);
    // 后序位置
}

/* 迭代遍历单链表 */
void traverse(ListNode head) {
    for (ListNode p = head; p != null; p = p.next) {

    }
}

/* 递归遍历单链表 */
void traverse(ListNode head) {
    if (head == null) {
        return;
    }
    // 前序位置
    traverse(head.next);
    // 后序位置
}
```

#### 3.层序遍历

```java
// 输入一棵二叉树的根节点，层序遍历这棵二叉树
void levelTraverse(TreeNode root) {
    if (root == null) return;
    Queue<TreeNode> q = new LinkedList<>();
    q.offer(root);

    // 从上到下遍历二叉树的每一层
    while (!q.isEmpty()) {
        int sz = q.size();
        // 从左到右遍历每一层的每个节点
        for (int i = 0; i < sz; i++) {
            TreeNode cur = q.poll();
            // 将下一层节点放入队列
            if (cur.left != null) {
                q.offer(cur.left);
            }
            if (cur.right != null) {
                q.offer(cur.right);
            }
        }
    }
}
```



```java
List<List<Integer>> res = new ArrayList<>();

List<List<Integer>> levelTraverse(TreeNode root) {
    if (root == null) {
        return res;
    }
    // root 视为第 0 层
    traverse(root, 0);
    return res;
}

void traverse(TreeNode root, int depth) {
    if (root == null) {
        return;
    }
    // 前序位置，看看是否已经存储 depth 层的节点了
    if (res.size() <= depth) {
        // 第一次进入 depth 层
        res.add(new LinkedList<>());
    }
    // 前序位置，在 depth 层添加 root 节点的值
    res.get(depth).add(root.val);
    traverse(root.left, depth + 1);
    traverse(root.right, depth + 1);
}
```



```java
List<List<Integer>> res = new LinkedList<>();

List<List<Integer>> levelTraverse(TreeNode root) {
    if (root == null) {
        return res;
    }
    List<TreeNode> nodes = new LinkedList<>();
    nodes.add(root);
    traverse(nodes);
    return res;
}

void traverse(List<TreeNode> curLevelNodes) {
    // base case
    if (curLevelNodes.isEmpty()) {
        return;
    }
    // 前序位置，计算当前层的值和下一层的节点列表
    List<Integer> nodeValues = new LinkedList<>();
    List<TreeNode> nextLevelNodes = new LinkedList<>();
    for (TreeNode node : curLevelNodes) {
        nodeValues.add(node.val);
        if (node.left != null) {
            nextLevelNodes.add(node.left);
        }
        if (node.right != null) {
            nextLevelNodes.add(node.right);
        }
    }
    // 前序位置添加结果，可以得到自顶向下的层序遍历
    res.add(nodeValues);
    traverse(nextLevelNodes);
    // 后序位置添加结果，可以得到自底向上的层序遍历结果
    // res.add(nodeValues);
}
```

---

## 补充内容：
