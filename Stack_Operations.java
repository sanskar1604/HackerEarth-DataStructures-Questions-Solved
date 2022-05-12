import java.util.*;

public class Test {
public static void main(String args[]) {
	Scanner sc=new Scanner(System.in);
	Stack<Long> st=new Stack<Long>();
	int n=sc.nextInt();
	int k=sc.nextInt();
	long[] arr=new long[n];
	for(int i=0;i<n;i++) {
		arr[i]=sc.nextLong();
	}
	for(int i=n-1;i>=0;i--) {
		st.add(arr[i]);
	}
	if(k%2!=0 && n==1) {
		System.out.println(-1);
	}
	else if(k>n) {
		Arrays.sort(arr);
		System.out.println(arr[n-1]);
	}
	else {
		List<Long> li=new ArrayList<Long>();
		for(int i=0;i<k-1;i++) {
			li.add(st.pop());
		}
		long last=st.pop();
		long afterlast=st.peek();
		Collections.sort(li);
		long max=li.get(li.size()-1);
		if(last>max && afterlast>max) {
			System.out.println(afterlast);
		}else
			System.out.println(max);
	}
	sc.close();
}

}