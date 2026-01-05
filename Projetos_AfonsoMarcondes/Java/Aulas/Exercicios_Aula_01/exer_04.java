package aula01;

import java.util.Scanner;

public class exer_04 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("O senhor tem 100€, introduza a sua idade: ");
		int idade = sc.nextInt();
		int val_passagem = 100;
		
		if (idade >= 65) {
			System.out.println("Tem 70% de desconto! Tem que pagar " + (val_passagem * 0.3) + "€");
		} else if (idade <= 12) {
			System.out.println("Tem 50% de desconto! Tem que pagar " + (val_passagem * 0.5) + "€");
		} else if (idade <= 17) {
			System.out.println("Tem 20% de desconto! Tem que pagar " + (val_passagem * 0.8) + "€");
		} else {
			System.out.println("Não tem desconto! ;-; Tem que pagar " + val_passagem + "€");
		}
	}
}
