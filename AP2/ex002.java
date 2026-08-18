import java.util.Scanner;

public class ex002 {

    public static void main (String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Qual o seu nome?");
        String nome = scanner.nextLine();

        System.out.println("Qual a sua idade?");
        int idade = scanner.nextInt();
        scanner.nextLine();

        System.out.println("Qual a sua cidade?");
        String cidade = scanner.nextLine();

        System.out.println("Qual a sua altura em metros?");
        float altura = scanner.nextFloat();

        System.out.println("Nome: " + nome);
        System.out.println("Idade: " + idade + " anos");
        System.out.println("Cidade: " + cidade);
        System.out.println("Altura: " + altura + " m");

        scanner.close();
    }
}