% knowledgeatend.m : menghitung persentase penguasan materi berdasar 
% jumlah hari belajar di luar jam kuliah

% jumlah detik dalam sehari belajar
secPerDay=60*60*1;

% koefisien pembelajaran
tau=25*secPerDay;    

% jumlah hari belajar dalam satu semester
endOfClass=34*secPerDay; 

knowledgeAtEnd=1-exp(-endOfClass/tau);

 % titik tiga untuk berganti baris bila tidak cukup
disp(['Di akhir kuliah Prokom, Saya akan menguasai ' ...
num2str(knowledgeAtEnd*100) ' % Pemrograman Octave/MATLAB'])
