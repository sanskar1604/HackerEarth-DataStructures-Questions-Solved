import java.util.*;
public class TestClass {
  public static void monkAndPowerOfTime(Deque<Integer> callOrder, int[] idealOrder) {
    int count = 0;
    for (int i = 0; i < idealOrder.length; i++) {
      if (callOrder.peek() == idealOrder[i]) {
        callOrder.remove();
      } else {
        callOrder.addLast(callOrder.poll());
        i--;
      }
      count++;
    }
    System.out.println(count);
  }

  public static void main(String[] args) {
    Scanner s = new Scanner(System.in);
    int sizeOfArrays = s.nextInt();
    s.nextLine();
    String[] strArr = s.nextLine().split(" ");
    Deque<Integer> deque = new ArrayDeque<>();
    for (int i = 0; i < sizeOfArrays; i++) {
      deque.add(Integer.parseInt(strArr[i]));
    }
    strArr = s.nextLine().split(" ");
    int[] idealOrder = new int[sizeOfArrays];
    for (int i = 0; i < sizeOfArrays; i++) {
      idealOrder[i] = Integer.parseInt(strArr[i]);
    }
    monkAndPowerOfTime(deque, idealOrder);
  }
}