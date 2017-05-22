## % nilai.m: program mencari nilai

n1=input('masukkan nilai pertama= ');
n2=input('masukkan nilai kedua= ');
n3=input('masukkan nilai ketiga= ');
n4=input('masukkan nilai keempat= ');

% mencari nilai rata2
nbar = (n1+n2+n3+n4)/4;

if nbar < 50;
    disp('FAIL');
elseif nbar ==50
    disp('I don not know')
else
    disp('PASS')
end
