package aula01;

import java.util.Scanner;

public class exer_01 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Introduza a idade: ");
		int idade = sc.nextInt();
		
		if (idade >= 18) {
			System.out.println("Pode tirar a carta de condução!");
		} else {
			System.out.println("Não pode tirar!");
			System.out.println("Falta " + (18 - idade) + " ano(s) para poder tirar a carta de condução.");
		}
	}
}
