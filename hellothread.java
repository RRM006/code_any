public class hellothread {

public static void main(String[] args){

Thread t = new Thread(() -> {



System.out.println("THIS FROM THREAD --  hello world!/n"  );

});


 t.start();


   System.out.println("FROM  Main --- Hello world!\n");
} 
}
