







#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger,LEThirdLogLevel) {
    

    LEThirdLogLevelOff = 0,
    

    LEThirdLogLevelOn = 1
};
NS_ASSUME_NONNULL_BEGIN

@interface TWVia : NSObject
+ (void)setThirdLog:(LEThirdLogLevel)level;
+ (void)setAppsFlyerisDebug:(BOOL)isDebug;
@end

NS_ASSUME_NONNULL_END
