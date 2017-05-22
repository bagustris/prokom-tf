  % akar.m 
% program untuk mencari akar-akar persamaan kuadrat

close all; clear all; clc;
a=input('Masukkan nilai A= ');
b=input('Masukkan nilain B= ');
c=input('Masukkan nilai C= ');

% next: cek apakan nilai A > 0

d=(b^2)-(4*a*c);
if b > 0;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    disp(['x1= ' num2str(x1)])
    disp(['x2= ' num2str(x2)])
else
    disp('akar imajiner')
end