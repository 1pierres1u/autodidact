import java.util.Vector;
import java.lang.Math;

class A {
	public A(){}
	public Integer toInteger(boolean b){
		return b?1:0;
	}
	public void operators(Vector<Integer> V,int N, int M){
		V.add(new Integer(N+M));
		V.add(new Integer(N-M));
		V.add(new Integer(N*M));
		V.add(new Integer(N/M));
		V.add(new Integer(N%M));
		V.add(new Integer((int)(Math.pow(N,M))));
		V.add(new Integer(++N));
		V.add(new Integer(N++));
		V.add(new Integer(N--));
		V.add(new Integer(--N));
		V.add(new Integer(toInteger(((N==M)&&(N!=M)))));
		V.add(new Integer(toInteger(((N==M) || (N!=M)))));
		V.add(new Integer(toInteger(!(N==M))));
		V.add(new Integer(N & M));
		V.add(new Integer(N | M));
		V.add(new Integer(N ^ M));
		V.add(new Integer(N<<M));
	}
	public void sizeTypes(){
		System.out.println("size of byte = "+Byte.SIZE/8 + " bytes.");
		System.out.println("size of float = "+Float.SIZE/8 + " bytes.");
		System.out.println("size of integer = " + Integer.SIZE/8 + "bytes.");
		System.out.println("size of double = " + Double.SIZE/8 + " bytes.");
		System.out.println("size of char = " + Character.SIZE/8 + " bytes.");
		System.out.println("size of long = " + Long.SIZE/8 + " bytes.");
		System.out.println("size of short = " + Short.SIZE/8 + " bytes.");
	}
}

public class App{
	public static void main(String[] args){
		A a = new A();
		Vector<Integer> V = new Vector<Integer>();
		a.operators(V,4,2);
		a.sizeTypes();
		System.out.println(V);
	}	
}
