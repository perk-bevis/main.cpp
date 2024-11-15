int cur = 1;
        int res = cur;
    
        for (int i = 2; i <= n; ++i) {
            if (a[i]>a[i-1]) cur++;
            else cur = 1;
            res = max(res, cur);
        }
    
        cout << res;
