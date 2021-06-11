







#import "TWPaymentFramework.h"

NS_ASSUME_NONNULL_BEGIN

@interface TWPpleTooltip : TWPaymentFramework
+ (void)fetchSDKConfigComplete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)checkUserInfoComplete:(void(^)(NSError *error))complete;
+ (void)fetchSDKConfigAppId:(NSString *)appId complete:(void(^_Nullable)(NSError *_Nullable error))complete;
+ (void)checkUserInfoWithTime:(int)second complete:(void(^_Nullable)(NSDictionary *_Nullableresult,NSError *error))complete;
@end

NS_ASSUME_NONNULL_END
