public class Conversor{
    public static void main(String args[]){
        int numero = Integer.parseInt(args[0]);
        Pilha p = new Pilha();

        int resto;
        // fase 1 = empilhamento
        while (numero != 0){
            resto = numero % 2; 
            p.push(resto);
            numero = numero / 2;

        }
        //fase 2 = exibir resto
        while (!p.isEmpty()){
            resto = p.pop(); // remove da pilha
            System.out.print(resto);
        }
        System.out.println("\nFim do programa");

    }
}

// 172(10) = 10101100(2)