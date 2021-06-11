







#import "TWIconCheckerController.h"
@class TWSwizzler;
NS_ASSUME_NONNULL_BEGIN

@interface TWSilhouetteController : TWIconCheckerController
@property (nonatomic,copy)void(^bindingCompleteCallBack)(TWSwizzler *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
