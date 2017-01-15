package com.demo.model;

import java.util.Scanner;

public class Demo {

	public static void main(String[] args) {

		Scanner s = new Scanner(System.in);
		String input = s.next();

		wordBreak(input);
		s.close();
	}

	private static void wordBreak(String input) {

		wordBreakUtil(input, input.length(), "");
	}

	private static void wordBreakUtil(String input, int length, String result) {

		//System.out.println("input ="+input);
		for (int i = 1; i <= length; i++) {

			String prefix = input.substring(0, i);
			//System.out.println("prefix="+prefix);
			if (dictonaryContains(prefix)) {

				if (i == length) {

					result = result + prefix;
					System.out.println("result = " + result);
					return;
				}
				//System.out.println("result + prefix = " + result+prefix+" ");
				wordBreakUtil(input.substring(i, length), length - i, result + prefix + " ");
			}

		}

	}

	private static boolean dictonaryContains(String prefix) {

		String dictionary[] = { "mobile", "samsung", "man", "mango", "icecream", "and", "go", "i",
				"like", "ice", "cream" };

		int n = dictionary.length;

		for (int i = 0; i < dictionary.length; i++)
			if (dictionary[i].compareTo(prefix) == 0)
				return true;

		return false;
	}
}
