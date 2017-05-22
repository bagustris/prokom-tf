% biseksi.m : mencari akar kuadrat dengan numerik

clear all; close all; clc
x=input('Masukkan angka: ');        % Masukkan angka           
error = 0.1;                        % error yang diinginkan
tebakan = 0;
atas = x;   
bawah = 0;

akar = ( atas + bawah ) / 2.0 ;

while abs(akar^2-x) >= error
    disp(['bawah = ' num2str(bawah) ' atas =' num2str(atas) ' akar = ' num2str(akar)])
    if akar^2 > x
        atas = akar;  
    else
        bawah = akar;
    end
    
    akar = (atas + bawah) / 2.0;
    tebakan = tebakan + 1;
end

disp(['banyak tebakan=' num2str(tebakan)]);
disp(['Akar ' num2str(x) ' adalah ' num2str(akar)])