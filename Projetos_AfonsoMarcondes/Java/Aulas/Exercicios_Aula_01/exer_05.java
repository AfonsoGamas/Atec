package aula01;

import java.util.Scanner;

public class exer_05 {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Introduza a idade: ");
		int idade = sc.nextInt();
		
		if (idade < 18) {
			System.out.println("Demasiado novo para as forças armadas!");
		} else if (idade >= 18 && idade <= 35) {
			System.out.println("Autorizado para as forças armadas!");
		} else {
			System.out.println("Ultrapassada a idade para as forças armadas!");
		}
	}
}
