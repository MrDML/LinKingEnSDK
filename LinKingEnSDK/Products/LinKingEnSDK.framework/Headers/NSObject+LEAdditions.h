//
//  NSObject+LEAdditions.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/10.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (LEAdditions)
- (id)exceptNull;
- (NSError *)responserErrorMsg:(NSString *)msg code:(int)code;
@end

NS_ASSUME_NONNULL_END
