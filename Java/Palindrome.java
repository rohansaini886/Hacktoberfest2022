import java.util.Scanner;
 
class ChkPalindrome
{
   public static void main(String args[])
   {
      String str, rev = "";
      Scanner sc = new Scanner(System.in);
 
      System.out.println("Enter a string:");
      str = sc.nextLine();
 
      int length = str.length();
 
      for ( int i = length - 1; i >= 0; i-- )
         rev = rev + str.charAt(i);
 
      if (str.equals(rev))
         System.out.println(str+" is a palindrome");
      else
         System.out.println(str+" is not a palindrome");
 
   }
}

Enter a string:
radar

radar is a palindrome

To check if a string is a palindrome or not, a string needs to be compared with the reverse of itself.

Consider a palindrome string: radar,

---------------------------
index: 0 1 2 3 4

value: r a d a r
---------------------------


report this ad
 





© 2009 — 2022 W3schools® of Technology.
About UsContact UsCopyrightPrivacy Policy
