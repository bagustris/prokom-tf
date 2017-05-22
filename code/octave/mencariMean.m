function mean = mencariMean(x)
% MyMean Mean
% For a vector x, mymean(x) returns the mean of x;
%
% For a matrix x, mymean(x) acts columnwise.
[m n] = size(x);
if m == 1
m = n;
% handle case of a row vector
end
mean = sum(x)/m;