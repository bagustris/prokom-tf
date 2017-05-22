% doDemo.m: demoed do-while, works on octave only

n=input('Masukkan angka 1-10: ');

do 
 for i=1:n
     disp('hello world');
 end
 
until (n<=10)
break