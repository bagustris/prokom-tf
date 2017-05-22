% plotsin.m : mem-plot berdasarkan frekuensi
function plotsin(f)
x=linspace(0,2*pi,f*16+1);
%figure
plot(x,sin(f*x))