import java.util.Scanner;

public class ex005 {

    public static void main (String[] args) {

        Scanner scanner = new Scanner(System.in);

        System.out.println("Qual foi o valor da compra?");
        float valorCompra = scanner.nextFloat();

        if (valorCompra <= 100.00) {
            System.out.println("Percentual do desconto = 0%");
            System.out.println("Valor final: " + valorCompra);
        }
        else if (valorCompra > 100.00 && valorCompra <= 300.00) {
            float descontoA = valorCompra * 0.05f;
            System.out.println("Percentual do desconto = 5%");
            System.out.println("Valor do desconto: " + descontoA);
            float valorFinalA = valorCompra - descontoA;
            System.out.println("Valor final: " + valorFinalA);
        }
        else {
            float descontoB = valorCompra * 0.10f;
            System.out.println("Percentual do desconto = 10%");
            System.out.println("Valor do desconto: " + descontoB);
            float valorFinalB = valorCompra - descontoB;
            System.out.println("Valor final: " + valorFinalB);
        }
        scanner.close();
    }
}