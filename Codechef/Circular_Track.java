package com.chhavi;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while(t-->0) {
            int A = scanner.nextInt();
            int B = scanner.nextInt();
            int M = scanner.nextInt();
            System.out.println(min(abs(B-A),abs(M-abs(B-A))));   
        }
    }
}