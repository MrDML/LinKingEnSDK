//
//  NSBundle+LEAdditions.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/10.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (LEAdditions)
+ (NSBundle *)le_loadBundleClass:(Class)aClass bundleName:(NSString *)bundleName;
+ (NSString *)le_localizedStringForKey:(NSString *)key;
+ (NSString *)le_localizedStringForKey:(NSString *)key value:(NSString *)value;
@end

NS_ASSUME_NONNULL_END
