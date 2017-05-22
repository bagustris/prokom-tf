% jumlah.m : demo fungsi dengan nargin dan varargin
function [jml, mean] = jumlah(varargin)
   jml  = 0;
   for i=1:nargin
       jml =jml + varargin{i};
       mean= jml/nargin;
   end
end