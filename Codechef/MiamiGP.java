package com.chhavi;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while(t-->0) {
            int X = scanner.nextInt();
            int Y = scanner.nextInt();
            double rule = X*1.07;
            if(rule >= Y) {
                System.out.println("Yes");
            }
            else
                System.out.println("No");
        }
    }
}