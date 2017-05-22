% plotDemo: demo of some plots technique
t = 0:0.1:6.3;
subplot(221); plot (cos(t));
subplot(222); plot (t, cos(t), "-;cos(t);", t, sin(t), "linewidth", 2, "-b;sin(t);");
subplot(223); plot(t, sin(t), 'r', "linewidth", 2);
subplot(224); plot (t, cos(t), 'g',"linewidth", 2, t, sin(t), "linewidth", 2, '--');
