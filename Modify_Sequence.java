import java.util.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        for(int i = 0; i < n-1; i++){
            if(a[i] <= a[i+1]){
                a[i+1] = a[i+1] - a[i];
                a[i] = 0;
            }
        }
        boolean bool = true;
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                System.out.println("NO");
                bool = false;
                break;
            }
        }
        if(bool){
            System.out.println("YES");
        }
    }
}
