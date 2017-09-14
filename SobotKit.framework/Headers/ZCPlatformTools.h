//
//  ZCPlatformTools.h
//  SobotKit
//
//  Created by zhangxy on 2017/9/4.
//  Copyright © 2017年 zhichi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZCLibMessage.h"
#import "ZCPlatformInfo.h"
#define LOCAL_AppkeyPrefix @"ZCPrefixLocal"
#define LOCAL_AppkeyTEMPPrefix @"PFKEYTEMP_"



@interface ZCPlatformTools : NSObject

+ (instancetype)sharedInstance;


/**
 获取平台咨询过的商户列表

 本地获取，主线程执行即可
 @return 商户列表
 */
-(NSMutableArray *) getPlatformList;

/**
 删除商家信息

 @param appkey 商户APPKEY
 */
-(void)deletePlatformByAppKey:(NSString *) appkey;
-(void)cleanPlatformList;


-(ZCPlatformInfo *)getPlatformInfo:(NSString *) appkey;
-(void)savePlatformInfo:(ZCPlatformInfo *)platformInfo;
-(void)savePlatformInfo:(ZCPlatformInfo *)platformInfo cache:(BOOL) isCache;


//////////////////////////////////////////
-(ZCPlatformInfo *)getPlatformInfo;
-(ZCLibMessage *)getWaitintMessage;


/**
 获取当前商户消息列表

 @param appkey 具体商户APPKEY
 @return 最新消息列表
 */
-(NSMutableArray *)getMessageForAppkey:(NSString *) appkey;





-(void)cleanCacheData;
-(void)cleanCacheDataByAppkey:(NSString *) appkey;
+(void)cleanLocalParamterByPrefix:(NSString *) prefix;


/**
 判断当前初始化条件是否改变
 
 @return YES 需要从新初始化，NO不需要重新初始化
 */
+(BOOL) checkInitParameterChanged;

@end
