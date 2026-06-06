public class LibraryInterfaceDemo {
    public static void main (String[]arg){

        KidUser kid=new KidUser();

        kid.age=10;
        kid.registerAccount();

        kid.age=18;
        kid.registerAccount();

        kid.bookType="kids";
        kid.requestBook();

        kid.bookType="Fiction";
        kid.requestBook();

        System.out.println();

        AdultUser adult= new AdultUser();

        adult.age= 5;
        adult.registerAccount();

        adult.age= 23;
        adult.registerAccount();

        adult.bookType="kids";
        adult.requestBook();

        adult.bookType="Fiction";
        adult.requestBook();
    }
}