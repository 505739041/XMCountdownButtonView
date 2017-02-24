# XMCountdownButtonView
电商抢购倒计时及验证码按钮封装（GCD）

         //验证码按钮
         XMCountdownButton *buttonOne = [[XMCountdownButton alloc]initWithFrame:CGRectMake(100, 100, 100, 30) title:@"发送验证码" startTime:5 tapEvent:^{
             NSLog(@"123");
         } callBack:^{
             NSLog(@"456");
         }];
         [self.view addSubview:buttonOne];
    
         //抢购倒计时
         XMCountdownButton *buttonTwo = [[XMCountdownButton alloc]initWithFrame:CGRectMake(20, 200, 200, 30) leftTime:24*60*60];
         [self.view addSubview:buttonTwo];
         buttonTwo.backgroundColor = [UIColor lightGrayColor];

