function priarg (varargin)
 % priarg.m : print argument of function
 % equal to command line argumen i C
for i = 1:length(varargin)
    printf("input argument %d:",i);
    disp (varargin{i});
    endfor
endfunction
