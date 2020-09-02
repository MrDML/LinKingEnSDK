//
//  LEMatrixApi.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/18.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import "LEBaseApi.h"

NS_ASSUME_NONNULL_BEGIN

@interface LEMatrixApi : LEBaseApi
+ (void)fetchMatrixConfigComplete:(void(^_Nullable)(NSError *_Nullable error,id _Nullable responseObject))complete;
@end

NS_ASSUME_NONNULL_END
