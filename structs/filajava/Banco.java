public class Banco {
    public static void main(String args[]){
        Fila f;
        int e;
        f = new Fila();

        f.inserir(176);
        f.inserir(914);
        f.inserir(12);
        f.inserir(1002);
        f.inserir(100);

        System.out.println("Bem vindo ao banco xDD!");
        System.out.println("Atendimento");
        while(!f.isEmpty()){
            e = f.retirar();
            System.out.println("Senha a ser atendiade no guiche: " +e);

        }
    }
}
