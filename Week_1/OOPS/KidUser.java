public class KidUser implements LibraryUser{
    int age;
    String bookType;

    @Override
    public void registerAccount(){
        if( age< 12){
            System.out.println("You have successfully register under a kids Account");
        }
        else System.out.println("Sorry, Age ust be less than 12 to register as a kid");
    }

    @Override
        public void requestBook(){
            if("kids".equals(bookType)) System.out.println("Book issued successfully, please return the book within 10 days");
            else System.out.println("Oops, you are allowed to take only kids books");
        }
    
}