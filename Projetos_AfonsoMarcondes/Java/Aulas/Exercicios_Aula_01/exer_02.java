package aula01;

import java.util.Scanner;

public class exer_02 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Introduza a sua idade: ");
		int idade = sc.nextInt();
		
		if (idade >= 65) {
			System.out.println("Cliente Sénior!");
			System.out.println("Pode entrar no bar com prazer <3");
		} else if (idade >= 18) {
			System.out.println("Maior de idade!");
			System.out.println("Pode entrar no bar.");
		} else {
			System.out.println("Menor de idade!");
			System.out.println("Não pode entrar no bar.");
		}
	}
}
