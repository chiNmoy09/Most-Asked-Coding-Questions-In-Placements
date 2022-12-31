// Problem Link: https://leetcode.com/problems/balance-a-binary-search-tree/description/

/*
 * Given the root of a binary search tree, return a balanced binary search tree with the same node values. 
 * If there is more than one answer, return any of them.

A binary search tree is balanced if the depth of the two subtrees of every node never differs by more than 1.
 */


package leetCode;
import java.util.*;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;
    TreeNode(int va) {
        this.val = val;
        left=null;
        right=null;
    }
}

public class Balance_A_BST {
	
	

	
	void storeElements(TreeNode root,List<Integer> l){

        if(root==null){
            return;
        }

        storeElements(root.left,l);
        l.add(root.val);
        storeElements(root.right,l);
    }

    TreeNode constructTree(List<Integer> l,int start,int end){
        if(start>end){
            return null;
        }

        int mid=(start+end)>>1;
        TreeNode newNode=new TreeNode(l.get(mid));

        newNode.left=constructTree(l,start,mid-1);
        newNode.right=constructTree(l,mid+1,end);

        return newNode;
    }




    public TreeNode balanceBST(TreeNode root) {
        List<Integer> l=new ArrayList<Integer>();

        storeElements(root,l);

        int n=l.size();

        return constructTree(l,0,n-1);
    }
	

	public static void main(String[] args) {
		//Scanner sc=new Scanner(System.in);
		

	}

}
