public class App {
    public static void main(String[] args) throws Exception {
       Ensturman gitar=new Gitat();
        Gitat gitat1= new Gitat();
        Ensturman pıyono =new Piyono();


        gitar.play();
                        // gitar.setChord(); // Enturman interface oldugundan onun getirdigi gorevleri yerine getirir sadece 
                        gitat1.setChord();
        pıyono.play();

       
       
    }
}
