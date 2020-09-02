//
//  LEFBShareManager.h
//  LinKingEnSDK
//
//  Created by leoan on 2020/8/19.
//  Copyright © 2020 dml1630@163.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LEFBShareManager : NSObject


+ (instancetype)shared;


/// 分享链接 + 引文 + 标签
/// @param linkUrl 链接  https://developers.facebook.com
/// @param quote 引文
/// @param hashtag 标签
/// @param viewController viewController description
- (void)shareLink:(NSString * _Nullable)linkUrl quote:(NSString *_Nullable)quote hashtag:(NSString *_Nullable)hashtag viewController:(UIViewController *)viewController complete:(void(^)(NSDictionary <NSString *, id> * _Nullable results,BOOL isCancel,NSError  * _Nullable error))complete;
///  分享单张图片
/// @param imageURL 单张图片URL
/// @param viewController viewController description
- (void)shareImageURL:(NSURL *)imageURL viewController:(UIViewController *)viewController complete:(void(^)(NSDictionary <NSString *, id> * _Nullable results,BOOL isCancel,NSError  * _Nullable error))complete;
/// 分享多张图片
/// @param imageURLs imageURLs description
/// @param viewController viewController description
- (void)shareImageURLs:(NSArray<NSURL *>* _Nullable)imageURLs viewController:(UIViewController *)viewController complete:(void(^)(NSDictionary <NSString *, id> * _Nullable results,BOOL isCancel,NSError  * _Nullable error))complete;

/// 分享视频
/// @param videoURL videoURL description
/// @param viewController viewController description
- (void)shareVideoURL:(NSURL * _Nullable)videoURL viewController:(UIViewController *)viewController complete:(void(^)(NSDictionary <NSString *, id> * _Nullable results,BOOL isCancel,NSError  * _Nullable error))complete;

/// 分享多媒体
/// @param imageURL 图片资源
/// @param videoURL 视频资源
/// @param viewController viewController description
- (void)shareMediaImageURL:(NSURL * _Nullable)imageURL videoURL:(NSURL * _Nullable)videoURL viewController:(UIViewController *)viewController complete:(void(^)(NSDictionary <NSString *, id> * _Nullable results,BOOL isCancel,NSError  * _Nullable error))complete;


@end

NS_ASSUME_NONNULL_END
