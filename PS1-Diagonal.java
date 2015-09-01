import java.util.*;
import java.io.*;

/*
************************************************
  ____ ____    _  ___   __   
 / ___/ ___|  / |/ _ \ / /_  
| |   \___ \  | | (_) | '_ \ 
| |___ ___) | | |\__, | (_) |
 \____|____/  |_|  /_/ \___/ 
                             

Problem set 1


Question 2

Given a square matrix size N x N, calculate the product of the sums across the two main diagonals. For example, given the matrix:

4	5	7
3	1	5
9	3	2

Return: (4+1+2)*(9+1+7) = 119

*/


public static int diagonal() {
	Scanner scan = new Scanner(System.in);
	int N = scan.nextInt();
	int[][] matrix = new int[N][N];
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			matrix[i][j] = scan.nextInt();
		}
	}
	//YOUR CODE HERE

	return 0;
}