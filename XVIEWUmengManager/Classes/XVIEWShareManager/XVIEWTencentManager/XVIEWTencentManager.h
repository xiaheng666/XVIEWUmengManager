//
//  XVIEWTencentManager.h
//  XVIEWTencentManager
//
//  Created by yyj on 2019/1/3.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XVIEWUmengShareManager.h"

@interface XVIEWTencentManager : XVIEWUmengShareManager

/**
 *  单例
 */
+ (instancetype)sharedTencentManager;

/**
 *  注册qq
 @param param    data    {appId  qq的appid}
 */
- (void)registerApp:(NSDictionary *)param;

/**
 *  qq支付
 @param param     data:{"payData":支付参数,"orderNum":订单号}
                  callback:回调方法
 }
 */
- (void)qqPay:(NSDictionary *)param;

/**
 *  qq登陆
 @param param     callback:回调方法
 }
 */
- (void)qqLogin:(NSDictionary *)param;

/**
 *  qq分享
 @param param     data:{platform:分享的平台QQ/QZONE  QQ/QQ空间,shareData:分享类型,shareDataKey:分享类型的参数}
                  callback:回调方法
 */
- (void)qqShare:(NSDictionary *)param;

/**
 *  qq返回回调
 @param param     data:{url:回调url}
                  callback:回调方法
 }
 */
- (BOOL)handleUrl:(NSDictionary *)param;

@end
