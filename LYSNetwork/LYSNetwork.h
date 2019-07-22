//
//  LYSNetwork.h
//  LYSNetworkDemo
//
//  Created by HENAN on 2019/7/22.
//  Copyright © 2019 HENAN. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LYSNetwork : NSObject

// HTTPS POST请求
+ (void)requestHTTPSPOSTWithURL:(NSString *)url paramdic:(NSDictionary *)paramDic finish:(void(^)(id responseObject))finish enError:(void(^)(NSError *error))enError;
// HTTP POST请求
+ (void)requestPOSTWithURL:(NSString *)url paramdic:(NSDictionary *)paramDic finish:(void(^)(id responseObject))finish enError:(void(^)(NSError *error))enError;

// HTTP GET请求
+ (void)requestGETWithURL:(NSString *)url paramDic:(NSDictionary *)paramDic finish:(void(^)(id responseObject))finish enError:(void(^)(NSError *error))enError;
// HTTPS POST请求
+ (void)requestHTTPSGETWithURL:(NSString *)url paramDic:(NSDictionary *)paramDic finish:(void(^)(id responseObject))finish enError:(void(^)(NSError *error))enError;

@end

NS_ASSUME_NONNULL_END
