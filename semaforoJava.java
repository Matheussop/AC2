import java.io.*;
import java.util.Scanner;
public class semaforoJava{
   ProcessBuilder pb;
	Process p;  
   public static void main(String[]args){ 
      while(true){
         Thread thr1 = Thread.currentThread();
         try {
            mudaEstado("13");
            Thread.sleep(3000);
            mudaEstado("11");
            Thread.sleep(4000);
            mudaEstado("12");
            Thread.sleep(2000);    
              
         } catch (InterruptedException ex) {
            System.out.println ("Puxa, estava dormindo! Você me acordou");
         }
         
      }
   }
   public static void mudaEstado(String x){
      pb = new ProcessBuilder("envia.exe","com1",x); // NÃO SE ESQUEÇA DE COLOCAR A PORTA DO ARDUINO !!!!!
      p = pb.start();
   }
}