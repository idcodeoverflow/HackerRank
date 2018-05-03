import java.util.*;
import java.io.*;

public class Kangaroo {
	
	public static int abs(int a) {
		if(a < 0)
			return a * -1;
		return a;
	}
	
	public static void main(String args[]) {
		int x1 = 0, v1 = 0, x2 = 0, v2 = 0, deltaPos = 0, deltaVel = 0;
		Scanner sc = new Scanner(new InputStreamReader(System.in));
		
		x1 = sc.nextInt();
		v1 = sc.nextInt();
		x2 = sc.nextInt();
		v2 = sc.nextInt();
		
		if(x1 > x2 && v1 > v2 || x1 < x2 && v1 < v2 || x1 != x2 && v1 == v2) {
			System.out.println("NO");
		} else {
		
            deltaPos = Kangaroo.abs(x1 - x2);
            deltaVel = Kangaroo.abs(v1 - v2);

            if((deltaPos % deltaVel) == 0 || deltaPos == 0) {
                System.out.println("YES");
            } else {
				System.out.println("NO");
			}
        }
		
	}
}
