function r=smoothKNNK(x,N,C,t)
Idx = knnsearch(C,x,'K',N);
pred=t(Idx);
pred=mean(pred,2);
r=pred;
end