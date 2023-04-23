function r=smoothKNNK(x,N,C,t,focal)
Idx = knnsearch(C,x,'K',N);
pred0=t(Idx,:);
if focal==0
    pred=mean(pred0(:,2:3),2);
else
    pred=mean(pred0,2);
end
r=pred;
end