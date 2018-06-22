/**************************************************************
ANONOVO - Ano Novo

Hoje � 31 de dezembro, v�spera de ano novo! V�rias pessoas costumam comemorar esta data com fogos de artif�cio, champanhe, uvas, etc.

Al�m disso, tamb�m � comum fazer uma contagem regressiva, em segundos, para a meia-noite. Assim, se a contagem come�ar, por exemplo, �s 23:59:50, uma contagem de 10 segundos � feita: a sequ�ncia (10, 9, 8, ..., 2, 1, 0) � falada, um n�mero por segundo. Ao t�rmino da sequ�ncia, ser� exatamente meia-noite, e o novo ano iniciar�.

Dado o hor�rio de in�cio da contagem regressiva, determine por quantos segundos ela deve durar.

Entrada
A entrada cont�m v�rios casos de teste. Cada caso de teste � descrito em uma linha contendo o hor�rio de in�cio da contagem, no formato hh:mm:ss (entre 00:00:00 e 23:59:59). Todos os n�meros t�m dois d�gitos (com zero � esquerda, se necess�rio).

A entrada termina com EOF.

Sa�da
Para cada caso de teste, imprima uma �nica linha, contendo a quantidade de segundos que a contagem deve durar.

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
