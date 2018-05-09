import java.util.*;
import java.io.*;

public class PickingNumbers {
	
	public static void main(String args[]) {
		int n = 0, numbers [] = new int[103], i = 0, max = 0, temp = 0, countA = 0, countB = 0;
		SortedSet<Integer> keys = new TreeSet<>();
		Map<Integer, Integer> count = new HashMap<>();
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		
		n = sc.nextInt();
		
		for(; i < n; i++) {
			numbers[i] = sc.nextInt();
			if(count.containsKey(numbers[i])) count.put(numbers[i], count.get(numbers[i]) + 1);
			else {
				count.put(numbers[i], 1);
				keys.add(numbers[i]);
			}
		}
		Integer previous = -1;
		for(Integer val : keys) {
			if(previous == -1) 
				max = count.get(val);
			if(previous != -1 || val - previous == 1) {
				temp = count.get(previous) + count.get(val);
				if(temp > max && Math.abs(val - previous) == 1) {
					max = temp;	
				} else if(max < count.get(previous)) {
					max = count.get(previous);
				} else if(max < count.get(val)) {
					max = count.get(val);
				}
			} 
			previous = val;
		}
		System.out.println(max);
		
	}
}
