// Problem Link: https://leetcode.com/problems/find-valid-matrix-given-row-and-column-sums/description/


/*
 * 
 * You are given two arrays rowSum and colSum of non-negative integers where rowSum[i] is the sum of the elements in the ith row and colSum[j] is the sum of the elements of the jth column of a 2D matrix. In other words, you do not know the elements of the matrix, but you do know the sums of each row and column.

Find any matrix of non-negative integers of size rowSum.length x colSum.length that satisfies the rowSum and colSum requirements.

Return a 2D array representing any matrix that fulfills the requirements. It's guaranteed that at least one matrix that fulfills the requirements exists.
 * 
 * 
 */


package leetCode;
import java.util.*;
public class FindValidMatrix {
	
	public static int[][] restoreMatrix(int[] rowSum, int[] colSum) {

        int m=rowSum.length;
        int n=colSum.length;

        int ans[][]=new int[m][n];

        for(int i=0;i<m;i++){

            for(int j=0;j<n;j++){

                ans[i][j]=Math.min(rowSum[i],colSum[j]);
                rowSum[i] -= ans[i][j];
                colSum[j] -= ans[i][j];

            }

        }
        

        return ans;
    }

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		
		System.out.print("Row Size: ");
		int m=sc.nextInt();
		
		System.out.print("Column Size: ");
		int n=sc.nextInt();
		
		System.out.println("Row sum:");
		int rowSum[]=new int[m];
		for(int i=0;i<m;i++) {
			rowSum[i]=sc.nextInt();
		}
		
		System.out.println("Column sum:");
		int colSum[]=new int[m];
		for(int i=0;i<m;i++) {
			colSum[i]=sc.nextInt();
		}
		
		System.out.println("Valid Matrix:");
		int ans[][]=restoreMatrix(rowSum, colSum);
		for(int i=0;i<m;i++) {
			for(int j=0;j<n;j++) {
				System.out.print(ans[i][j] + " ");
			}
			System.out.println();
		}

	}

}
