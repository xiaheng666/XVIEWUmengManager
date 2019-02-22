//
//  XVIEWUmengManager.h
//  XVIEWUmengManager
//
//  Created by zd on 2019/2/22.
//  Copyright © 2019 zd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XVIEWUmengManager : NSObject

/**
 *  单例
 */
+ (instancetype)sharedUmengManager;

/**
 *  注册友盟
 @param param    data    {appId  友盟key},
 */
- (void)registerApp:(NSDictionary *)param;

@end
