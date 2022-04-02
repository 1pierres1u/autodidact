package com.example;

class A{
	private int ix;
	private boolean bx;
	private float fx;
	private String sx;
	private char cx;

        public A(){
		ix =0;
		bx = false;
		fx =0;
		sx ="";
		cx = '0';
	}

	public int add(int i){
		return  ix +  i;
	}
}

public class App{
	public static void main(String[] args){
		System.out.println("Hello, World!");
		A a = new A();
		System.out.println(a.add(9));
	}
}

