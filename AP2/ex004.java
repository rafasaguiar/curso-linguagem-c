// 4. Faça um programa que leia o salário de um funcionário e o percentual de aumento. 
// Calcule e apresente: valor do aumento; novo salário.

import java.util.Scanner;

public class ex004 {

    public static void main (String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Qual o seu salario atual em reais?");
        float salario = scanner.nextFloat();

        System.out.println("Qual o percentual de aumento?");
        float aumento = scanner.nextFloat();

        float valorAumento = salario * (aumento/100);

        float novoSalario = salario + valorAumento;

        System.out.println("O aumento de salario sera de: " + valorAumento + " reais.");
        System.out.println("Seu novo salario sera, apos o aumento, de: " + novoSalario + " reais.");

        scanner.close();

    }
}