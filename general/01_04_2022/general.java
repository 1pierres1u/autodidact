import java.util.Vector;
import java.util.concurrent.ThreadLocalRandom;


class General{
	public static void f(Vector<Integer> V,int L){
		V.clear();
		if(L!=10){
			L = ThreadLocalRandom.current().nextInt(1,10);
		}
		for(int i=0; i<L; i++){
			V.add(ThreadLocalRandom.current().nextInt(0,100));
		}
	}
	public static void main(String[] args){
		Vector<Integer> V=new Vector<>();
		if(args.length>0)
			f(V,Integer.parseInt(args[0]));
	        for(Integer n:V){
			System.out.print(n + " ");
		}	
		System.out.println("");
		
	}
}
