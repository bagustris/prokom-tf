% ifDemo.m

n = input ('Masukkan angka dari 1 - 100 : ');

if n >= 1 && n<33
        disp ('Anda memasukkan angka kecil')
elseif n>=33 && n<67
        disp ('Anda memasukkan angka medium');
elseif n>=67 && n<=100
        disp ('Anda memasukkan angka besar');
else
        disp ('And memasukkan angka yang salah');
end