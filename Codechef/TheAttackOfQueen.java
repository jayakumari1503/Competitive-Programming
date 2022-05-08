package com.chhavi;

import java.util.Scanner;
import java.lang.*;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-->0) {
            int N = scanner.nextInt();
            int X = scanner.nextInt();
            int Y = scanner.nextInt();
            System.out.println(2*(N-1) + Math.min(X-1, Y-1)
                    + Math.min(X-1, N-Y) + Math.min(Y-1, N-X) + Math.min(N-X, N-Y));

        }
    }
}