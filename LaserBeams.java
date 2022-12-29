/*
 * 
 * Anti-theft security devices are activated inside a bank. 
 * You are given a 0-indexed binary string array bank representing the floor plan of the bank, 
 * which is an m x n 2D matrix. bank[i] represents the ith row, consisting of '0's and '1's. 
 * '0' means the cell is empty, while'1' means the cell has a security device.

There is one laser beam between any two security devices if both conditions are met:

The two devices are located on two different rows: r1 and r2, where r1 < r2.
For each row i where r1 < i < r2, there are no security devices in the ith row.
Laser beams are independent, i.e., one beam does not interfere nor join with another.

Return the total number of laser beams in the bank.
 * 
 * 
 */


package leetCode;
import java.util.*;


public class LaserBeams {
	
	public static int numberOfBeams(String[] bank) {

        int m=bank.length;
        int n=bank[0].length();

        int ans=0;
        int flag=0;

        int cntDown=0,cntUp=0;

        for(int i=0;i<m;i++){
            flag=0;
            cntUp=0;

            for(int j=0;j<n;j++){

                if(bank[i].charAt(j)=='1'){
                    cntUp++;
                    flag=1;
                }

            }

            ans+= (cntDown*cntUp);

            if(flag==1){
                cntDown=cntUp;
            }
        }

        return ans;
    }

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		System.out.print("Give the value of n: ");
		int n=sc.nextInt();
		
		String bank[]=new String[n];
		
		System.out.println("Binary String Input: ");
		
		for(int i=0;i<n;i++) {
			//System.out.println(i);
			bank[i]=sc.next();
		}
		
		System.out.print("The total number of laser beams in the bank: "+numberOfBeams(bank));
		

	}

}
