import java.util.*;

class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int l = sc.nextInt();
        sc.nextLine();
        int s_count = 0, count = 0;
        for (int i = 0; i < n; i++) {
            int a = sc.nextInt();
            if (a <= l && s_count < 2){
                count++;
            }else if (a > l){
                s_count++;
            }
        }
        System.out.println(count);
    }
}
