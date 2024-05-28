public class orkestra {
    private Ensturman[] ensturman ={ new Gitat(),new Piyono()};
    public void PlayAll(){
        for (Ensturman ensturman2 : ensturman) {
            ensturman2.play();
        }
    }
}
