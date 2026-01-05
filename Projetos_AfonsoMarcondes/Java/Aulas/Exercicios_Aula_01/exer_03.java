package aula01;

import java.util.Scanner;

public class exer_03 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Introduza a idade: ");
		int idade = sc.nextInt();
		
		if (idade > 12) {
			System.out.println("Idade demasiado grande para o espaço!");
		} else if (idade >= 3 && idade <= 12) {
			System.out.println("Autorizado");
		} else {
			System.out.println("Demasiado novo para o espaço KIDs");
		}
	}
}
