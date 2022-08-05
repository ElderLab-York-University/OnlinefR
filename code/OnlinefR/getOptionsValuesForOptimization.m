
function options = getOptionsValuesForOptimization(whichFun, test_num)


if strcmp(whichFun, 'fminsearch')
    options = optimset('fminsearch');
    switch test_num
        case 1
            
        case 2
            options.TolFun = 1e-3;
        case 3
            options.TolX = 1e-3;
        case 4
            options.TolFun = 1e-3;
            options.X = 1e-3;
        otherwise
            fprintf('Incorrect Test Number Given in getOptionsValuesForOptimizationResults() - exiting...\n');
            options = [];
    end
elseif strcmp(whichFun, 'fminunc')
    options = optimset('fminunc');
    options.LargeScale = 'off';
    options.Display = 'off';
    switch test_num
        case 1
            options.TolFun = 1;
            options.TolX = 1;
        case 2
            options.TolFun = 1;
            options.TolX = 1e-1;
        case 3
            options.TolFun = 1;
            options.TolX = 1e-2;
        case 4
            options.TolFun = 1;
            options.TolX = 1e-3;
        case 5
            options.TolFun = 1;
            options.TolX = 1e-4;
        case 6
            options.TolFun = 1;
            options.TolX = 1e-5;
        case 7
            options.TolFun = 1;
            options.TolX = 1e-6;
        case 8
            options.TolFun = 1e-1;
            options.TolX = 1;
        case 9
            options.TolFun = 1e-1;
            options.TolX = 1e-1;
        case 10
            options.TolFun = 1e-1;
            options.TolX = 1e-2;
        case 11
            options.TolFun = 1e-1;
            options.TolX = 1e-3;
        case 12
            options.TolFun = 1e-1;
            options.TolX = 1e-4;
        case 13
            options.TolFun = 1e-1;
            options.TolX = 1e-5;
        case 14
            options.TolFun = 1e-1;
            options.TolX = 1e-6;
        case 15
            options.TolFun = 1e-2;
            options.TolX = 1;
        case 16
            options.TolFun = 1e-2;
            options.TolX = 1e-1;    
        case 17
            options.TolFun = 1e-2;
            options.TolX = 1e-2;
        case 18
            options.TolFun = 1e-2;
            options.TolX = 1e-3;
        case 19
            options.TolFun = 1e-2;
            options.TolX = 1e-4;
        case 20
            options.TolFun = 1e-2;
            options.TolX = 1e-5;
        case 21
            options.TolFun = 1e-2;
            options.TolX = 1e-6;
        case 22
            options.TolFun = 1e-3;
            options.TolX = 1;    
        case 23
            options.TolFun = 1e-3;
            options.TolX = 1e-1;
        case 24
            options.TolFun = 1e-3;
            options.TolX = 1e-2;
        case 25
            options.TolFun = 1e-3;
            options.TolX = 1e-3;
        case 26
            options.TolFun = 1e-3;
            options.TolX = 1e-4;
        case 27
            options.TolFun = 1e-3;
            options.TolX = 1e-5;
        case 28
            options.TolFun = 1e-3;
            options.TolX = 1e-6;
        case 29
            options.TolFun = 1e-4;
            options.TolX = 1;
        case 30
            options.TolFun = 1e-4;
            options.TolX = 1e-1;
        case 31
            options.TolFun = 1e-4;
            options.TolX = 1e-2;
        case 32
            options.TolFun = 1e-4;
            options.TolX = 1e-3;
        case 33
            options.TolFun = 1e-4;
            options.TolX = 1e-4;
        case 34
            options.TolFun = 1e-4;
            options.TolX = 1e-5;
        case 35
            options.TolFun = 1e-4;
            options.TolX = 1e-6;
        case 36
            options.TolFun = 1e-5;
            options.TolX = 1;
        case 37
            options.TolFun = 1e-5;
            options.TolX = 1e-1;
        case 38
            options.TolFun = 1e-5;
            options.TolX = 1e-2;
        case 39
            options.TolFun = 1e-5;
            options.TolX = 1e-3;
        case 40
            options.TolFun = 1e-5;
            options.TolX = 1e-4;
        case 41
            options.TolFun = 1e-5;
            options.TolX = 1e-5;
        case 42
            options.TolFun = 1e-5;
            options.TolX = 1e-6;
        case 43
            options.TolFun = 1e-6;
            options.TolX = 1;
        case 44
            options.TolFun = 1e-6;
            options.TolX = 1e-1;
        case 45
            options.TolFun = 1e-6;
            options.TolX = 1e-2;
        case 46
            options.TolFun = 1e-6;
            options.TolX = 1e-3;
        case 47
            options.TolFun = 1e-6;
            options.TolX = 1e-4;
        case 48
            options.TolFun = 1e-6;
            options.TolX = 1e-5;
        case 49
            options.TolFun = 1e-6;
            options.TolX = 1e-6;
        
        otherwise
            fprintf('Incorrect Test Number Given in getOptionsValuesForOptimizationResults() - exiting...\n');
            options = [];
            
    end
else
    fprintf('Incorrect function specified in getOptionsValuesForOptimizationResults() - exiting...\n');
    options = [];
end

% options.LineSearchType = 'cubicpoly'
