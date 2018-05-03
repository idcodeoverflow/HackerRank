import java.util.*;
import java.io.*;

public class AppleAndOrange {
	
	public static void main(String args[]) {
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		int houseStart = 0, houseEnd = 0, apple = 0, orange = 0, nApple = 0, nOrange = 0, temp = 0, countO = 0, i = 0, countA = 0;
		
		houseStart = sc.nextInt();
		houseEnd = sc.nextInt();
		
		apple = sc.nextInt();
		orange = sc.nextInt();
		
		nApple = sc.nextInt();
		nOrange = sc.nextInt();
		
		for(i = 0; i < nApple; i++) {
			temp = sc.nextInt();
			temp += apple;
			if(temp <= houseEnd && temp >= houseStart) {
				countA++;
			}
		}
		
		for(i = 0; i < nOrange; i++) {
			temp = sc.nextInt();
			temp += orange;
			if(temp <= houseEnd && temp >= houseStart) {
				countO++;
			}
		}
		
		System.out.println(countA);
		System.out.println(countO);
	}
}
