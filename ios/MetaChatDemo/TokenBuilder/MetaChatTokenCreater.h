//
//  MetaChatTokenCreater.h
//  MetaChatDemo
//
//  Created by 胡润辰 on 2022/5/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MetaChatTokenCreater : NSObject

+ (NSString *)createRTMTokenWithAppid:(NSString *)appid certificate:(NSString *)certificate userid:(NSString *)userid;

@end

NS_ASSUME_NONNULL_END
