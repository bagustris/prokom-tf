% fungsibintang.m : fungsibintang(n)
% fungsi untuk menampilkan bintang
% n = input
% [] = output
function [] = fungsibintang(n)
for i = 1:n
    % print spaces
    for j = 1:n-i
    fprintf(' ');
    end
    % print stars
    for j = 1:i
    fprintf('*');   
    end
fprintf('\n');
end
end