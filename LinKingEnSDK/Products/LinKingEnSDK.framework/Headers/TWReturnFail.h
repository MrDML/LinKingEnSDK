







#import "TWPaymentFramework.h"

NS_ASSUME_NONNULL_BEGIN

@interface TWReturnFail : TWPaymentFramework
+ (void)fetchMatrixConfigComplete:(void(^_Nullable)(NSError *_Nullable error,id _Nullable responseObject))complete;
@end

NS_ASSUME_NONNULL_END
