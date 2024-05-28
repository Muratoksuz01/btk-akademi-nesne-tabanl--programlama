import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {
        List<Emeployee> numbers=Arrays.asList(new Emeployee("40d","adana4" ),
                                            new Emeployee("40d","adana2" ),
                                            new Emeployee("40d","adana3" ),
                                            new Emeployee("40d","adana1" ));
        writeList(numbers);
        System.out.println("-----");
        Collections.sort(numbers);
        writeList(numbers);



    }
    private static void writeList(Iterable collactionIterable){
        for (Object item : collactionIterable) {
            System.out.println(item);
        }
    }
}



