//
//  XVIEWAnalyzeManager.h
//  XVIEWAnalyzeManager
//
//  Created by yyj on 2018/12/29.
//  Copyright © 2018 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWAnalyzeManager : NSObject

/**
 * 单例
 */
+ (instancetype)sharedAnalyzeManager;

/**
 * 初始化友盟统计
 @param param     data:{@"appId":统计secrect}
 */
- (void)registerApp:(NSDictionary *)param;

/**
 * 是否越狱
 @param param    callback:回调方法
 */
- (void)cycript:(NSDictionary *)param;

/**
 * 是否被破解
 @param param    callback:回调方法
 */
- (void)broken:(NSDictionary *)param;

#pragma mark ============================= 页面统计 ===========================
/**
 * 页面开始
 @param param    data:{pageName:页面名称}
 */
- (void)pageStart:(NSDictionary *)param;

/**
 * 页面结束
 @param param    data:{pageName:页面名称}
 */
- (void)pageEnd:(NSDictionary *)param;

#pragma mark ============================= 事件统计 ===========================
/**
 * 事件统计
 @param param    data:{eventID:事件id,label:事件标签}
 */
- (void)eventOn:(NSDictionary *)param;

#pragma mark ============================= 账号统计 ===========================
/**
 * 账号登陆
 @param param    data:{id:账号id,provider:不能以下划线"_"开头，使用大写字母和数字标识; 如果是上市公司，建议使用股票代码}
 */
- (void)providerStart:(NSDictionary *)param;

/**
 * 账号退出
 */
- (void)providerEnd:(NSDictionary *)param;

@end
