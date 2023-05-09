function pred=smoothKNNK(x,N,C,t,focal)
Idx = knnsearch(C,x,'K',N);
pred0=exp(t(Idx,:));
pred=mean(pred0,1);

end