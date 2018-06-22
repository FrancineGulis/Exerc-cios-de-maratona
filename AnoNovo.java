/**************************************************************
ANONOVO - Ano Novo

Hoje é 31 de dezembro, véspera de ano novo! Várias pessoas costumam comemorar esta data com fogos de artifício, champanhe, uvas, etc.

Além disso, também é comum fazer uma contagem regressiva, em segundos, para a meia-noite. Assim, se a contagem começar, por exemplo, às 23:59:50, uma contagem de 10 segundos é feita: a sequência (10, 9, 8, ..., 2, 1, 0) é falada, um número por segundo. Ao término da sequência, será exatamente meia-noite, e o novo ano iniciará.

Dado o horário de início da contagem regressiva, determine por quantos segundos ela deve durar.

Entrada
A entrada contém vários casos de teste. Cada caso de teste é descrito em uma linha contendo o horário de início da contagem, no formato hh:mm:ss (entre 00:00:00 e 23:59:59). Todos os números têm dois dígitos (com zero à esquerda, se necessário).

A entrada termina com EOF.

Saída
Para cada caso de teste, imprima uma única linha, contendo a quantidade de segundos que a contagem deve durar.

****************************************************************/



import java.io.*;
import java.util.StringTokenizer;


class Main {

    public static void main(String[] args) {
        MyScanner ler = new MyScanner();
        out = new PrintWriter(new BufferedOutputStream(System.out));

        int H, M, S, segundos = 0, cont = 0;
        int[] vet = new int[100];
        String horario;
        horario = ler.nextLine();

        while /*(horario != null)*/ (!(horario.equals(""))) {
            H = Integer.parseInt(horario.substring(0, 2));
            M = Integer.parseInt(horario.substring(3, 5));
            S = Integer.parseInt(horario.substring(6, 8));

            if ((H<24) && (M<60) && (S<60)) {

                segundos = 86400 - S - 60 * M - 3600 * H;

                vet[cont] = segundos;
                cont++;
            }
            horario = ler.nextLine();
        }
        for (int i = 0; i < cont; i++) {
            out.println(vet[i]);
        }

        out.close();
    }
    
    

    //-----------PrintWriter for faster output---------------------------------
    public static PrintWriter out;

    //-----------MyScanner class for faster input----------
    public static class MyScanner {

        BufferedReader br;
        StringTokenizer st;

        public MyScanner() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}
