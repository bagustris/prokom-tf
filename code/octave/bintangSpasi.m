% bintangSpasi.m : mencetak bintang Spasi

clear all; close all;

n=input('Masukkan jumlah baris: ');

for i = 1:n
    % cetak spasi
    for j = 1:n-i
    fprintf(' ');
    end
    
    % cetak bintang
    for j = 1:i
    fprintf('*');
    end
    
    fprintf('\n');
end
