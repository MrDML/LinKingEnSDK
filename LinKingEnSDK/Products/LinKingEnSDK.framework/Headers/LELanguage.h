//
//  LELanguage.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/14.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LELanguage : NSObject
+ (instancetype)shared;
@property (copy, nonatomic) NSString * _Nullable preferredLanguage;
@property (strong, nonatomic) NSBundle * _Nullable languageBundle;
@end

NS_ASSUME_NONNULL_END
