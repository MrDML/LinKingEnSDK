







#import "TWIconCheckerController.h"

@class TWSwizzler;
NS_ASSUME_NONNULL_BEGIN

@interface TWEventsController : TWIconCheckerController
@property (nonatomic, assign) BOOL isHiddenCloseView;
@property (nonatomic, assign) BOOL agreement;
@property (nonatomic,copy)void(^changeAccountSuccessCallBack)(void);
@property (nonatomic,copy)void(^loginCompleteCallBack)(TWSwizzler *_Nullable user,NSError * _Nullable error);
@end

NS_ASSUME_NONNULL_END
