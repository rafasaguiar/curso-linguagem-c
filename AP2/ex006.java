import java.util.Scanner;

public class ex006 {

    public static void main (String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Digite um numero: ");
        int numero = scanner.nextInt();

        int maior = numero;
        int menor = numero;

        for (int i = 0; i < 9; i++) {
            System.out.println("Digite um numero: ");
            int number = scanner.nextInt();

            if (number > maior) {
                maior = number;
            }
            if (number < menor) {
                menor = number;
            }
        }
        System.out.println("O maior numero e: " + maior);
        System.out.println("O menor numero e: " + menor);

        scanner.close();
    }
}