// 3. Faça um programa que solicite ao usuário seu nome e sua idade e apresente uma mensagem como:
// Olá, Fulano! Você tem 20 anos.

import java.util.Scanner;

public class ex003 {

    public static void main (String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Qual o seu nome?");
        String nome = scanner.nextLine();

        System.out.println("Qual a sua idade?");
        int idade = scanner.nextInt();
        scanner.nextLine();

        System.out.println("Ola, " + nome + "! Voce tem " + idade + " anos.");

        scanner.close();
    }
}