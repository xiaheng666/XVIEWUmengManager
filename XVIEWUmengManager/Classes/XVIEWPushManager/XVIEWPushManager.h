//
//  XVIEWPushManager.h
//  XVIEWPushManager
//
//  Created by yyj on 2018/12/29.
//  Copyright © 2018 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWPushManager : NSObject

/**
 * 单例
 */
+ (instancetype)sharedPushManager;

/**
 * 注册推送
 @param param   data{launchOptions 启动参数,appId:推送key}
                callback:回调方法
 */
- (void)registerApp:(NSDictionary *)param;

/**
 * 注册设备
 @param param           deviceToken  设备
 */
- (void)registerDevice:(NSDictionary *)param;

/**
 * 取消推送
 */
- (void)unregisterPush:(NSDictionary *)param;;

/**
 * 设置别名
 @param param    data{alias   别名}
                 callback:回调方法
 */
- (void)setAlias:(NSDictionary *)param;

/**
 * 删除别名
 @param param    data{alias   别名}
                 callback:回调方法
 */
- (void)deleteAlias:(NSDictionary *)param;

/**
 * 设置tags
 @param param         data{tags   tags的数组，单个tag最大允许长度128字节，编码UTF-8，超过长度绑定失败}
                      callback:回调方法
 */
- (void)addTags:(NSDictionary *)param;

/**
 * 删除tags
 @param param           data{tags:tags数组}
                        callback:回调方法
 */
- (void)deleteTags:(NSDictionary *)param;

/**
 * 获取所有tags
 @param param           callback 回调方法
 */
- (void)getAllTags:(NSDictionary *)param;

@end
