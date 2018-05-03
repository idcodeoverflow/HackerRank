import java.util.*;
import java.io.*;

public class BirthdayChocolate {
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		int month = 0, day = 0, n = 0, count = 0, bar[] = new int[103], i = 0, j = 0, sum = 0;
		
		n = sc.nextInt();
		for(; i < n; i ++) {
			bar[i] = sc.nextInt();
		}
		
		day = sc.nextInt();
		month = sc.nextInt();
		
		for(i = 0; i < n; i++) {
			sum = 0;
			for(j = 0; sum <= day && j < month && j < n; j++) {
				sum += bar[i + j];
				if(sum == day && month == j + 1) {
					count++;
				}
			}
		}
		System.out.println(count);
	}
}
