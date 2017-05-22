% caseDemo.m

n = input ('Masukkan angka dari 1 - 100 : ');

switch n
    case num2cell(1:33)
        disp ('Anda memasukkan angka kecil')
    case num2cell(34:67)
        disp ('Anda memasukkan angka medium');
    case num2cell(68:100)
        disp ('Anda memasukkan angka besar');
    otherwise
        disp ('And memasukkan angka yang salah');
end