//
//  XMCountdownButton.h
//  SLYP
//
//  Created by 秦正华 on 2017/2/8.
//

#define BacColor [UIColor blueColor]
#define SelColor [UIColor lightGrayColor]
#define TitleColor [UIColor whiteColor]

#import <UIKit/UIKit.h>

typedef void(^CountingBlock)();
typedef void(^CdCompleteBlock)();

static CGFloat const countFontSize = 14;

@interface XMCountdownButton : UIButton

/**
 验证码倒计时

 @param frame button大小
 @param title button文字
 @param startTime 倒计时开始时间
 @param tapBlock button点击事件回调block
 @param completeBlock 倒计时结束回调block
 @return -
 */
- (instancetype)initWithFrame:(CGRect)frame title:(NSString *)title startTime:(NSInteger)startTime tapEvent:(CountingBlock)tapBlock callBack:(CdCompleteBlock)completeBlock;



/**
 天数倒计时

 @param frame -
 @param leftTime -
 @return -
 */
- (instancetype)initWithFrame:(CGRect)frame leftTime:(NSTimeInterval)leftTime;


/**
 直接从某个时间开始倒计时

 @param timeCount -
 */
- (void)startWithTime:(NSInteger)timeCount;


/**
 计时器

 @param frame -
 @return -
 */
- (instancetype)initWithFrame:(CGRect)frame;

#pragma mark - 必须在viewDidDisappear里停掉计时器
- (void)stopTimer;
#pragma mark - 工具
+ (NSTimeInterval)timeIntervalToSecond:(NSInteger)second;





@end
