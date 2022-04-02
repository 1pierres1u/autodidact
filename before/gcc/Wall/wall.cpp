#include <iostream>
using  namespace std;

int f(){
	return 0;
}

int main(){
	cout << "Hello world!" << endl;
	//format '%f' expects argument of type 'double', but argument 2 has type 'int'
	printf("Two plus two is %f\n",4);
	float i = 10.4;
	//warning: unused variable 'j'
	int j = i;
	int k;
	return 0;
}


/*
 -Waddress   
-Warray-bounds=1 (only with -O2)  
-Warray-compare 
-Warray-parameter=2 (C and Objective-C only) 
-Wbool-compare  
-Wbool-operation  
-Wc++11-compat  -Wc++14-compat  
-Wcatch-value (C++ and Objective-C++ only)  
-Wchar-subscripts  
-Wcomment  
-Wduplicate-decl-specifier (C and Objective-C only) 
-Wenum-compare (in C/ObjC; this is on by default in C++) 
-Wformat   
-Wformat-overflow  
-Wformat-truncation  
-Wint-in-bool-context  
-Wimplicit (C and Objective-C only) 
-Wimplicit-int (C and Objective-C only) 
-Wimplicit-function-declaration (C and Objective-C only) 
-Winit-self (only for C++) 
-Wlogical-not-parentheses 
-Wmain (only for C/ObjC and unless -ffreestanding)  
-Wmaybe-uninitialized 
-Wmemset-elt-size 
-Wmemset-transposed-args 
-Wmisleading-indentation (only for C/C++) 
-Wmismatched-dealloc 
-Wmismatched-new-delete (only for C/C++) 
-Wmissing-attributes 
-Wmissing-braces (only for C/ObjC) 
-Wmultistatement-macros  
-Wnarrowing (only for C++)  
-Wnonnull  
-Wnonnull-compare  
-Wopenmp-simd 
-Wparentheses  
-Wpessimizing-move (only for C++)  
-Wpointer-sign  
-Wrange-loop-construct (only for C++)  
-Wreorder   
-Wrestrict   
-Wreturn-type  
-Wsequence-point  
-Wsign-compare (only in C++)  
-Wsizeof-array-div 
-Wsizeof-pointer-div 
-Wsizeof-pointer-memaccess 
-Wstrict-aliasing  
-Wstrict-overflow=1  
-Wswitch  
-Wtautological-compare  
-Wtrigraphs  
-Wuninitialized  
-Wunknown-pragmas  
-Wunused-function  
-Wunused-label     
-Wunused-value     
-Wunused-variable  
-Wvla-parameter (C and Objective-C only) 
-Wvolatile-register-var  
-Wzero-length-bounds



Typing
-Wstrict-null-sentinel
-Wdouble-promotion
-Wfloat-equal
-Wcast-qual
-Wzero-as-null-pointer-constant
-Wsign-conversion
-Wlogical-op

Control flow
-Wimplicit-fallthrough=5 (I use C++17)
-Wnull-dereference
-Wduplicated-branches

OOP
-Wctor-dtor-privacy
-Wnon-virtual-dtor
-Wsuggest-final-types
-Wsuggest-final-methods
-Wsuggest-override

Formatted output
-Wformat-overflow
-Wformat-security
-Wformat-signedness

Useless code
-Wuseless-cast
-Wextra-semi
-Wredundant-decls
 */
