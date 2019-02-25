//
//  XVIEWUmengShareManager.h
//  XVIEWUmengShareManager
//
//  Created by zd on 2019/2/22.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UMShare/UMShare.h>

typedef void(^ MyCallBack)(NSDictionary *);

@interface XVIEWUmengShareManager : NSObject

@property (copy, nonatomic) MyCallBack callback;

/**
 *  单例
 */
+ (instancetype)sharedUmengShareManager;

/**
 *  注册分享
 @param param    data    {appId  分享的appid}
 */
- (void)registerApp:(NSDictionary *)param withPlatform:(UMSocialPlatformType)platform;

/**
 *  支付
 @param param    callback:回调方法
 */
- (void)pay:(NSDictionary *)param withPlatform:(UMSocialPlatformType)platform;

/**
 *  登陆
 @param param    callback:回调方法
 */
- (void)login:(NSDictionary *)param withPlatform:(UMSocialPlatformType)platform;

/**
 *  分享
 @param param     data:{shareData:分享类型,shareDataKey:分享类型的参数}
 callback:回调方法
 }
 */
- (void)share:(NSDictionary *)param withPlatform:(UMSocialPlatformType)platform;

/**
 *  返回回调
 @param param     data:{url:回调url}
 callback:回调方法
 }
 */
- (BOOL)handleMyUrl:(NSDictionary *)param ;

@end
