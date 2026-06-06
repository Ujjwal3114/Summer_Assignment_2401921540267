public class AdultUser implements LibraryUser{
    int age;
    String bookType;

    @Override
    public void registerAccount(){
        if(age> 12) System.out.println("you have successfully register under an Adult Account");
        else System.out.println("Sorry, age must be greater than 12 to register as an adult");
    }

    @Override
    public void requestBook(){
        if("Fiction".equals(bookType)) System.out.println("Book issued successfully, please return the book wwithin 7 days");
        else System.out.println("Oops , you are allowed to take only adult Fiction books");
    }
}