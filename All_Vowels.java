import java.io.*;
import java.util.*;
class A{
    public static void main(String...args)throws Exception{
        Scanner sc = new Scanner(System.in);
        int l = sc.nextInt();
        String s = sc.next(), s1 = ""+'a', s2 = ""+'e', s3 = ""+'i', s4 = ""+'o', s5 = ""+'u';
        if(s.contains(s1) && s.contains(s2) && s.contains(s3) && s.contains(s4) && s.contains(s5))
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}