import java.util.Scanner;

public class ex007 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double somaNotas = 0;

        String nomeMaior = "";
        double maiorNota = 0;

        String nomeMenor = "";
        double menorNota = 0;

        for (int i = 1; i <= 10; i++) {
            System.out.print("Nome do aluno " + i + ": ");
            String nome = scanner.nextLine();

            System.out.print("Nota do aluno " + i + ": ");
            double nota = scanner.nextDouble();
            scanner.nextLine();

            somaNotas = somaNotas + nota;

            if (i == 1) {
                maiorNota = nota;
                nomeMaior = nome;
                menorNota = nota;
                nomeMenor = nome;
            } else {
                if (nota > maiorNota) {
                    maiorNota = nota;
                    nomeMaior = nome;
                }
                if (nota < menorNota) {
                    menorNota = nota;
                    nomeMenor = nome;
                }
            }
        }

        double media = somaNotas / 10.0;

        System.out.println("\nMaior nota: " + nomeMaior + " com nota " + maiorNota);
        System.out.println("Menor nota: " + nomeMenor + " com nota " + menorNota);
        System.out.println("Media dos alunos: " + media);

        scanner.close();
    }
}