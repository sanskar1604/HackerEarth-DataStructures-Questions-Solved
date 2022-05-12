import java.io.*;
import java.util.*;
class TestClass {
public static void main(String args[] ) throws Exception {
    Scanner sc = new Scanner(System.in);
    long t = sc.nextInt();
    long n,k,temp = 0, sum = 0;
    int a[] = new int[1000000];
    long res = 0;
    while(t > 0){
        temp = 0;
        sum = 0;
        n= sc.nextInt();
        k= sc.nextInt();
        for(int i = 0; i < n; i++){
            a[i]= sc.nextInt();
            sum +=a[i];
        }
        if(sum/n <= k){
            System.out.println(temp);
        }else{
            res = (sum/(k+1))+1;
            System.out.println(res-n);
        }
        t--;
    }
}
 
}