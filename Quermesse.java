
import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        Scanner ler = new Scanner(System.in);
        int N, teste = 0;
        int[] entrada = new int[10000];
        int[] resultado = new int[100];
        boolean achou = false;

        N = ler.nextInt();

        while (N != 0) {
            for (int i = 0; i<N; i++) {
                entrada[i] = ler.nextInt();
            }            
            for (int i = 1; i <= N ; i++) {
                if(i == entrada[i-1]){
                    resultado[teste]=i;
                    teste++;
                    achou = true;
                    break;
                }
            }
            
            if(!achou){
                resultado[teste]=0;
                teste++;
            }    
           
            achou = false;
            N = ler.nextInt();
        }
        
        for(int i=0; i<teste; i++){
            System.out.println("Teste " + (i+1));
            System.out.println(resultado[i]);
            System.out.println("");            
        }        

    }
}
